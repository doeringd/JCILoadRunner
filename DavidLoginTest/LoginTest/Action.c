#include "vts2.h"
Action()
{	// Odd errors may be thrown if not declared before using.

	//char* session;
	//char* client;
	//char* result;
	char* activityId;
	char* sourceId;
	//char* user = "CMALANS";
	//char* password = "cmalans";
	char json[1080];
	//char* url = "http://192.168.100.38:9292/application";
	//char* user;
	//char* password;
	//char* session;

	// VERY CLOSE - user and password are correct, figure out the others
	/*lr_message("User %s password %s session %s client %s", user, password, session, client);
	lrvtc_retrieve_row("user;password;session;client", user, password, session, client);
	lr_message("User %s password %s session %s client %s", user, password, session, client);*/
	//user = lr_eval_string({user});
	//}
	//http://ec2-184-72-43-122.us-west-1.compute.amazonaws.com/application

	/*session = ClientLogin(url, user, password);
	client = ClientCreate(url, session);
	ClientRegister(url, session, client);*/

	//Random number for SourceId
	/*unsigned int iseed = (unsigned int)time(NULL);
	srand(iseed);
	sourceId = rand();*/

		/*"{\"source_name\":\"TimeEntry\",\"client_id\":\"9b05e56dc0a94b93b4f6708658bd347d\","
					  "\"create\":{\"9b05e56dc0a94b93b4f6708658bd347d_113815008096031.84\":{\"activityId\":\"1-2GA3WV7\","
					  "\"date\":\"08\/10\/2012\",\"employee\":\"CMALANS\",\"end\":\"11:38:11\",\"otherUnion\":\"\","
					  "\"payComments\":\"\",\"project\":\"Regular\",\"reportedHours\":\"1\",\"shift\":\"\","
					  "\"sourceId\":\"9b05e56dc0a94b93b4f6708658bd347d_113815008096031.84\",\"start\":\"10:38:11\"}}}";*/
	//field keyValue = { .key = "source_name", .value = "TimeEntry" };

	
	
	
	
	//QueryAction(url, session, client, "AppInfo");	
	//QueryAction(url, session, client, "Employee");	
	//QueryAction(url, session, client, "Mileage");	
	//QueryAction(url, session, client, "State");	
	activityId = QueryAction(url, session, client, "TimeEntry");
	//lr_message(client); 
	//QueryAction(url, session, client, "SiteNote");
	//QueryAction(url, session, client, "LookupValue");
// ========= Create ==========
	sprintf(sourceId, "%s_1", client);
	sprintf(json, "{\"source_name\":\"TimeEntry\",\"client_id\":\"%s\",\"create\":{\"%s\":{\"activityId\":\"%s\",\"date\":\"08\\/10\\/2012\",\"employee\":\"%s\",\"end\":\"11:38:11\",\"otherUnion\":\"\",\"payComments\":\"\",\"project\":\"Regular\",\"reportedHours\":\"1\",\"shift\":\"\",\"sourceId\":\"%s\",\"start\":\"10:38:11\"}}}", client, sourceId, activityId, user, sourceId);
	lr_message(json);
	//lr_message(sourceId);
	//Create(url, session, json);
	//QueryAction(url, session, client, "TimeEntry");
// ===========================
	return 0;
}
	
