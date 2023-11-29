#include"include/util.h"
#include<fstream>
using namespace std;
void createHuman()
{
	human person = human();
	person.setYourname("xiaozhai");
	person.talkAbout();
	save(&person);
}
int main()
{
	createHuman();
	return 0;
}
