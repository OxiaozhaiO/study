#include <stdio.h>
#include <termios.h>
#include <unistd.h>
#include <fcntl.h>
#include<fstream>
#include"include/human.h"

void save(human* person)
{
	ifstream input;
	string dataStr;
	input.open("./data/person", ios::in);
	if(input.fail())
	{
		system("mkdir data");
		ofstream output("./data/person", ios::out);
		output<<person->getNum();
		output.close();
	}
	getline(input, dataStr);
	person->setNum(atoi(dataStr.c_str()));
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

