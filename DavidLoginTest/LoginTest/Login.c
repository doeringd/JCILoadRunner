char sqQuery[512];
MYSQL *Mconn;
int MyRC;
//dictionary[columnName, value] GetAll(TableName, Array columns)

int Login()
{
	Mconn = lr_mysql_connect(MYSQLSERVER, 
							 MYSQLUSERNAME, 
							 MYSQLPASSWORD, 
							 MYSQLDB,
							 atoi(MYSQLPORT));
	//connect(Mconn);
	// Create query to database to pull user and password
	//pullUser(Mconn, user, password, session, clientid);
	sprintf(sqQuery,"SELECT user, password, session, clientid FROM loadrunner_db.parameters");
	lr_mysql_query(Mconn, sqQuery);
	lr_save_string(row[0][0].cell, "user");
	lr_save_string(row[1][0].cell, "password");
	lr_save_string(row[2][0].cell, "session");
	lr_save_string(row[3][0].cell, "clientid");
	user = lr_eval_string("{user}");
	password = lr_eval_string("{password}");
	session = lr_eval_string("{session}");
	clientid = lr_eval_string("{clientid}");

	// Set all parameters and send back to database if user not logged in
	if(strlen(session) < 1 || strlen(clientid) < 1)
	{
		session = ClientLogin(url, user, password);
		clientid = ClientCreate(url, session);
		sprintf(sqQuery, "UPDATE loadrunner_db.parameters SET session=\"%s\", clientid=\"%s\" WHERE user = \"%s\";",session,clientid,user);//"INSERT INTO loadrunner_db.parameters (session) VALUES (\"%s\") WHERE user = \"%s\"", session, user);
		lr_mysql_query(Mconn, sqQuery);	
	}	
	ClientRegister(url, session, clientid);

	return 0;
}
