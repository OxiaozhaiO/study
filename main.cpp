#include"include/util.h"
#include"include/human.h"
using namespace std;
void createHuman()
{
	string myname = "xiaozhai";
	human person = human();
	person.talkAbout(myname);
}
int main()
{
	createHuman();
	return 0;
}
