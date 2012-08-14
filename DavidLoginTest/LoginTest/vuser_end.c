vuser_end()
{/*
    PVCI pvci = 0; 
	pvci = lrvtc_disconnect(); */
	lr_mysql_disconnect(Mconn);
	return 0;
}
