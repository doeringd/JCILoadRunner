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
	//QueryAction(url, session, client, "TimeEntry");
	return 0;
}
