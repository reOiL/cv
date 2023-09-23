/*
The code is original.
As I wrote it before.
I didn't fix errors to track growth)

Task:
Given an array a of n integers.
It is required to determine whether the sum of the squares of
all its elements is a five-digit number.

*/
#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n;
	cin >> n;
	int* A  = new int[n];

	for(int i=0;i<n;i++)
		cin >> A[i];

	int sum = 0;

	for(int i=0;i<n;i++)
		sum += pow(A[i],2);

	if(sum >= 10000 && sum <= 99999){
	cout << "YES";
	}else{
	cout << "NO";
	}

	delete[] A;
return 0;
}
