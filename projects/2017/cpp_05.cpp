/*
The code is original.
As I wrote it before.
I didn't fix errors to track growth)

Task:
Given a string of text S.
You need to check whether the brackets are placed correctly in it.
According to the simplified rules of the language,
to the right of each opening bracket there should be a
corresponding closing one, and to the left of each closing one
there should be a corresponding opening one. In addition, according
to the rules, there should be no brackets nested in each other.
*/

// ConsoleApplication8.cpp: определяет точку входа для консольного приложения.
//

#include <iostream> 
#include <cstring>
#include <ctype.h>

using namespace std;
#define strSize 501
#define NO "NO"
#define YES "YES"
int main()
{
	char str[strSize] = {};
	cin.getline(str, strSize);
	
	bool isOpend = 0;
	bool isTure	 = 0;

	int i = 0;

	do
	{
		if (str[i] == '(' && !isOpend) {
			isOpend = 1;
		}
		else if (str[i] == '(' && isOpend) {
			cout << NO;
			return 0;
		}
		else if (str[i] == ')' && isOpend) {
			isOpend = 0;
		}
		else if (str[i] == ')' && !isOpend) {
			cout << NO;
			return 0;
		}
		i++;
	} while (str[i] != '\0');
	if (isOpend) {
		cout << NO;
	}
	else {
		cout << YES;
	}
	return 0;
}