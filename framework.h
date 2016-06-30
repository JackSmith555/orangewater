typedef struct t_date{
	int year;
	int month;
	int day;
	int hour;
}date;
class user
{
	string u_name;
	int u_id;
	int score;
		int u_pwd;
	date j_date;

public:
	user(int id,int pwd):p_wd(pwd),u_id(id){}

}

class session{
	int maxnum=5;
	user ugroup[maxnum];
	time_t starttime;
	time_t endtime;
	int gameid;

}
void logingame();
void config();
void ranking();
void registuser();
void exitgame();