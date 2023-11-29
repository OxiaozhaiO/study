#include"include/util.h"
#include<fstream>
using namespace std;
human* createHuman()
{
	human* person = new human();
	loadPerson(person);
	savePerson(person);
	return person;
}
int main()
{
	human* person = createHuman();
	string talk; 
	while(1)
	{
		person->setYourname("xiaozhai");
		person->talkAbout();
		cout<<person->getYourname()<<":\n\t";
		cin>>talk;
		person->talkAbout(talk);
		if(talk.find("quit") || talk.find("exit")) break;
	}
	return 0;
}
