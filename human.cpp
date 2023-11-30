#include"include/util.h"
void human::talkAbout()
{
	cout<<getName()<<" %"<<getNum()<<"\n\t"<<"hi~ "<<getYourname()<<endl;
}

void human::talkAbout(string content)
{
	cout<<getName()<<" %"<<getNum()<<":\n\t";
	
	if(findStr(content,"hi") || findStr(content, "hello"))cout<<"hi"<<endl;
	else if(findStr(content,"what the time") || findStr(content, "what time"))
	{
		cout<<"is "; getTime();
	}
	else if(findStr(content, "what's the date today") || findStr(content, "what the date today") || findStr(content, "date"))
	{
		cout<<"is "; getDate();
	}
	else cout<<"what mean about that =A="<<endl;
}
void human::exitTalk()
{
	cout<<getName()<<" %"<<getNum()<<":\n\t";
	cout<<"Byebye, QAQ"<<endl;
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
