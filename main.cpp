#include"include/util.h"
#include<fstream>
using namespace std;
void createHuman()
{
	string myname = "xiaozhai";
	human person = human();
	person.talkAbout(myname);
	save(&person);
}
int main()
{
	createHuman();
	return 0;
}
