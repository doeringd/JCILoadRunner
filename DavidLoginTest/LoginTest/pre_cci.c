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
	char *activityId;
	char *version = "3";
	char *token;

	 
	sprintf(fullUrl,"%s?client_id=%s&p_size=%s&version=%s&source_name=%s", baseUrl, clientId, param_size, version, action);
	lr_save_string(fullUrl, "URL_Param");
	lr_message(fullUrl);
  
	 
	web_add_header("Content-Type", "application/json; charset=utf-8");
	web_add_header("Cookie", sessionCookie);
	lr_message("Session cookie: ",sessionCookie);
	 
	web_set_max_html_param_len(param_size);

	 
	lr_start_transaction("rest_put");

		web_reg_save_param("token", "LB=token\":\"", "RB=\"},", "Search=Body", "LAST");
		web_reg_save_param("activityId", "LB=activityId\":\"", "RB=\",\"", "Search=Body", "LAST");
		 

		web_custom_request("post_to_http_jms_provider",
		 "URL={URL_Param}",
		 "Method=GET",
		 "TargetFrame=",
		 "Resource=0",
		 "Referer=",
		 "Mode=HTTP",
		 "LAST"); 
	
		token = lr_eval_string("{token}");
		activityId = lr_eval_string("{activityId}");
		lr_message("Returned token is: %s", token);
	lr_end_transaction("rest_put", 2);

	if(strlen(token) > 0)
	{
		 
		 
		sprintf(fullUrl, "%s&token=%s", fullUrl, token);
		lr_save_string(fullUrl, "URL_Param");
		 
		web_reg_save_param("result", "LB=", "RB=", "Search=Body", "LAST");		
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

 




 
# 336 "functions.h"
# 6 "globals.h" 2



 
 
char* session;
char* client;
char* user = "CMALANS";
char* password = "cmalans";
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



vuser_init()
{ 
# 22 "vuser_init.c"
     



	 
}
# 3 "c:\\users\\david.doering\\documents\\david's documents\\davidlogintest\\logintest\\\\combined_LoginTest.c" 2

# 1 "Action.c" 1

Action()
{	 

	 
	 
	 
	char* activityId;
	char* sourceId;
	 
	 
	char json[1080];
	 
	 
	 
	 

	 
	 


	 
	 
	 

	 



	 
	 



		 




	 

	
	
	
	
	 
	 
	 
	 
	activityId = QueryAction(url, session, client, "TimeEntry");
	 
	 
	 
 
	sprintf(sourceId, "%s_1", client);
	sprintf(json, "{\"source_name\":\"TimeEntry\",\"client_id\":\"%s\",\"create\":{\"%s\":{\"activityId\":\"%s\",\"date\":\"08\\/10\\/2012\",\"employee\":\"%s\",\"end\":\"11:38:11\",\"otherUnion\":\"\",\"payComments\":\"\",\"project\":\"Regular\",\"reportedHours\":\"1\",\"shift\":\"\",\"sourceId\":\"%s\",\"start\":\"10:38:11\"}}}", client, sourceId, activityId, user, sourceId);
	lr_message(json);
	 
	 
	 
 
	return 0;
}
	
# 4 "c:\\users\\david.doering\\documents\\david's documents\\davidlogintest\\logintest\\\\combined_LoginTest.c" 2

# 1 "Login.c" 1

Login()
{
	session = ClientLogin(url, user, password);
	client = ClientCreate(url, session);
	ClientRegister(url, session, client);

	lr_save_string(user, "user");
	lr_save_string(password, "password");
	lr_save_string(session, "session");
	lr_save_string(client, "client");

     
	 
	 



	 
	 
}
# 5 "c:\\users\\david.doering\\documents\\david's documents\\davidlogintest\\logintest\\\\combined_LoginTest.c" 2

# 1 "vuser_end.c" 1

vuser_end()
{ 


	return 0;
}
# 6 "c:\\users\\david.doering\\documents\\david's documents\\davidlogintest\\logintest\\\\combined_LoginTest.c" 2

