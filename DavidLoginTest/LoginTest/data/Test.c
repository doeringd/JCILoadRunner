Test()
{

	web_url("uicreated", 
		"URL=http://127.0.0.1:7832/system/uicreated", 
		"Resource=0", 
		"Referer=", 
		"Mode=HTML", 
		LAST);

	web_url("activateapp", 
		"URL=http://127.0.0.1:7832/system/activateapp", 
		"Resource=0", 
		"Referer=", 
		"Mode=HTML", 
		LAST);

	web_custom_request("loadallsyncsources", 
		"URL=http://127.0.0.1:7832/system/loadallsyncsources", 
		"Method=POST", 
		"Resource=0", 
		"Referer=", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	return 0;
}