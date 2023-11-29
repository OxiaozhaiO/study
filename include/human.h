#include<iostream>
#include<string>
using namespace std;
class human
{
private:
	string name;
	int age, num;
	string stat;
public:
	human();
	void talkAbout(string selfname);
	string getName();
	int getAge();
    int getNum();
	void setNum(int num);
};
