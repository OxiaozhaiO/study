#include"include/util.h"
#include<fstream>
#include<string>
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
	human* person = createHuman();
	char input;
	while(1)
	{
		string talk; 

		cout<<person->getYourname()<<":\n\t";//you turn talk
		while((input=getchar())!= '\n') talk.push_back(input); // talk something

		if(findStr(talk, "bye") || findStr(talk, "Bye") || findStr(talk, "i have to go"))//quit while()
		{
			person->exitTalk();
			break;
		}

		person->talkAbout(talk);//other turn
	}
	savePerson(person);
	return 0;
}
