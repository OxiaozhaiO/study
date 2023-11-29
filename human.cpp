#include"include/human.h"

void human::talkAbout()
{
	cout<<getName()<<" %"<<getNum()<<":\n\t"<<"hi~ "<<getYourname()<<endl;
}
string human::getName(){return name;}
string human::getYourname(){return yourname;}
int human::getAge(){return age;}
int human::getNum(){return num;}
void human::setNum(int num){this->num = num;}
void human::setYourname(string yourname){this->yourname = yourname;}

human::human()
{
	name = "SYW";
	age = 16;
	num = 50;
}
