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
	string talk[100];
public:
	human();
	void talkAbout();
	void talkAbout(string content);
	void exitTalk();
	string getName();
	int getAge();
	int getNum();
	string getYourname();
	void setNum(int num);
	void setYourname(string name);
};
