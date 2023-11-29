#include"include/util.h"
#include<fstream>
#include<string>
using namespace std;
human* createHuman()
{
	human* person = new human();
	loadPerson(person);
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
		if(findStr(talk, "quit") || findStr(talk, "exit")) break;
	}
	savePerson(person);
	return 0;
}
