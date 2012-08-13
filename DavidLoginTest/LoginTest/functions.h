/*struct field{
	char* key;
	char* value;
};*/

char* ClientLogin(char* baseUrl, char* userName, char* password)
{
	//char *baseUrl = "http://192.168.100.53:9292/application/";
	//char *userName = "ckitzua";
	//char *password = "ckitzua";
	char request_json[1080];
	char *param_size = "2000";
	char fullUrl[256];
	char *sessionCookie;

	//Add the Login tag to the BASE URL
	sprintf(fullUrl,"%s/clientlogin", baseUrl);
	//lr_message("Request url: %s", fullUrl);

	lr_save_string(fullUrl, "URL_Param");


	// save json request to param {REQUEST_JSON_PARAM}, parameterize "SomeID" as random number
	sprintf(request_json, "{\"login\":\"%s\",\"password\":\"%s|en-us\",\"remember_me\":\"1\"}", userName, password);
  
	//request_json = lr_eval_string(request_json_base);
	lr_save_string(request_json, "REQUEST_JSON_PARAM");
  
	// set http headers
	web_add_header("Content-Type", "application/json; charset=utf-8");

	web_set_max_html_param_len(param_size);


	// send JSON request
	lr_start_transaction("rest_put");

		web_reg_save_param("sessionCookie", "LB=Set-Cookie: ", "RB= expires", "Search=Headers", LAST);
		web_custom_request("post_to_http_jms_provider",
						   "URL={URL_Param}",
						   "Method=POST",
						   "TargetFrame=",
						   "Resource=0",
						   "Referer=",
						   "Mode=HTTP",
						   "Body={REQUEST_JSON_PARAM}",
						   LAST); 

		sessionCookie = lr_eval_string("{sessionCookie}");
		//lr_message("Session Cookie Response %s", sessionCookie);

	lr_end_transaction("rest_put", LR_AUTO);

	return sessionCookie;
}


char* ClientCreate(char* baseUrl, char* sessionCookie)
{
	//char *baseUrl = "http://192.168.100.53:9292/application/";
	//char *userName = "ckitzua";
	//char *password = "ckitzua";
	char *request_json[1080];
	char *param_size = "1036";
	char fullUrl[256];
	char *clientId;

	//Add the Login tag to the BASE URL
	sprintf(fullUrl,"%s/clientcreate", baseUrl);
	//lr_message("Request url: %s", fullUrl);
	lr_save_string(fullUrl, "URL_Param");

  
	// set http headers
	web_add_header("Content-Type", "application/json; charset=utf-8");
	web_add_header("Cookie", sessionCookie);

	//Set max parameter size for larger responses
	web_set_max_html_param_len(param_size);


	// send JSON request
	lr_start_transaction("rest_put");

	web_reg_save_param("clientId", "LB=client_id\":\"", "RB=\"}}", "Search=Body", LAST);


	web_custom_request("post_to_http_jms_provider",
	 "URL={URL_Param}",
	 "Method=GET",
	 "TargetFrame=",
	 "Resource=0",
	 "Referer=",
	 "Mode=HTTP",
	 LAST); 

	clientId = lr_eval_string("{clientId}");

	//lr_message("Client Id Response %s", clientId);

	lr_end_transaction("rest_put", LR_AUTO);

	return clientId;
}

void ClientRegister(char* baseUrl, char* sessionCookie, char* clientId)
{
	//char *baseUrl = "http://192.168.100.53:9292/application/";
	//char *userName = "ckitzua";
	//char *password = "ckitzua";
	char request_json[1080];
	char *param_size = "1036";
	char fullUrl[256];	
	//char success[1080];

	//Add the Register tag to the BASE URL
	sprintf(fullUrl,"%s/clientregister", baseUrl);
	//lr_message("Request url: %s", fullUrl);
	lr_save_string(fullUrl, "URL_Param");

	// save json request to param {REQUEST_JSON_PARAM}, Pass in device_type, etc.?
	sprintf(request_json, "{\"client_id\":\"%s\",\"device_pin\":\"win32_client\",\"device_port\":\"100\",\"device_type\":\"WINDOWS_DESKTOP\"}", clientId);
	//lr_message("Register: %s", request_json);
	//request_json = lr_eval_string(request_json_base);
	lr_save_string(request_json, "REQUEST_JSON_PARAM");
  
	// set http headers
	web_add_header("Content-Type", "application/json; charset=utf-8");
	web_add_header("Cookie", sessionCookie);

	//Set max parameter size for larger responses
	web_set_max_html_param_len(param_size);


	// send JSON request
	lr_start_transaction("rest_put");

	//web_reg_save_param("clientId", "LB=client_id\":\"", "RB=\"}}", "Search=Body", LAST);

	web_custom_request("post_to_http_jms_provider",
	 "URL={URL_Param}",
	 "Method=POST",
	 "TargetFrame=",
	 "Resource=0",
	 "Referer=",
	 "Mode=HTTP",
	 "Body={REQUEST_JSON_PARAM}",
	 LAST); 

	//web_reg_save_param("success", "LB=Status: ", "RB=Connection: ", "Search=Headers", LAST);

	//clientId = lr_eval_string("{clientId}");

	//lr_message("Client Id Response %s", clientId);

	lr_end_transaction("rest_put", LR_AUTO);

	//return "Success";
}

char* QueryAction(char* baseUrl, char* sessionCookie, char* clientId, char* action)
{	
	char *param_size = "2000";
	char fullUrl[512];
	char *result;
	char *activityId;
	char *version = "3";
	char *token;

	//Add the query to the URL
	sprintf(fullUrl,"%s?client_id=%s&p_size=%s&version=%s&source_name=%s", baseUrl, clientId, param_size, version, action);
	lr_save_string(fullUrl, "URL_Param");
	lr_message(fullUrl);
  
	// Set http headers
	web_add_header("Content-Type", "application/json; charset=utf-8");
	web_add_header("Cookie", sessionCookie);
	lr_message("Session cookie: ",sessionCookie);
	// Set max parameter size for larger responses
	web_set_max_html_param_len(param_size);

	// Send query, receive user token
	lr_start_transaction("rest_put");

		web_reg_save_param("token", "LB=token\":\"", "RB=\"},", "Search=Body", LAST);
		web_reg_save_param("activityId", "LB=activityId\":\"", "RB=\",\"", "Search=Body", LAST);
		//web_reg_save_param("token", "LB=", "RB=", "Search=Body", LAST);

		web_custom_request("post_to_http_jms_provider",
		 "URL={URL_Param}",
		 "Method=GET",
		 "TargetFrame=",
		 "Resource=0",
		 "Referer=",
		 "Mode=HTTP",
		 LAST); 
	
		token = lr_eval_string("{token}");
		activityId = lr_eval_string("{activityId}");
		lr_message("Returned token is: %s", token);
	lr_end_transaction("rest_put", LR_AUTO);

	if(strlen(token) > 0)
	{
		// ===================
		// HANDSHAKE: Respond with user token
		sprintf(fullUrl, "%s&token=%s", fullUrl, token);
		lr_save_string(fullUrl, "URL_Param");
		//lr_message("Requested URL: %s", fullUrl);
		web_reg_save_param("result", "LB=", "RB=", "Search=Body", LAST);		
		lr_start_transaction("rest_put");	
			web_custom_request("post_to_http_jms_provider",
			 "URL={URL_Param}",
			 "Method=GET",
			 "TargetFrame=",
			 "Resource=0",
			 "Referer=",
			 "Mode=HTTP",
			 LAST);
		lr_end_transaction("rest_put", LR_AUTO);
		// ===================
	}
	
	result = lr_eval_string("{result}");	
	lr_message("Result from %s Query: %s", action, result);
	return activityId;
}

void Create(char* baseUrl, char* sessionCookie, char json[1080])
{
	char *param_size = "1036";

	lr_save_string(baseUrl, "URL_Param");


	// save json request to param {REQUEST_JSON_PARAM}, parameterize "SomeID" as random number
	/*sprintf(request_json, "{\"source_name\":\"%s\",\"client_id\":\"%s\",\"create\":{\"%s\":{\"activityId\":\"%s\",\"comments\":\"\",\"date\":\"08\/10\/12\","
						  "\"%s\":\"%s\",\"product\":\"%s\",\"sourceId\":\"%s\"}}", 
			activity, clientId, sourceId, activityId, valueId, value, activity, sourceId);*/
  
	//request_json = lr_eval_string(request_json_base);
	lr_save_string(json, "REQUEST_JSON_PARAM");
  
	// set http headers
	web_add_header("Content-Type", "application/json; charset=utf-8");
	web_add_header("Cookie", sessionCookie);

	web_set_max_html_param_len(param_size);


	// send JSON request
	lr_start_transaction("rest_put");

	//web_reg_save_param("sessionCookie", "LB=Set-Cookie: ", "RB= expires", "Search=Headers", LAST);

	web_custom_request("post_to_http_jms_provider",
	 "URL={URL_Param}",
	 "Method=POST",
	 "TargetFrame=",
	 "Resource=0",
	 "Referer=",
	 "Mode=HTTP",
	 "Body={REQUEST_JSON_PARAM}",
	 LAST); 

	//sessionCookie = lr_eval_string("{sessionCookie}");

	//lr_message("Session Cookie Response %s", sessionCookie);

	lr_end_transaction("rest_put", LR_AUTO);
}

/*char* jsonParser(field fields[])
{

}*/

/*
char* GetActivity(char* baseUrl, char* sessionCookie, char* clientId, char* activity, char* value)
{
	//char *baseUrl = "http://192.168.100.53:9292/application/";
	//char *userName = "ckitzua";
	//char *password = "ckitzua";
	char request_json[1080];
	char *param_size = "2000";
	char *version = "3";
	char fullUrl[256];	
	char *output;
	char valueLB[256];
	//char success[1080];

	//Add the Register tag to the BASE URL
	sprintf(fullUrl,"%s?client_id=%s&p_size=%s&version=%s&source_name=%s", baseUrl, clientId, param_size, version, activity);
    lr_message("Request url: %s", fullUrl);
	lr_save_string(fullUrl, "URL_Param");
  
	// set http headers	
	web_add_header("Content-Type", "application/json; charset=utf-8");
	web_add_header("Cookie", sessionCookie);
	//web_add_header("User-Agent", "rhodes-wm");
	//web_add_header("Host", "ec2-184-72-43-122.us-west-1.compute.amazonaws.com");
	//web_add_header("Connection", "Keep-Alive");

	//Set max parameter size for larger responses
	web_set_max_html_param_len(param_size);


	// send JSON request
	lr_start_transaction("rest_put");

	//web_reg_save_param("clientId", "LB=client_id\":\"", "RB=\"}}", "Search=Body", LAST);
	sprintf(valueLB,"\"%s\":\"",value);
	lr_save_string(valueLB, "valueLB_Param");
	web_reg_save_param("output", "LB=", "RB=", "Search=Body", LAST);
	//web_reg_save_param("output", "LB={valueLB_Param}", "RB=\",", "Search=Body", LAST);

	web_custom_request("post_to_http_jms_provider",
	 "URL={URL_Param}",
	 "Method=GET",
	 "TargetFrame=",
	 "Resource=0",
	 "Referer=",
	 "Mode=HTTP",
	 LAST); 
	
	

	//output = lr_eval_string("{output}");

	//lr_message("Client Id Response %s", clientId);
	output = lr_eval_string("{output}");
	lr_end_transaction("rest_put", LR_AUTO);
    return output;
}
*/
