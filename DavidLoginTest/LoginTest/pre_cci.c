# 1 "c:\\users\\david.doering\\documents\\david's documents\\davidlogintest\\logintest\\\\combined_LoginTest.c"
# 1 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h" 1
 
 












 











# 103 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"








































































	

 


















 
 
 
 
 


 
 
 
 
 
 














int     lr_start_transaction   (char * transaction_name);
int lr_start_sub_transaction          (char * transaction_name, char * trans_parent);
long lr_start_transaction_instance    (char * transaction_name, long parent_handle);



int     lr_end_transaction     (char * transaction_name, int status);
int lr_end_sub_transaction            (char * transaction_name, int status);
int lr_end_transaction_instance       (long transaction, int status);


 
typedef char* lr_uuid_t;
 



lr_uuid_t lr_generate_uuid();

 


int lr_generate_uuid_free(lr_uuid_t uuid);

 



int lr_generate_uuid_on_buf(lr_uuid_t buf);

   
# 263 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
int lr_start_distributed_transaction  (char * transaction_name, lr_uuid_t correlator, long timeout  );

   







int lr_end_distributed_transaction  (lr_uuid_t correlator, int status);


double lr_stop_transaction            (char * transaction_name);
double lr_stop_transaction_instance   (long parent_handle);


void lr_resume_transaction           (char * trans_name);
void lr_resume_transaction_instance  (long trans_handle);


int lr_update_transaction            (const char *trans_name);


 
void lr_wasted_time(long time);


 
int lr_set_transaction(const char *name, double duration, int status);
 
long lr_set_transaction_instance(const char *name, double duration, int status, long parent_handle);


int   lr_user_data_point                      (char *, double);
long lr_user_data_point_instance                   (char *, double, long);
 



int lr_user_data_point_ex(const char *dp_name, double value, int log_flag);
long lr_user_data_point_instance_ex(const char *dp_name, double value, long parent_handle, int log_flag);


int lr_transaction_add_info      (const char *trans_name, char *info);
int lr_transaction_instance_add_info   (long trans_handle, char *info);
int lr_dpoint_add_info           (const char *dpoint_name, char *info);
int lr_dpoint_instance_add_info        (long dpoint_handle, char *info);


double lr_get_transaction_duration       (char * trans_name);
double lr_get_trans_instance_duration    (long trans_handle);
double lr_get_transaction_think_time     (char * trans_name);
double lr_get_trans_instance_think_time  (long trans_handle);
double lr_get_transaction_wasted_time    (char * trans_name);
double lr_get_trans_instance_wasted_time (long trans_handle);
int    lr_get_transaction_status		 (char * trans_name);
int	   lr_get_trans_instance_status		 (long trans_handle);

 



int lr_set_transaction_status(int status);

 



int lr_set_transaction_status_by_name(int status, const char *trans_name);
int lr_set_transaction_instance_status(int status, long trans_handle);


typedef void* merc_timer_handle_t;
 

merc_timer_handle_t lr_start_timer();
double lr_end_timer(merc_timer_handle_t timer_handle);


 
 
 
 
 
 











 



int   lr_rendezvous  (char * rendezvous_name);
 




int   lr_rendezvous_ex (char * rendezvous_name);



 
 
 
 
 
char *lr_get_vuser_ip (void);
void   lr_whoami (int *vuser_id, char ** sgroup, int *scid);
char *	  lr_get_host_name (void);
char *	  lr_get_master_host_name (void);

 
long     lr_get_attrib_long	(char * attr_name);
char *   lr_get_attrib_string	(char * attr_name);
double   lr_get_attrib_double      (char * attr_name);

char * lr_paramarr_idx(const char * paramArrayName, unsigned int index);
char * lr_paramarr_random(const char * paramArrayName);
int    lr_paramarr_len(const char * paramArrayName);

int	lr_param_unique(const char * paramName);
int lr_param_sprintf(const char * paramName, const char * format, ...);


 
 
static void *ci_this_context = 0;






 








void lr_continue_on_error (int lr_continue);
char *   lr_decrypt (const char *EncodedString);


 
 
 
 
 
 



 







 















void   lr_abort (void);
void lr_exit(int exit_option, int exit_status);
void lr_abort_ex (unsigned long flags);

void   lr_peek_events (void);


 
 
 
 
 


void   lr_think_time (double secs);

 


void lr_force_think_time (double secs);


 
 
 
 
 



















int   lr_msg (char * fmt, ...);
int   lr_debug_message (unsigned int msg_class,
									    char * format,
										...);
# 502 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 505 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 528 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"

 
 
 
 
 





int   lr_next_row ( char * table);
int lr_advance_param ( char * param);



														  
														  

														  
														  

													      
 


char *   lr_eval_string (char * str);
int   lr_eval_string_ext (const char *in_str,
                                     unsigned long const in_len,
                                     char ** const out_str,
                                     unsigned long * const out_len,
                                     unsigned long const options,
                                     const char *file,
								     long const line);
# 562 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 585 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 609 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);
int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);


 
 
 
 
 
 
# 676 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
void   lr_save_datetime (const char *format, int offset, const char *name);









 











 
 
 
 
 






 



char * lr_error_context_get_entry (char * key);

 



long   lr_error_context_get_error_id (void);


 
 
 

int lr_table_get_rows_num (char * param_name);

int lr_table_get_cols_num (char * param_name);

char * lr_table_get_cell_by_col_index (char * param_name, int row, int col);

char * lr_table_get_cell_by_col_name (char * param_name, int row, const char* col_name);

int lr_table_get_column_name_by_index (char * param_name, int col, 
											char * * const col_name,
											int * col_name_len);
# 737 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);


 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   int const in_len,
                                   char * * const out_str,
                                   int * const out_len);
# 762 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 774 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 782 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 788 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"

int   lrfnc_free_parameter (const char * param_name );

int lr_save_searched_string(char *buffer, long buf_size, unsigned int occurrence,
			    char *search_string, int offset, unsigned int param_val_len, 
			    char *param_name);

 
char *   lr_string (char * str);

 
# 859 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 866 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 888 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 964 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 993 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"


# 1005 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 

 
int lr_enable_ip_spoofing();
int lr_disable_ip_spoofing();


 




int lr_convert_string_encoding(char *sourceString, char *fromEncoding, char *toEncoding, char *paramName);





 
 

















# 1 "c:\\users\\david.doering\\documents\\david's documents\\davidlogintest\\logintest\\\\combined_LoginTest.c" 2

# 1 "globals.h" 1
 
 

# 1 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/web_api.h" 1
 







# 1 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/as_web.h" 1
 






















































 




 








 
 
 

  int
	web_add_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_add_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
	
  int
	web_add_auto_header(
		const char *		mpszHeader,
		const char *		mpszValue);

  int
	web_add_header(
		const char *		mpszHeader,
		const char *		mpszValue);
  int
	web_add_cookie(
		const char *		mpszCookie);
  int
	web_cleanup_auto_headers(void);
  int
	web_cleanup_cookies(void);
  int
	web_concurrent_end(
		const char * const	mpszReserved,
										 
		...								 
	);
  int
	web_concurrent_start(
		const char * const	mpszConcurrentGroupName,
										 
										 
		...								 
										 
	);
  int
	web_create_html_param(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim);
  int
	web_create_html_param_ex(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim,
		const char *		mpszNum);
  int
	web_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_disable_keep_alive(void);
  int
	web_enable_keep_alive(void);
  int
	web_find(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_get_int_property(
		const int			miHttpInfoType);
  int
	web_image(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_image_check(
		const char *		mpszName,
		...);
  int
	web_java_check(
		const char *		mpszName,
		...);
  int
	web_link(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

	
  int
	web_global_verification(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_find(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
				
  int
	web_reg_save_param(
		const char *		mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 

  int
	web_convert_param(
		const char * 		mpszParamName, 
										 
		...);							 
										 
										 


										 

										 
  int
	web_remove_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
				
  int
	web_remove_auto_header(
		const char *		mpszHeaderName,
		...);							 
										 



  int
	web_remove_cookie(
		const char *		mpszCookie);

  int
	web_save_header(
		const char *		mpszType,	 
		const char *		mpszName);	 
  int
	web_set_certificate(
		const char *		mpszIndex);
  int
	web_set_certificate_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_set_connections_limit(
		const char *		mpszLimit);
  int
	web_set_max_html_param_len(
		const char *		mpszLen);
  int
	web_set_max_retries(
		const char *		mpszMaxRetries);
  int
	web_set_proxy(
		const char *		mpszProxyHost);
  int
	web_set_proxy_bypass(
		const char *		mpszBypass);
  int
	web_set_secure_proxy(
		const char *		mpszProxyHost);
  int
	web_set_sockets_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue
	);
  int
	web_set_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue,
		...								 
	);
  int
	web_set_timeout(
		const char *		mpszWhat,
		const char *		mpszTimeout);
  int
	web_set_user(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);

  int
	web_sjis_to_euc_param(
		const char *		mpszParamName,
										 
		const char *		mpszParamValSjis);
										 

  int
	web_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_submit_form(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_set_proxy_bypass_local(
		const char * mpszNoLocal
		);

  int 
	web_cache_cleanup(void);

  int
	web_create_html_query(
		const char* mpszStartQuery,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_create_radio_button_param(
		const char *NameFiled,
		const char *NameAndVal,
		const char *ParamName
		);

  int
	web_convert_from_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										
  int
	web_convert_to_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_ex(
		const char * mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_xpath(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 










# 596 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/as_web.h"


# 609 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/as_web.h"



























# 647 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/as_web.h"

 
 
 


  int
	FormSubmit(
		const char *		mpszFormName,
		...);
  int
	InitWebVuser(void);
  int
	SetUser(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);
  int
	TerminateWebVuser(void);
  int
	URL(
		const char *		mpszUrlName);
























# 715 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/as_web.h"



 
 
 






# 10 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/web_api.h" 2












 






 











  int
	web_reg_add_cookie(
		const char *		mpszCookie,
		...);							 
										 

  int
	web_report_data_point(
		const char *		mpszEventType,
		const char *		mpszEventName,
		const char *		mpszDataPointName,
		const char *		mpszLAST);	 
										 
										 
										 

  int
	web_text_link(
		const char *		mpszStepName,
		...);

  int
	web_element(
		const char *		mpszStepName,
		...);

  int
	web_image_link(
		const char *		mpszStepName,
		...);

  int
	web_static_image(
		const char *		mpszStepName,
		...);

  int
	web_image_submit(
		const char *		mpszStepName,
		...);

  int
	web_button(
		const char *		mpszStepName,
		...);

  int
	web_edit_field(
		const char *		mpszStepName,
		...);

  int
	web_radio_group(
		const char *		mpszStepName,
		...);

  int
	web_check_box(
		const char *		mpszStepName,
		...);

  int
	web_list(
		const char *		mpszStepName,
		...);

  int
	web_text_area(
		const char *		mpszStepName,
		...);

  int
	web_map_area(
		const char *		mpszStepName,
		...);

  int
	web_eval_java_script(
		const char *		mpszStepName,
		...);

  int
	web_reg_dialog(
		const char *		mpszArg1,
		...);

  int
	web_reg_cross_step_download(
		const char *		mpszArg1,
		...);

  int
	web_browser(
		const char *		mpszStepName,
		...);

  int
	web_control(
		const char *		mpszStepName,
		...);

  int
	web_set_rts_key(
		const char *		mpszArg1,
		...);

  int
	web_save_param_length(
		const char * 		mpszParamName,
		...);

  int
	web_save_timestamp_param(
		const char * 		mpszParamName,
		...);

  int
	web_load_cache(
		const char *		mpszStepName,
		...);							 
										 

  int
	web_dump_cache(
		const char *		mpszStepName,
		...);							 
										 
										 

  int
	web_reg_find_in_log(
		const char *		mpszArg1,
		...);							 
										 
										 

  int
	web_get_sockets_info(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 

  int
	web_add_cookie_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

  int
	web_hook_java_script(
		const char *		mpszArg1,
		...);							 
										 
										 
										 





 
 
 


# 4 "globals.h" 2

# 1 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrw_custom_body.h" 1
 





# 5 "globals.h" 2

# 1 "functions.h" 1
char* ClientLogin(char* baseUrl, char* userName, char* password)
{
	 
	 
	 
	char request_json[1080];
	char *param_size = "2000";
	char fullUrl[256];
	char *sessionCookie;

	 
	sprintf(fullUrl,"%s/clientlogin", baseUrl);
	 

	lr_save_string(fullUrl, "URL_Param");


	 
	sprintf(request_json, "{\"login\":\"%s\",\"password\":\"%s|en-us\",\"remember_me\":\"1\"}", userName, password);
  
	 
	lr_save_string(request_json, "REQUEST_JSON_PARAM");
  
	 
	web_add_header("Content-Type", "application/json; charset=utf-8");

	web_set_max_html_param_len(param_size);


	 
	lr_start_transaction("rest_put");

		web_reg_save_param("sessionCookie", "LB=Set-Cookie: ", "RB= expires", "Search=Headers", "LAST");
		web_custom_request("post_to_http_jms_provider",
						   "URL={URL_Param}",
						   "Method=POST",
						   "TargetFrame=",
						   "Resource=0",
						   "Referer=",
						   "Mode=HTTP",
						   "Body={REQUEST_JSON_PARAM}",
						   "LAST"); 

		sessionCookie = lr_eval_string("{sessionCookie}");
		 

	lr_end_transaction("rest_put", 2);

	return sessionCookie;
}


char* ClientCreate(char* baseUrl, char* sessionCookie)
{
	 
	 
	 
	char *request_json[1080];
	char *param_size = "1036";
	char fullUrl[256];
	char *clientId;

	 
	sprintf(fullUrl,"%s/clientcreate", baseUrl);
	 
	lr_save_string(fullUrl, "URL_Param");

  
	 
	web_add_header("Content-Type", "application/json; charset=utf-8");
	web_add_header("Cookie", sessionCookie);

	 
	web_set_max_html_param_len(param_size);


	 
	lr_start_transaction("rest_put");

	web_reg_save_param("clientId", "LB=client_id\":\"", "RB=\"}}", "Search=Body", "LAST");


	web_custom_request("post_to_http_jms_provider",
	 "URL={URL_Param}",
	 "Method=GET",
	 "TargetFrame=",
	 "Resource=0",
	 "Referer=",
	 "Mode=HTTP",
	 "LAST"); 

	clientId = lr_eval_string("{clientId}");

	 

	lr_end_transaction("rest_put", 2);

	return clientId;
}

void ClientRegister(char* baseUrl, char* sessionCookie, char* clientId)
{
	 
	 
	 
	char request_json[1080];
	char *param_size = "1036";
	char fullUrl[256];	
	 

	 
	sprintf(fullUrl,"%s/clientregister", baseUrl);
	 
	lr_save_string(fullUrl, "URL_Param");

	 
	sprintf(request_json, "{\"client_id\":\"%s\",\"device_pin\":\"win32_client\",\"device_port\":\"100\",\"device_type\":\"WINDOWS_DESKTOP\"}", clientId);
	 
	 
	lr_save_string(request_json, "REQUEST_JSON_PARAM");
  
	 
	web_add_header("Content-Type", "application/json; charset=utf-8");
	web_add_header("Cookie", sessionCookie);

	 
	web_set_max_html_param_len(param_size);


	 
	lr_start_transaction("rest_put");

	 

	web_custom_request("post_to_http_jms_provider",
	 "URL={URL_Param}",
	 "Method=POST",
	 "TargetFrame=",
	 "Resource=0",
	 "Referer=",
	 "Mode=HTTP",
	 "Body={REQUEST_JSON_PARAM}",
	 "LAST"); 

	 

	 

	 

	lr_end_transaction("rest_put", 2);

	 
}

char* QueryAction(char* baseUrl, char* sessionCookie, char* clientId, char* action)
{	
	char *param_size = "2000";
	char fullUrl[512];
	char *result;	
	char *version = "3";
	char *token;
	char* activityId;

	 
	sprintf(fullUrl,"%s?client_id=%s&p_size=%s&version=%s&source_name=%s", baseUrl, clientId, param_size, version, action);
	lr_save_string(fullUrl, "URL_Param");
	lr_message(fullUrl);
  
	 
	web_add_header("Content-Type", "application/json; charset=utf-8");
	web_add_header("Cookie", sessionCookie);
	lr_message("Session cookie: ",sessionCookie);
	 
	web_set_max_html_param_len(param_size);

	 
	lr_start_transaction("rest_put");

		web_reg_save_param("token", "LB=token\":\"", "RB=\"},", "Search=Body", "LAST");		
		web_reg_save_param("result", "LB=", "RB=", "Search=Body", "LAST");
		 

		web_custom_request("post_to_http_jms_provider",
		 "URL={URL_Param}",
		 "Method=GET",
		 "TargetFrame=",
		 "Resource=0",
		 "Referer=",
		 "Mode=HTTP",
		 "LAST"); 
	
		token = lr_eval_string("{token}");
		 
		
		lr_message("Returned token is: %s", token);
	lr_end_transaction("rest_put", 2);

	if(strlen(token) > 0)
	{		
		 
		 
		sprintf(fullUrl, "%s&token=%s", fullUrl, token);
		lr_save_string(fullUrl, "URL_Param");
		 
		 
		lr_start_transaction("rest_put");	
			web_custom_request("post_to_http_jms_provider",
			 "URL={URL_Param}",
			 "Method=GET",
			 "TargetFrame=",
			 "Resource=0",
			 "Referer=",
			 "Mode=HTTP",
			 "LAST");
		lr_end_transaction("rest_put", 2);
		 
	}
	
	result = lr_eval_string("{result}");	
	lr_message("Result from %s Query: %s", action, result);
	return activityId;
}

void Create(char* baseUrl, char* sessionCookie, char json[1080])
{
	char *param_size = "1036";

	lr_save_string(baseUrl, "URL_Param");


	 
	 


  
	 
	lr_save_string(json, "REQUEST_JSON_PARAM");
  
	 
	web_add_header("Content-Type", "application/json; charset=utf-8");
	web_add_header("Cookie", sessionCookie);

	web_set_max_html_param_len(param_size);


	 
	lr_start_transaction("rest_put");

	 

	web_custom_request("post_to_http_jms_provider",
	 "URL={URL_Param}",
	 "Method=POST",
	 "TargetFrame=",
	 "Resource=0",
	 "Referer=",
	 "Mode=HTTP",
	 "Body={REQUEST_JSON_PARAM}",
	 "LAST"); 

	 

	 

	lr_end_transaction("rest_put", 2);
}

void Update(char* baseUrl, char* sessionCookie, char* client, char* activity, char* param, char* value)
{
	char *param_size = "1036";
	char json[1080];

	lr_save_string(baseUrl, "URL_Param");
	
}

 



 
void ActivityAccept(char* baseUrl, char* sessionCookie, char* client, char* activityNumber)
{
	ActivityUpdate(baseUrl, sessionCookie, client, activityNumber, "Acknowledged");
}

void ActivityEnroute (char* baseUrl, char* sessionCookie, char* client, char* activityNumber)
{
	ActivityUpdate(baseUrl, sessionCookie, client, activityNumber, "In Progress");
}

void ActivitySuspend (char* baseUrl, char* sessionCookie, char* client, char* activityNumber)
{
	ActivityUpdate(baseUrl, sessionCookie, client, activityNumber, "On Hold");
}

void ActivityComplete (char* baseUrl, char* sessionCookie, char* client, char* activityNumber)
{
	 
	ActivityUpdate(baseUrl, sessionCookie, client, activityNumber, "Complete");
}
 
void ActivityUpdate(char* baseUrl, char* sessionCookie, char* client, char* activityNumber, char* status)
{
	char *param_size = "1036";
	char json[1080];
	lr_save_string(baseUrl, "URL_Param");

	web_add_header("Content-Type", "application/json; charset=utf-8");
	web_add_header("Cookie", sessionCookie);

	web_set_max_html_param_len(param_size);

	 
	 
	 
	sprintf(json,"\"source_name\":\"Activity\",\"client_id\":\"%s\",\"update\":{\"%s\":{\"activityNumber\":\"%s\",\"status\":\"%s\"}}", client, activityNumber, activityNumber, status);
	lr_save_string(json, "REQUEST_JSON_PARAM");

	lr_start_transaction("rest_put");

	 

	web_custom_request("post_to_http_jms_provider",
	 "URL={URL_Param}",
	 "Method=POST",
	 "TargetFrame=",
	 "Resource=0",
	 "Referer=",
	 "Mode=HTTP",
	 "Body={REQUEST_JSON_PARAM}",
	 "LAST"); 

	 

	 

	lr_end_transaction("rest_put", 2);
	
}
 
# 6 "globals.h" 2



 
 
char* session;
char* client;
 
 
char* url = "http://ec2-184-72-43-122.us-west-1.compute.amazonaws.com/application";

 
# 2 "c:\\users\\david.doering\\documents\\david's documents\\davidlogintest\\logintest\\\\combined_LoginTest.c" 2

# 1 "vuser_init.c" 1
# 1 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/vts2.h" 1



 
# 97 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/vts2.h"







typedef int PVCI;
typedef int VTCERR;

 
 
 

 
extern PVCI    vtc_connect(char *servername, int portnum, int options);
extern VTCERR  vtc_disconnect(int pvci);
extern VTCERR  vtc_get_last_error(int pvci);

 
extern VTCERR  vtc_query_column(int pvci, char *columnName, int columnIndex, char **outvalue);
extern VTCERR  vtc_query_row(int pvci, int columnIndex, char ***outcolumns, char ***outvalues);
extern VTCERR  vtc_send_message(int pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR  vtc_send_if_unique(int pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR  vtc_send_row1(int pvci, char *columnNames, char *messages, char *delimiter,  unsigned char sendflag, unsigned short *outUpdates);
extern VTCERR  vtc_update_message(int pvci, char *column, int index , char *message, unsigned short *outRc);
extern VTCERR  vtc_update_row1(int pvci, char *columnNames, int index , char *messages, char *delimiter, unsigned short *outUpdates);
extern VTCERR  vtc_retrieve_message(int pvci, char *column, char **outvalue);
extern VTCERR  vtc_retrieve_messages1(int pvci, char *columnNames, char *delimiter, char ***outvalues);
extern VTCERR  vtc_retrieve_row(int pvci, char ***outcolumns, char ***outvalues);
extern VTCERR  vtc_increment(int pvci, char *column, int index , int incrValue, int *outValue);
extern VTCERR  vtc_clear_message(int pvci, char *column, int index , unsigned short *outRc);
extern VTCERR  vtc_clear_column(int pvci, char *column, unsigned short *outRc);
extern VTCERR  vtc_clear_row(int pvci, int rowIndex, unsigned short *outRc);

extern VTCERR  vtc_create_column(int pvci, char *column,unsigned short *outRc);
extern VTCERR  vtc_column_size(int pvci, char *column, int *size);

extern VTCERR  vtc_noop(int pvci);

 
extern void vtc_free(char *msg);
extern void vtc_free_list(char **msglist);

 


 




 











 




 
 
 

extern PVCI    lrvtc_connect(char *servername, int portnum, int options);
extern VTCERR  lrvtc_disconnect();
extern VTCERR  lrvtc_query_column(char *columnName, int columnIndex);
extern VTCERR  lrvtc_query_row(int columnIndex);
extern VTCERR  lrvtc_send_message(char *columnName, char *message);
extern VTCERR  lrvtc_send_if_unique(char *columnName, char *message);
extern VTCERR  lrvtc_send_row1(char *columnNames, char *messages, char *delimiter,  unsigned char sendflag);
extern VTCERR  lrvtc_update_message(char *columnName, int index , char *message);
extern VTCERR  lrvtc_update_row1(char *columnNames, int index , char *messages, char *delimiter);
extern VTCERR  lrvtc_retrieve_message(char *columnName);
extern VTCERR  lrvtc_retrieve_messages1(char *columnNames, char *delimiter);
extern VTCERR  lrvtc_retrieve_row();
extern int     lrvtc_increment(char *columnName, int index , int incrValue);
extern VTCERR  lrvtc_clear_message(char *columnName, int index);
extern VTCERR  lrvtc_clear_column(char *columnName) ;
extern VTCERR  lrvtc_clear_row(int rowIndex);
extern VTCERR  lrvtc_create_column(char *columnName);
extern int     lrvtc_column_size(char *columnName);

extern VTCERR  lrvtc_noop();

 
 
 

                               


 
 
 





















# 1 "vuser_init.c" 2


# 1 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/Ptt_MySQL.h" 1
# 1 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/mysql.h" 1
 
# 16 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/mysql.h"

















 



typedef char my_bool;






typedef char * gptr;





typedef int my_socket;




# 1 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/mysql_com.h" 1
 
# 16 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/mysql_com.h"

 












 















 




enum enum_server_command
{
  COM_SLEEP, COM_QUIT, COM_INIT_DB, COM_QUERY, COM_FIELD_LIST,
  COM_CREATE_DB, COM_DROP_DB, COM_REFRESH, COM_SHUTDOWN, COM_STATISTICS,
  COM_PROCESS_INFO, COM_CONNECT, COM_PROCESS_KILL, COM_DEBUG, COM_PING,
  COM_TIME, COM_DELAYED_INSERT, COM_CHANGE_USER, COM_BINLOG_DUMP,
  COM_TABLE_DUMP, COM_CONNECT_OUT, COM_REGISTER_SLAVE,
  COM_STMT_PREPARE, COM_STMT_EXECUTE, COM_STMT_SEND_LONG_DATA, COM_STMT_CLOSE,
  COM_STMT_RESET, COM_SET_OPTION, COM_STMT_FETCH,
   

   
  COM_END
};


 





 













 






















 



 
































 





 














struct st_vio;					 
typedef struct st_vio Vio;









typedef struct st_net {
  Vio* vio;
  unsigned char *buff,*buff_end,*write_pos,*read_pos;
  my_socket fd;					 
  unsigned long max_packet,max_packet_size;
  unsigned int pkt_nr,compress_pkt_nr;
  unsigned int write_timeout, read_timeout, retry_count;
  int fcntl;
  my_bool compress;
   




  unsigned long remain_in_buf,length, buf_length, where_b;
  unsigned int *return_status;
  unsigned char reading_or_writing;
  char save_char;
  my_bool no_send_ok;   
  my_bool no_send_eof;  
   



  my_bool no_send_error;
   




  char last_error[512], sqlstate[5 +1];
  unsigned int last_errno;
  unsigned char error;

   



  gptr query_cache_query;

  my_bool report_error;  
  my_bool return_errno;
} NET;



enum enum_field_types { MYSQL_TYPE_DECIMAL, MYSQL_TYPE_TINY,
			MYSQL_TYPE_SHORT,  MYSQL_TYPE_LONG,
			MYSQL_TYPE_FLOAT,  MYSQL_TYPE_DOUBLE,
			MYSQL_TYPE_NULL,   MYSQL_TYPE_TIMESTAMP,
			MYSQL_TYPE_LONGLONG,MYSQL_TYPE_INT24,
			MYSQL_TYPE_DATE,   MYSQL_TYPE_TIME,
			MYSQL_TYPE_DATETIME, MYSQL_TYPE_YEAR,
			MYSQL_TYPE_NEWDATE, MYSQL_TYPE_VARCHAR,
			MYSQL_TYPE_BIT,
                        MYSQL_TYPE_NEWDECIMAL=246,
			MYSQL_TYPE_ENUM=247,
			MYSQL_TYPE_SET=248,
			MYSQL_TYPE_TINY_BLOB=249,
			MYSQL_TYPE_MEDIUM_BLOB=250,
			MYSQL_TYPE_LONG_BLOB=251,
			MYSQL_TYPE_BLOB=252,
			MYSQL_TYPE_VAR_STRING=253,
			MYSQL_TYPE_STRING=254,
			MYSQL_TYPE_GEOMETRY=255

};

 































  

 





enum mysql_enum_shutdown_level {
   




  SHUTDOWN_DEFAULT = 0,
   
  SHUTDOWN_WAIT_CONNECTIONS= (unsigned char)(1 << 0),
   
  SHUTDOWN_WAIT_TRANSACTIONS= (unsigned char)(1 << 1),
   
  SHUTDOWN_WAIT_UPDATES= (unsigned char)(1 << 3),
   
  SHUTDOWN_WAIT_ALL_BUFFERS= ((unsigned char)(1 << 3) << 1),
   
  SHUTDOWN_WAIT_CRITICAL_BUFFERS= ((unsigned char)(1 << 3) << 1) + 1,
   



  KILL_CONNECTION= 255
};


enum enum_cursor_type
{
  CURSOR_TYPE_NO_CURSOR= 0,
  CURSOR_TYPE_READ_ONLY= 1,
  CURSOR_TYPE_FOR_UPDATE= 2,
  CURSOR_TYPE_SCROLLABLE= 4
};


 
enum enum_mysql_set_option
{
  MYSQL_OPTION_MULTI_STATEMENTS_ON,
  MYSQL_OPTION_MULTI_STATEMENTS_OFF
};







my_bool	my_net_init(NET *net, Vio* vio);
void	my_net_local_init(NET *net);
void	net_end(NET *net);
void	net_clear(NET *net);
my_bool net_realloc(NET *net, unsigned long length);
my_bool	net_flush(NET *net);
my_bool	my_net_write(NET *net,const char *packet,unsigned long len);
my_bool	net_write_command(NET *net,unsigned char command,
			  const char *header, unsigned long head_len,
			  const char *packet, unsigned long len);
int	net_real_write(NET *net,const char *packet,unsigned long len);
unsigned long my_net_read(NET *net);

 



struct sockaddr;
int my_connect(my_socket s, const struct sockaddr *name, unsigned int namelen,
	       unsigned int timeout);

struct rand_struct {
  unsigned long seed1,seed2,max_value;
  double max_value_dbl;
};





   

enum Item_result {STRING_RESULT=0, REAL_RESULT, INT_RESULT, ROW_RESULT,
                  DECIMAL_RESULT};

typedef struct st_udf_args
{
  unsigned int arg_count;		 
  enum Item_result *arg_type;		 
  char **args;				 
  unsigned long *lengths;		 
  char *maybe_null;			 
  char **attributes;                     
  unsigned long *attribute_lengths;      
} UDF_ARGS;

   

typedef struct st_udf_init
{
  my_bool maybe_null;			 
  unsigned int decimals;		 
  unsigned long max_length;		 
  char	  *ptr;				 
  my_bool const_item;			 
} UDF_INIT;

   



   





 




void randominit(struct rand_struct *, unsigned long seed1,
                unsigned long seed2);
double my_rnd(struct rand_struct *);
void create_random_string(char *to, unsigned int length, struct rand_struct *rand_st);

void hash_password(unsigned long *to, const char *password, unsigned int password_len);
void make_scrambled_password_323(char *to, const char *password);
void scramble_323(char *to, const char *message, const char *password);
my_bool check_scramble_323(const char *, const char *message,
                           unsigned long *salt);
void get_salt_from_password_323(unsigned long *res, const char *password);
void make_password_from_salt_323(char *to, const unsigned long *salt);

void make_scrambled_password(char *to, const char *password);
void scramble(char *to, const char *message, const char *password);
my_bool check_scramble(const char *reply, const char *message,
                       const unsigned char *hash_stage2);
void get_salt_from_password(unsigned char *res, const char *password);
void make_password_from_salt(char *to, const unsigned char *hash_stage2);
char *octet2hex(char *to, const char *str, unsigned int len);

 

char *get_tty_password(char *opt_message);
const char *mysql_errno_to_sqlstate(unsigned int mysql_errno);

 

my_bool my_init(void);
extern int modify_defaults_file(const char *file_location, const char *option,
                                const char *option_value,
                                const char *section_name, int remove_option);
int load_defaults(const char *conf_file, const char **groups,
		  int *argc, char ***argv);
my_bool my_thread_init(void);
void my_thread_end(void);
















# 57 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/mysql.h" 2

# 1 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/mysql_time.h" 1
 
# 16 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/mysql_time.h"




 








enum enum_mysql_timestamp_type
{
  MYSQL_TIMESTAMP_NONE= -2, MYSQL_TIMESTAMP_ERROR= -1,
  MYSQL_TIMESTAMP_DATE= 0, MYSQL_TIMESTAMP_DATETIME= 1, MYSQL_TIMESTAMP_TIME= 2
};


 
# 48 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/mysql_time.h"
typedef struct st_mysql_time
{
  unsigned int  year, month, day, hour, minute, second;
  unsigned long second_part;
  my_bool       neg;
  enum enum_mysql_timestamp_type time_type;
} MYSQL_TIME;


# 58 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/mysql.h" 2

# 1 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/mysql_version.h" 1
 


 

















 







# 59 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/mysql.h" 2

# 1 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/typelib.h" 1
 
# 16 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/typelib.h"





typedef struct st_typelib {	 
  unsigned int count;		 
  const char *name;		 
  const char **type_names;
  unsigned int *type_lengths;
} TYPELIB;

extern int find_type(char *x,TYPELIB *typelib,unsigned int full_name);
extern void make_type(char *to,unsigned int nr,TYPELIB *typelib);
extern const char *get_type(TYPELIB *typelib,unsigned int nr);

extern TYPELIB sql_protocol_typelib;


# 60 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/mysql.h" 2


# 1 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/my_list.h" 1
 
# 16 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/my_list.h"








typedef struct st_list {
  struct st_list *prev,*next;
  void *data;
} LIST;

typedef int (*list_walk_action)(void *,void *);

extern LIST *list_add(LIST *root,LIST *element);
extern LIST *list_delete(LIST *root,LIST *element);
extern LIST *list_cons(void *data,LIST *root);
extern LIST *list_reverse(LIST *root);
extern void list_free(LIST *root,unsigned int free_data);
extern unsigned int list_length(LIST *);
extern int list_walk(LIST *,list_walk_action action,gptr argument);









# 62 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/mysql.h" 2


extern unsigned int mysql_port;
extern char *mysql_unix_port;
















typedef struct st_mysql_field {
  char *name;                  
  char *org_name;              
  char *table;                 
  char *org_table;             
  char *db;                    
  char *catalog;	       
  char *def;                   
  unsigned long length;        
  unsigned long max_length;    
  unsigned int name_length;
  unsigned int org_name_length;
  unsigned int table_length;
  unsigned int org_table_length;
  unsigned int db_length;
  unsigned int catalog_length;
  unsigned int def_length;
  unsigned int flags;          
  unsigned int decimals;       
  unsigned int charsetnr;      
  enum enum_field_types type;  
} MYSQL_FIELD;

typedef char **MYSQL_ROW;		 
typedef unsigned int MYSQL_FIELD_OFFSET;  




typedef unsigned long my_ulonglong;





 


typedef struct st_mysql_rows {
  struct st_mysql_rows *next;		 
  MYSQL_ROW data;
  unsigned long length;
} MYSQL_ROWS;

typedef MYSQL_ROWS *MYSQL_ROW_OFFSET;	 

# 1 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/my_alloc.h" 1
 
# 16 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/my_alloc.h"

 









typedef struct st_used_mem
{				    
  struct st_used_mem *next;	    
  unsigned int	left;		    
  unsigned int	size;		    
} USED_MEM;


typedef struct st_mem_root
{
  USED_MEM *free;                   
  USED_MEM *used;                   
  USED_MEM *pre_alloc;              
   
  unsigned int min_malloc;
  unsigned int block_size;          
  unsigned int block_num;           
   



  unsigned int first_block_usage;

  void (*error_handler)(void);
} MEM_ROOT;

# 131 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/mysql.h" 2


typedef struct embedded_query_result EMBEDDED_QUERY_RESULT;
typedef struct st_mysql_data {
  my_ulonglong rows;
  unsigned int fields;
  MYSQL_ROWS *data;
  MEM_ROOT alloc;
   
  struct embedded_query_result *embedded_info;
} MYSQL_DATA;

enum mysql_option 
{
  MYSQL_OPT_CONNECT_TIMEOUT, MYSQL_OPT_COMPRESS, MYSQL_OPT_NAMED_PIPE,
  MYSQL_INIT_COMMAND, MYSQL_READ_DEFAULT_FILE, MYSQL_READ_DEFAULT_GROUP,
  MYSQL_SET_CHARSET_DIR, MYSQL_SET_CHARSET_NAME, MYSQL_OPT_LOCAL_INFILE,
  MYSQL_OPT_PROTOCOL, MYSQL_SHARED_MEMORY_BASE_NAME, MYSQL_OPT_READ_TIMEOUT,
  MYSQL_OPT_WRITE_TIMEOUT, MYSQL_OPT_USE_RESULT,
  MYSQL_OPT_USE_REMOTE_CONNECTION, MYSQL_OPT_USE_EMBEDDED_CONNECTION,
  MYSQL_OPT_GUESS_CONNECTION, MYSQL_SET_CLIENT_IP, MYSQL_SECURE_AUTH,
  MYSQL_REPORT_DATA_TRUNCATION, MYSQL_OPT_RECONNECT,
  MYSQL_OPT_SSL_VERIFY_SERVER_CERT
};

struct st_mysql_options {
  unsigned int connect_timeout, read_timeout, write_timeout;
  unsigned int port, protocol;
  unsigned long client_flag;
  char *host,*user,*password,*unix_socket,*db;
  struct st_dynamic_array *init_commands;
  char *my_cnf_file,*my_cnf_group, *charset_dir, *charset_name;
  char *ssl_key;				 
  char *ssl_cert;				 
  char *ssl_ca;					 
  char *ssl_capath;				 
  char *ssl_cipher;				 
  char *shared_memory_base_name;
  unsigned long max_allowed_packet;
  my_bool use_ssl;				 
  my_bool compress,named_pipe;
  



  my_bool rpl_probe;
  



  my_bool rpl_parse;
  



  my_bool no_master_reads;
  my_bool separate_thread;

  enum mysql_option methods_to_use;
  char *client_ip;
   
  my_bool secure_auth;
   
  my_bool report_data_truncation;

   
  int (*local_infile_init)(void **, const char *, void *);
  int (*local_infile_read)(void *, char *, unsigned int);
  void (*local_infile_end)(void *);
  int (*local_infile_error)(void *, char *, unsigned int);
  void *local_infile_userdata;
};

enum mysql_status 
{
  MYSQL_STATUS_READY,MYSQL_STATUS_GET_RESULT,MYSQL_STATUS_USE_RESULT
};

enum mysql_protocol_type 
{
  MYSQL_PROTOCOL_DEFAULT, MYSQL_PROTOCOL_TCP, MYSQL_PROTOCOL_SOCKET,
  MYSQL_PROTOCOL_PIPE, MYSQL_PROTOCOL_MEMORY
};
 




enum mysql_rpl_type 
{
  MYSQL_RPL_MASTER, MYSQL_RPL_SLAVE, MYSQL_RPL_ADMIN
};

typedef struct character_set
{
  unsigned int      number;      
  unsigned int      state;       
  const char        *csname;     
  const char        *name;       
  const char        *comment;    
  const char        *dir;        
  unsigned int      mbminlen;    
  unsigned int      mbmaxlen;    
} MY_CHARSET_INFO;

struct st_mysql_methods;
struct st_mysql_stmt;

typedef struct st_mysql
{
  NET		net;			 
  gptr		connector_fd;		 
  char		*host,*user,*passwd,*unix_socket,*server_version,*host_info,*info;
  char          *db;
  struct charset_info_st *charset;
  MYSQL_FIELD	*fields;
  MEM_ROOT	field_alloc;
  my_ulonglong affected_rows;
  my_ulonglong insert_id;		 
  my_ulonglong extra_info;		 
  unsigned long thread_id;		 
  unsigned long packet_length;
  unsigned int	port;
  unsigned long client_flag,server_capabilities;
  unsigned int	protocol_version;
  unsigned int	field_count;
  unsigned int 	server_status;
  unsigned int  server_language;
  unsigned int	warning_count;
  struct st_mysql_options options;
  enum mysql_status status;
  my_bool	free_me;		 
  my_bool	reconnect;		 

   
  char	        scramble[20 +1];

  



  my_bool rpl_pivot;
   



  struct st_mysql* master, *next_slave;

  struct st_mysql* last_used_slave;  
  
  struct st_mysql* last_used_con;

  LIST  *stmts;                      
  const struct st_mysql_methods *methods;
  void *thd;
   



  my_bool *unbuffered_fetch_owner;




} MYSQL;

typedef struct st_mysql_res {
  my_ulonglong row_count;
  MYSQL_FIELD	*fields;
  MYSQL_DATA	*data;
  MYSQL_ROWS	*data_cursor;
  unsigned long *lengths;		 
  MYSQL		*handle;		 
  MEM_ROOT	field_alloc;
  unsigned int	field_count, current_field;
  MYSQL_ROW	row;			 
  MYSQL_ROW	current_row;		 
  my_bool	eof;			 
   
  my_bool       unbuffered_fetch_cancelled;  
  const struct st_mysql_methods *methods;
} MYSQL_RES;














typedef struct st_mysql_manager
{
  NET net;
  char *host,*user,*passwd;
  unsigned int port;
  my_bool free_me;
  my_bool eof;
  int cmd_status;
  int last_errno;
  char* net_buf,*net_buf_pos,*net_data_end;
  int net_buf_size;
  char last_error[256];
} MYSQL_MANAGER;

typedef struct st_mysql_parameters
{
  unsigned long *p_max_allowed_packet;
  unsigned long *p_net_buffer_length;
} MYSQL_PARAMETERS;





 




int   mysql_server_init(int argc, char **argv, char **groups);
void   mysql_server_end(void);
 
# 370 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/mysql.h"



MYSQL_PARAMETERS *  mysql_get_parameters(void);

 





my_bool   mysql_thread_init(void);
void   mysql_thread_end(void);

 




my_ulonglong   mysql_num_rows(MYSQL_RES *res);
unsigned int   mysql_num_fields(MYSQL_RES *res);
my_bool   mysql_eof(MYSQL_RES *res);
MYSQL_FIELD *  mysql_fetch_field_direct(MYSQL_RES *res,
					      unsigned int fieldnr);
MYSQL_FIELD *   mysql_fetch_fields(MYSQL_RES *res);
MYSQL_ROW_OFFSET   mysql_row_tell(MYSQL_RES *res);
MYSQL_FIELD_OFFSET   mysql_field_tell(MYSQL_RES *res);

unsigned int   mysql_field_count(MYSQL *mysql);
my_ulonglong   mysql_affected_rows(MYSQL *mysql);
my_ulonglong   mysql_insert_id(MYSQL *mysql);
unsigned int   mysql_errno(MYSQL *mysql);
const char *   mysql_error(MYSQL *mysql);
const char *  mysql_sqlstate(MYSQL *mysql);
unsigned int   mysql_warning_count(MYSQL *mysql);
const char *   mysql_info(MYSQL *mysql);
unsigned long   mysql_thread_id(MYSQL *mysql);
const char *   mysql_character_set_name(MYSQL *mysql);
int            mysql_set_character_set(MYSQL *mysql, const char *csname);

MYSQL *		  mysql_init(MYSQL *mysql);
my_bool		  mysql_ssl_set(MYSQL *mysql, const char *key,
				      const char *cert, const char *ca,
				      const char *capath, const char *cipher);
const char *      mysql_get_ssl_cipher(MYSQL *mysql);
my_bool		  mysql_change_user(MYSQL *mysql, const char *user, 
					  const char *passwd, const char *db);
MYSQL *		  mysql_real_connect(MYSQL *mysql, const char *host,
					   const char *user,
					   const char *passwd,
					   const char *db,
					   unsigned int port,
					   const char *unix_socket,
					   unsigned long clientflag);
int		  mysql_select_db(MYSQL *mysql, const char *db);
int		  mysql_query(MYSQL *mysql, const char *q);
int		  mysql_send_query(MYSQL *mysql, const char *q,
					 unsigned long length);
int		  mysql_real_query(MYSQL *mysql, const char *q,
					unsigned long length);
MYSQL_RES *       mysql_store_result(MYSQL *mysql);
MYSQL_RES *       mysql_use_result(MYSQL *mysql);

 
my_bool		  mysql_master_query(MYSQL *mysql, const char *q,
					   unsigned long length);
my_bool		  mysql_master_send_query(MYSQL *mysql, const char *q,
						unsigned long length);
   
my_bool		  mysql_slave_query(MYSQL *mysql, const char *q,
					  unsigned long length);
my_bool		  mysql_slave_send_query(MYSQL *mysql, const char *q,
					       unsigned long length);
void          mysql_get_character_set_info(MYSQL *mysql,
                           MY_CHARSET_INFO *charset);

 



void
mysql_set_local_infile_handler(MYSQL *mysql,
                               int (*local_infile_init)(void **, const char *,
                            void *),
                               int (*local_infile_read)(void *, char *,
							unsigned int),
                               void (*local_infile_end)(void *),
                               int (*local_infile_error)(void *, char*,
							 unsigned int),
                               void *);

void
mysql_set_local_infile_default(MYSQL *mysql);


 



void              mysql_enable_rpl_parse(MYSQL* mysql);
void              mysql_disable_rpl_parse(MYSQL* mysql);
   
int               mysql_rpl_parse_enabled(MYSQL* mysql);

 
void              mysql_enable_reads_from_master(MYSQL* mysql);
void              mysql_disable_reads_from_master(MYSQL* mysql);
   
my_bool		  mysql_reads_from_master_enabled(MYSQL* mysql);

enum mysql_rpl_type       mysql_rpl_query_type(const char* q, int len);  

   
my_bool		  mysql_rpl_probe(MYSQL* mysql);

 
int               mysql_set_master(MYSQL* mysql, const char* host,
					 unsigned int port,
					 const char* user,
					 const char* passwd);
int               mysql_add_slave(MYSQL* mysql, const char* host,
					unsigned int port,
					const char* user,
					const char* passwd);

int		  mysql_shutdown(MYSQL *mysql,
                                       enum mysql_enum_shutdown_level
                                       shutdown_level);
int		  mysql_dump_debug_info(MYSQL *mysql);
int		  mysql_refresh(MYSQL *mysql,
				     unsigned int refresh_options);
int		  mysql_kill(MYSQL *mysql,unsigned long pid);
int		  mysql_set_server_option(MYSQL *mysql,
						enum enum_mysql_set_option
						option);
int		  mysql_ping(MYSQL *mysql);
const char *	  mysql_stat(MYSQL *mysql);
const char *	  mysql_get_server_info(MYSQL *mysql);
const char *	  mysql_get_client_info(void);
unsigned long	  mysql_get_client_version(void);
const char *	  mysql_get_host_info(MYSQL *mysql);
unsigned long	  mysql_get_server_version(MYSQL *mysql);
unsigned int	  mysql_get_proto_info(MYSQL *mysql);
MYSQL_RES *	  mysql_list_dbs(MYSQL *mysql,const char *wild);
MYSQL_RES *	  mysql_list_tables(MYSQL *mysql,const char *wild);
MYSQL_RES *	  mysql_list_processes(MYSQL *mysql);
int		  mysql_options(MYSQL *mysql,enum mysql_option option,
				      const char *arg);
void		  mysql_free_result(MYSQL_RES *result);
void		  mysql_data_seek(MYSQL_RES *result,
					my_ulonglong offset);
MYSQL_ROW_OFFSET   mysql_row_seek(MYSQL_RES *result,
						MYSQL_ROW_OFFSET offset);
MYSQL_FIELD_OFFSET   mysql_field_seek(MYSQL_RES *result,
					   MYSQL_FIELD_OFFSET offset);
MYSQL_ROW	  mysql_fetch_row(MYSQL_RES *result);
unsigned long *   mysql_fetch_lengths(MYSQL_RES *result);
MYSQL_FIELD *	  mysql_fetch_field(MYSQL_RES *result);
MYSQL_RES *       mysql_list_fields(MYSQL *mysql, const char *table,
					  const char *wild);
unsigned long	  mysql_escape_string(char *to,const char *from,
					    unsigned long from_length);
unsigned long	  mysql_hex_string(char *to,const char *from,
                                         unsigned long from_length);
unsigned long   mysql_real_escape_string(MYSQL *mysql,
					       char *to,const char *from,
					       unsigned long length);
void		  mysql_debug(const char *debug);
char *		  mysql_odbc_escape_string(MYSQL *mysql,
						 char *to,
						 unsigned long to_length,
						 const char *from,
						 unsigned long from_length,
						 void *param,
						 char *
						 (*extend_buffer)
						 (void *, char *to,
						  unsigned long *length));
void 		  myodbc_remove_escape(MYSQL *mysql,char *name);
unsigned int	  mysql_thread_safe(void);
my_bool		  mysql_embedded(void);
MYSQL_MANAGER*    mysql_manager_init(MYSQL_MANAGER* con);  
MYSQL_MANAGER*    mysql_manager_connect(MYSQL_MANAGER* con,
					      const char* host,
					      const char* user,
					      const char* passwd,
					      unsigned int port);
void              mysql_manager_close(MYSQL_MANAGER* con);
int               mysql_manager_command(MYSQL_MANAGER* con,
						const char* cmd, int cmd_len);
int               mysql_manager_fetch_line(MYSQL_MANAGER* con,
						  char* res_buf,
						 int res_buf_size);
my_bool           mysql_read_query_result(MYSQL *mysql);


 




 
enum enum_mysql_stmt_state
{
  MYSQL_STMT_INIT_DONE= 1, MYSQL_STMT_PREPARE_DONE, MYSQL_STMT_EXECUTE_DONE,
  MYSQL_STMT_FETCH_DONE
};


 
# 641 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/mysql.h"

typedef struct st_mysql_bind
{
  unsigned long	*length;           
  my_bool       *is_null;	   
  void		*buffer;	   
   
  my_bool       *error;
  enum enum_field_types buffer_type;	 
   
  unsigned long buffer_length;
  unsigned char *row_ptr;          
  unsigned long offset;            
  unsigned long	length_value;      
  unsigned int	param_number;	   
  unsigned int  pack_length;	   
  my_bool       error_value;       
  my_bool       is_unsigned;       
  my_bool	long_data_used;	   
  my_bool	is_null_value;     
  void (*store_param_func)(NET *net, struct st_mysql_bind *param);
  void (*fetch_result)(struct st_mysql_bind *, MYSQL_FIELD *,
                       unsigned char **row);
  void (*skip_result)(struct st_mysql_bind *, MYSQL_FIELD *,
		      unsigned char **row);
} MYSQL_BIND;


 
typedef struct st_mysql_stmt
{
  MEM_ROOT       mem_root;              
  LIST           list;                  
  MYSQL          *mysql;                
  MYSQL_BIND     *params;               
  MYSQL_BIND     *bind;                 
  MYSQL_FIELD    *fields;               
  MYSQL_DATA     result;                
  MYSQL_ROWS     *data_cursor;          
   
  my_ulonglong   affected_rows;
  my_ulonglong   insert_id;             
   



  int            (*read_row_func)(struct st_mysql_stmt *stmt, 
                                  unsigned char **row);
  unsigned long	 stmt_id;	        
  unsigned long  flags;                 
  unsigned long  prefetch_rows;         
   



  unsigned int   server_status;
  unsigned int	 last_errno;	        
  unsigned int   param_count;           
  unsigned int   field_count;           
  enum enum_mysql_stmt_state state;     
  char		 last_error[512];  
  char		 sqlstate[5 +1];
   
  my_bool        send_types_to_server;
  my_bool        bind_param_done;       
  unsigned char  bind_result_done;      
   
  my_bool       unbuffered_fetch_cancelled;  
   



  my_bool       update_max_length;     
} MYSQL_STMT;

enum enum_stmt_attr_type
{
   






  STMT_ATTR_UPDATE_MAX_LENGTH,
   



  STMT_ATTR_CURSOR_TYPE,
   



  STMT_ATTR_PREFETCH_ROWS
};


typedef struct st_mysql_methods
{
  my_bool (*read_query_result)(MYSQL *mysql);
  my_bool (*advanced_command)(MYSQL *mysql,
			      enum enum_server_command command,
			      const char *header,
			      unsigned long header_length,
			      const char *arg,
			      unsigned long arg_length,
			      my_bool skip_check,
                              MYSQL_STMT *stmt);
  MYSQL_DATA *(*read_rows)(MYSQL *mysql,MYSQL_FIELD *mysql_fields,
			   unsigned int fields);
  MYSQL_RES * (*use_result)(MYSQL *mysql);
  void (*fetch_lengths)(unsigned long *to, 
			MYSQL_ROW column, unsigned int field_count);
  void (*flush_use_result)(MYSQL *mysql);
  MYSQL_FIELD * (*list_fields)(MYSQL *mysql);
  my_bool (*read_prepare_result)(MYSQL *mysql, MYSQL_STMT *stmt);
  int (*stmt_execute)(MYSQL_STMT *stmt);
  int (*read_binary_rows)(MYSQL_STMT *stmt);
  int (*unbuffered_fetch)(MYSQL *mysql, char **row);
  void (*free_embedded_thd)(MYSQL *mysql);
  const char *(*read_statistics)(MYSQL *mysql);
  my_bool (*next_result)(MYSQL *mysql);
  int (*read_change_user_result)(MYSQL *mysql, char *buff, const char *passwd);
  int (*read_rows_from_cursor)(MYSQL_STMT *stmt);

} MYSQL_METHODS;


MYSQL_STMT *   mysql_stmt_init(MYSQL *mysql);
int   mysql_stmt_prepare(MYSQL_STMT *stmt, const char *query,
                               unsigned long length);
int   mysql_stmt_execute(MYSQL_STMT *stmt);
int   mysql_stmt_fetch(MYSQL_STMT *stmt);
int   mysql_stmt_fetch_column(MYSQL_STMT *stmt, MYSQL_BIND *bind, 
                                    unsigned int column,
                                    unsigned long offset);
int   mysql_stmt_store_result(MYSQL_STMT *stmt);
unsigned long   mysql_stmt_param_count(MYSQL_STMT * stmt);
my_bool   mysql_stmt_attr_set(MYSQL_STMT *stmt,
                                    enum enum_stmt_attr_type attr_type,
                                    const void *attr);
my_bool   mysql_stmt_attr_get(MYSQL_STMT *stmt,
                                    enum enum_stmt_attr_type attr_type,
                                    void *attr);
my_bool   mysql_stmt_bind_param(MYSQL_STMT * stmt, MYSQL_BIND * bnd);
my_bool   mysql_stmt_bind_result(MYSQL_STMT * stmt, MYSQL_BIND * bnd);
my_bool   mysql_stmt_close(MYSQL_STMT * stmt);
my_bool   mysql_stmt_reset(MYSQL_STMT * stmt);
my_bool   mysql_stmt_free_result(MYSQL_STMT *stmt);
my_bool   mysql_stmt_send_long_data(MYSQL_STMT *stmt, 
                                          unsigned int param_number,
                                          const char *data, 
                                          unsigned long length);
MYSQL_RES *  mysql_stmt_result_metadata(MYSQL_STMT *stmt);
MYSQL_RES *  mysql_stmt_param_metadata(MYSQL_STMT *stmt);
unsigned int   mysql_stmt_errno(MYSQL_STMT * stmt);
const char *  mysql_stmt_error(MYSQL_STMT * stmt);
const char *  mysql_stmt_sqlstate(MYSQL_STMT * stmt);
MYSQL_ROW_OFFSET   mysql_stmt_row_seek(MYSQL_STMT *stmt, 
                                             MYSQL_ROW_OFFSET offset);
MYSQL_ROW_OFFSET   mysql_stmt_row_tell(MYSQL_STMT *stmt);
void   mysql_stmt_data_seek(MYSQL_STMT *stmt, my_ulonglong offset);
my_ulonglong   mysql_stmt_num_rows(MYSQL_STMT *stmt);
my_ulonglong   mysql_stmt_affected_rows(MYSQL_STMT *stmt);
my_ulonglong   mysql_stmt_insert_id(MYSQL_STMT *stmt);
unsigned int   mysql_stmt_field_count(MYSQL_STMT *stmt);

my_bool   mysql_commit(MYSQL * mysql);
my_bool   mysql_rollback(MYSQL * mysql);
my_bool   mysql_autocommit(MYSQL * mysql, my_bool auto_mode);
my_bool   mysql_more_results(MYSQL *mysql);
int   mysql_next_result(MYSQL *mysql);
void   mysql_close(MYSQL *sock);


 














 




















# 1 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/Ptt_MySQL.h" 2








struct field
{
	char cell[100];
};
struct field row[50][50];

char single_cell[100];
int row_count, col_count;

char *cols[50];
char *vals[50];

MYSQL *lr_mysql_connect(char *server, char *user, char *password, char *database, int port)
{
	MYSQL *Mconn;
	char sql_query[256], sql_sub_query[50];

	int i=0, res=0, conn_fail=0, conn_iter=0;
	char response[50]; 

     
	 
	if(!(Mconn = mysql_init(0)))
    {
		lr_message("Error -1: Cannot initialize MySQL - %s", mysql_error(Mconn));
		 
    }
     

	do
	{

		 
		if (!mysql_real_connect(Mconn, server, user, password, database, port, 0, 0))
		{
			conn_fail = -2;
			conn_iter++;
			sleep(100);
		}
		else
			conn_fail = 0;
	}
	while(conn_fail < 0 && conn_iter<10);

	if (conn_fail < 0)
	{
		lr_message("Error -2: %s", mysql_error(Mconn));
		 
		 
	}
	else
	{
		 
		 
	}
		return Mconn;
}


int lr_mysql_query(MYSQL *Mconn, char *query)
{

	MYSQL_RES *Mres;
	MYSQL_ROW Mrow;
	unsigned int NumFields, NumRows, iRow, iCol;

	if (mysql_query(Mconn, query))
	{
	  lr_message("Error -3: row not found '%s' - %s", query, mysql_error(Mconn));
	  mysql_close(Mconn);
	  return -3;
	}

	Mres = mysql_store_result(Mconn);
	iCol = 0;
    if (Mres)   
    {
        NumFields = mysql_num_fields(Mres);
         
         
        while ((Mrow = mysql_fetch_row(Mres)))
		{
		   unsigned long *lengths;
		   lengths = mysql_fetch_lengths(Mres);
		   for(iRow = 0; iRow < NumFields; iRow++)
		   {
		        
		       sprintf(row[iRow][iCol].cell,"%.*s",  (int) lengths[iRow], Mrow[iRow] ? Mrow[iRow] : "NULL");
		        
		   }
		   iCol++;
		}
		 
        mysql_free_result(Mres);
		row_count = iCol;
		col_count = iRow;
    }
    else   
    {
        if (mysql_errno(Mconn))
        {
           lr_error_message("Error: %s\n", mysql_error(Mconn));
        }
        else if (mysql_field_count(Mconn) == 0)
        {
             
             
            NumRows = mysql_affected_rows(Mconn);
             
        }
    }

}


int lr_mysql_disconnect(MYSQL *Mconn)
{
	mysql_close(Mconn);
	return 1;
}
# 3 "vuser_init.c" 2


vuser_init()
{
	ci_load_dll(ci_this_context,("libmysql.dll"));
	
	
	
	
	
	 
# 30 "vuser_init.c"
     



	 
}
# 3 "c:\\users\\david.doering\\documents\\david's documents\\davidlogintest\\logintest\\\\combined_LoginTest.c" 2

# 1 "Action.c" 1

Action()
{	 

	 
	 
	 
	char* activityId;
	char* sourceId;
	 
	 
	char json[1080];
	 
	 
	 
	 

	 
	 


	 
	 
	 

	 



	 
	 



		 




	 


	
	
	
	
	 
	 
	 
	 
	 
	 
	 
	 
 
	 
	 
	 
	 
	 
	 
 
	return 0;
}
	
# 4 "c:\\users\\david.doering\\documents\\david's documents\\davidlogintest\\logintest\\\\combined_LoginTest.c" 2

# 1 "Login.c" 1
char sqQuery[512];
MYSQL *Mconn;
int MyRC;
char* user;
char* password;

Login()
{
	Mconn = lr_mysql_connect("127.0.0.1", 
							 "root", 
							 "root", 
							 "loadrunner_db",
							 atoi("3306"));
	 
	sprintf(sqQuery,"SELECT user, password FROM loadrunner_db.parameters");
	lr_mysql_query(Mconn, sqQuery);
	lr_save_string(row[0][0].cell, "user");
	lr_save_string(row[1][0].cell, "password");
	 
	user = lr_eval_string("{user}");
	password = lr_eval_string("{password}");


	session = ClientLogin(url, user, password);
	sprintf(sqQuery,"INSERT INTO loadrunner_db.parameters (session)"  "VALUES (\"%s\") WHERE user = \"%s\"", session, user);
	lr_mysql_query(Mconn, sqQuery);
	client = ClientCreate(url, session);
	ClientRegister(url, session, client);

 





     
	 
	 



	 
	 
	return 0;
}
# 5 "c:\\users\\david.doering\\documents\\david's documents\\davidlogintest\\logintest\\\\combined_LoginTest.c" 2

# 1 "Sync.c" 1
Sync()
{
	typedef char * string;
	string str[30];
	int i;
	str[0] = "AppInfo";
	str[1] = "Employee";
	str[2] = "TimeEntry";
	for (i = 0; i < 3; i ++) {
		QueryAction(url, session, client, str[i]);
	}
	 
	return 0;
}
# 6 "c:\\users\\david.doering\\documents\\david's documents\\davidlogintest\\logintest\\\\combined_LoginTest.c" 2

# 1 "vuser_end.c" 1

vuser_end()
{ 


	lr_mysql_disconnect(Mconn);
	return 0;
}
# 7 "c:\\users\\david.doering\\documents\\david's documents\\davidlogintest\\logintest\\\\combined_LoginTest.c" 2

