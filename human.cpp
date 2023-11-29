#include"include/human.h"

void human::talkAbout(string selfname)
{
	cout<<getName()<<" %"<<getNum()<<":\n\t"<<"hi~ "<<selfname<<endl;
}
string human::getName(){return name;}
int human::getAge(){return age;}
int human::getNum(){return num;}
void human::setNum(int num){this->num = num;}

human::human()
{
	name = "SYW";
	age = 16;
	num = 50;
}
