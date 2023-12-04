#include"include/util.h"
#include<fstream>
#include<string>
#include<unistd.h>
using namespace std;
human* createHuman()
{
	human* person = new human();
	loadPerson(person);
	person->setYourname("xiaozhai");
	person->talkAbout();
	return person;
}
int main()
{
	system("clear");
	human* person = createHuman();
	char input;
	while(1)
	{
		string talk; 
		cout<<"-----------------------------------"<<endl;

		cout<<person->getYourname()<<":\n\t";//you turn talk
		while((input=getchar())!= '\n') talk.push_back(input); // talk something

		if(findStr(talk, "bye") || findStr(talk, "Bye") || findStr(talk, "i have to go"))//quit while()
		{
			person->exitTalk();
			break;
		}

		cout<<"-----------------------------------"<<endl;
		person->talkAbout(talk);//other turn
		person->printNum();
	}
	savePerson(person);
	return 0;
}
