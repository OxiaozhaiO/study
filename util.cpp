#include <stdio.h>
#include <termios.h>
#include <unistd.h>
#include <fcntl.h>
#include<fstream>
#include"include/human.h"
#include<ctime>
int randSum(int n)
{
	srand((int)(time(NULL)));
	return rand()%n;
}
void getDate()
{
	time_t now = time(NULL);
	char temp[64];
	strftime(temp, sizeof(temp), "%Y-%m-%d", localtime(&now));
	cout<<temp<<endl;
}
void getTime()
{
	time_t now = time(NULL);
	char temp[64];
	strftime(temp, sizeof(temp), "%H:%M:%S", localtime(&now));
	cout<<temp<<endl;
}
bool findStr(string str, const char* target)
{
	if(str.find(target) == -1) return 0;
	return 1;
}

void loadPerson(human* person)
{
	string data;
	ifstream input("./data/person", ios::in);
	if(input.fail()) return;
	getline(input,data);
	person->setNum(atoi(data.c_str()));
}

void savePerson(human* person)
{
	ifstream temp("./data/person", ios::in);
	if(temp.fail()) system("mkdir data");
	ofstream output("./data/person", ios::out);
	output<<person->getNum();
	output.close();
}

int kbhit(void)
{
  struct termios oldt, newt;
  int ch;
  int oldf;
 
  tcgetattr(STDIN_FILENO, &oldt);
  newt = oldt;
  newt.c_lflag &= ~(ICANON | ECHO);
  tcsetattr(STDIN_FILENO, TCSANOW, &newt);
  oldf = fcntl(STDIN_FILENO, F_GETFL, 0);
  fcntl(STDIN_FILENO, F_SETFL, oldf | O_NONBLOCK);
 
  ch = getchar();
 
  tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
  fcntl(STDIN_FILENO, F_SETFL, oldf);
 
  if(ch != EOF)
  {
    ungetc(ch, stdin);
    return 1;
  }
 
  return 0;
}

