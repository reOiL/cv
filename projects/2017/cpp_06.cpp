/*
The code is original.
As I wrote it before.
I didn't fix errors to track growth)

Task:
An array of integers is given.
It is required to sort the elements of this array in non-decreasing order.
*/
#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

void fshort(int* A, int L, int R){
	if (R - L <= 1) return;
	int mid = A[L + rand() % (R - L)];
	int x = L, y = L;
	for (int i = L; i < R; i++)
		if (A[i] < mid){
			swap(A[x], A[i]);
			if (x != y) swap(A[y], A[i]);
			x++; y++;
		}
		else if (A[i] == mid){
			swap(A[y], A[i]);
			y++;
		}
		fshort(A, L, x);
		fshort(A, y, R);
}

int main(){
	int n;
	cin >> n;
	int* A = new int[n];
	for (int i = 0; i < n; i++){
		cin >> A[i];
	}

	fshort(A, 0, n);

	for (int i = 0; i < n; i++){
		cout << A[i] << " ";
	}

	delete[] A;
	return 0;
}
