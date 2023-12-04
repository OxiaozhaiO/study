#include<iostream>
#include<string>
using namespace std;
class human
{
private:
	bool begin = 1;
	string name;
	int age, num;
	string stat;
	string yourname;
	string requbad[3]={
		"fuck you too 凸-^-",
		"you should scold me?!",
		"why hit me?" };
public:
	human();
	void talkAbout();
	void talkAbout(string content);
	void longtimenotalk();
	void exitTalk();
	void printNum();

	void setNum(int num);
	void setYourname(string name);

	int getAge();
	int getNum();
	string getYourname();
	string getName();
};
