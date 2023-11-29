#include<iostream>
#include<string>
using namespace std;
class human
{
private:
	string name;
	int age, num;
public:
	void talkAbout(string selfname)
	{
		cout<<getName()<<":\n\t"<<"hi~ "<<selfname<<endl;
	}
	human()
	{
		name = "SYW";
		age = 16;
		num = 50;
	}
	string getName(){return name;}
	int getAge(){return age;}
    int getNum(){return num;}
};
