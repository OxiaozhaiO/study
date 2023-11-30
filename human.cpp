#include"include/util.h"
//the first talk
void human::talkAbout()
{
	cout<<getName()<<":\n\t"<<"hi~ "<<getYourname()<<endl;
	printNum();
}
//the normal talk
void human::talkAbout(string content)
{
	cout<<getName()<<":\n\t";
	
	if(findStr(content,"hi") || findStr(content, "hello"))cout<<"hi"<<endl;
	//get time
	else if(findStr(content,"what the time") || findStr(content, "what time"))
	{
		cout<<"is "; getTime();
	}
	//get date
	else if(findStr(content, "what's the date today") || findStr(content, "what the date today") || findStr(content, "date"))
	{
		cout<<"is "; getDate();
	}
	//bad require
	else if(findStr(content,"fuck you") || findStr(content, "fuck") || findStr(content, "you are sb"))
	{
		cout<<this->requbad[randSum(3)]<<endl;
		this->num-=20;
	}
	//no result
	else cout<<"what mean about that =A="<<endl;
}
//the end talk
void human::exitTalk()
{
	cout<<getName()<<":\n\t";
	cout<<"Byebye, QAQ"<<endl;
	printNum();
}

//print num
void human::printNum()
{
	cout<<"[";
	for(int i = 1; i <= 10; i++)
	{
		if(i < this->num / 10) cout<<"=";
		else cout<<" ";
	}
	cout<<"]"<<endl;
}

void human::setNum(int num){this->num = num;}
void human::setYourname(string yourname){this->yourname = yourname;}

string human::getName(){return name;}
string human::getYourname(){return yourname;}
int human::getAge(){return age;}
int human::getNum(){return num;}


human::human()
{
	name = "SYW";
	age = 16;
	num = 50;
}
