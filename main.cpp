#include"include/util.h"
#include<fstream>
#include<string>
using namespace std;
human* createHuman()
{
	human* person = new human();
	person->setYourname("xiaozhai");
	person->talkAbout();
	loadPerson(person);
	return person;
}
int main()
{
	human* person = createHuman();
	char input;
	while(1)
	{
		string talk; 
		cout<<person->getYourname()<<":\n\t";
		while((input=getchar())!= '\n')
		{
			talk.push_back(input);
		}
		person->talkAbout(talk);
		if(findStr(talk, "quit") || findStr(talk, "exit")) break;
	}
	savePerson(person);
	return 0;
}
