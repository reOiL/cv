/*
The code is original.
As I wrote it before.
I didn't fix errors to track growth)

Task:
Given a file "in.txt ", which consists of M+1 strings.
On the last line there are two numbers s1 and s2.

It is required to output all lines, starting from the line numbered s1
and up to the line numbered s2, not including itself
(the lines are numbered from 1).
*/

// ConsoleApplication26.cpp: определяет точку входа для консольного приложения.
//

#include <iostream>
#include <fstream>
using namespace std;


int main()
{
	ifstream inp;
	inp.open("in.txt", ios::in);
	int One = 0;
	int Two = 0;
	char buff[2048] = {};
	inp.seekg(-1, ios::end);
	inp >> Two;
	inp.seekg(-3, ios::end);
	inp >> One;
	inp.seekg(0, ios::beg);
	int i = 1;
	while (i != Two){
		inp.getline(buff, 2048);
		if (i == One){
			while (i != Two){
				cout << buff << "\n";
				inp.getline(buff, 2048);
				i++;
			}
			break;
		}
		i++;
	}
	inp.close();
	return 0;
}

