#include<iostream>
#include<string>
using namespace std;
class human
{
private:
	string name;
	int age, num;
	string stat;
	string yourname;
public:
	human();
	void talkAbout();
	string getName();
	int getAge();
	int getNum();
	string getYourname();
	void setNum(int num);
	void setYourname(string name);
};
