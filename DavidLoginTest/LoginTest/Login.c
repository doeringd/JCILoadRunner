char sqQuery[512];
MYSQL *Mconn;
int MyRC;
char* user;
char* password;

Login()
{
	Mconn = lr_mysql_connect(MYSQLSERVER, 
							 MYSQLUSERNAME, 
							 MYSQLPASSWORD, 
							 MYSQLDB,
							 atoi(MYSQLPORT));
	// Create query to database to pull user and password
	sprintf(sqQuery,"SELECT user, password FROM loadrunner_db.parameters");
	lr_mysql_query(Mconn, sqQuery);
	lr_save_string(row[0][0].cell, "user");
	lr_save_string(row[1][0].cell, "password");
	//lr_save_string(row[2][0].cell, "user");	
	user = lr_eval_string("{user}");
	password = lr_eval_string("{password}");


	session = ClientLogin(url, user, password);
	sprintf(sqQuery,"INSERT INTO loadrunner_db.parameters (session)"  "VALUES (\"%s\") WHERE user = \"%s\"", session, user);
	lr_mysql_query(Mconn, sqQuery);
	client = ClientCreate(url, session);
	ClientRegister(url, session, client);

/*
	lr_save_string(user, "user");
	lr_save_string(password, "password");
	lr_save_string(session, "session");
	lr_save_string(client, "client");*/

    //lrvtc_send_row1("user;password;session;client", user\;password\;session\;client, ";", VTSEND_SAME_ROW);
	//lrvtc_send_row1("user;password;session;client", "{user};{password};{session};{client}", ";", VTSEND_SAME_ROW );
	/*lrvtc_send_row1("user", user, user, VTSEND_SAME_ROW);
	lrvtc_send_row1("password", password, password, VTSEND_SAME_ROW);
	lrvtc_send_row1("session", session, session, VTSEND_SAME_ROW);
	lrvtc_send_row1("client", client, client, VTSEND_SAME_ROW);*/
	//lrvtc_send_message("user;password;session;client", "{user};{password};{session};{client}");
	//lrvtc_send_message("user", user);
	return 0;
}
