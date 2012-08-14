Sync()
{
	typedef char * string;
	string str[30];
	int i;
	str[0] = "AppInfo";
	str[1] = "Employee";
	str[2] = "TimeEntry";
	str[3] = "Activity";
	str[4] = "Mileage";
	for (i = 0; i < 3; i ++) {
		QueryAction(url, session, clientid, str[i]);
	}
	//QueryAction(url, session, client, "TimeEntry");
	return 0;
}
