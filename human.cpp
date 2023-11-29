#include"include/util.h"
void human::talkAbout()
{
	cout<<getName()<<" %"<<getNum()<<"\n\t"<<"hi~ "<<getYourname()<<endl;
}
void human::talkAbout(string content)
{
	cout<<getName()<<" %"<<getNum()<<"\n\t";
	
	if(findStr(content,"hi") || findStr(content, "hello"))cout<<"hi"<<endl;
	else if(findStr(content, "exit") || findStr(content, "quit") )cout<<"Byebye~"<<endl;
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
