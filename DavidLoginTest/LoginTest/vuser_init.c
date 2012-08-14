#include "as_web.h"
#include "Ptt_MySQL.h"

vuser_init()
{
	init();
	/*lr_load_dll ("libmysql.dll");
	#define MYSQLSERVER "127.0.0.1"
	#define MYSQLUSERNAME "root"
	#define MYSQLPASSWORD "root"
	#define MYSQLDB "loadrunner_db"
	#define MYSQLPORT "3306"*/
	/*
	// TABLE
	PVCI pvci = 0;
          int rc = 0;
          char *VtsServer = "127.0.0.1";
          lr_load_dll("vtclient.dll");
          pvci = lrvtc_connect( VtsServer,9999,VTOPT_KEEP_ALIVE);      
          rc = vtc_get_last_error(pvci);
          if( rc != 0 ) {
                   lr_message("Connection to VTS %s failed", VtsServer);
                   return -1;
          }
		  //WHY DOES IT CLEAR THE TABLE
		  lrvtc_retrieve_row("user;password", user, password);
		  lr_message("User: %s, Password: %s", user, password);
          return 0;
*/
    /*lr_load_dll("vtclient.dll");
	// IP address of table
	lrvtc_connect( "192.168.100.19",9999,0);*/

	//return 0;
}
