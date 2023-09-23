/*
The code is original.
As I wrote it before.
I didn't fix errors to track growth)

Task:
Implement the function of recursive exponentiation of a real number.

*/

// ConsoleApplication2.cpp: определяет точку входа для консольного приложения.
//
#include <iostream>

using namespace std;

void ppow(double a, double b, double stek){
	if (b == 0){
		cout << 1;
		return;
	}
	else if (b == 1){
		cout << std::fixed << stek;
		return;
	}
	
	stek = stek *a;

	return ppow(a, b - 1, stek);
}

int main()
{
	double a, b;
	cin >> a >> b;
	ppow(a, b ,a);
	return 0;
}

