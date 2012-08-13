#include "vts2.h"
Login()
{
	session = ClientLogin(url, user, password);
	client = ClientCreate(url, session);
	ClientRegister(url, session, client);

	lr_save_string(user, "user");
	lr_save_string(password, "password");
	lr_save_string(session, "session");
	lr_save_string(client, "client");

    //lrvtc_send_row1("user;password;session;client", user\;password\;session\;client, ";", VTSEND_SAME_ROW);
	//lrvtc_send_row1("user;password;session;client", "{user};{password};{session};{client}", ";", VTSEND_SAME_ROW );
	/*lrvtc_send_row1("user", user, user, VTSEND_SAME_ROW);
	lrvtc_send_row1("password", password, password, VTSEND_SAME_ROW);
	lrvtc_send_row1("session", session, session, VTSEND_SAME_ROW);
	lrvtc_send_row1("client", client, client, VTSEND_SAME_ROW);*/
	//lrvtc_send_message("user;password;session;client", "{user};{password};{session};{client}");
	//lrvtc_send_message("user", user);
}
