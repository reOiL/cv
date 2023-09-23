/*
The code is original.
As I wrote it before.
I didn't fix errors to track growth)

Task:
In this task, you are required to implement the heap data structure.
Your program should handle the following requests.

"1" — make heap empty (if there were any elements in heap,
then delete them all). When performing this action, nothing is
displayed on the screen.
"2 n" — add the number n to heap. When performing this action,
nothing should be displayed on the screen in the same way.
"3" — remove the maximum value from heap and display it on the screen.
In this case, the number itself is removed from the data structure.
If the heap was empty during this action, you need to output the string
"CANNOT" instead of a number.
*/

// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include <iostream>
#include <algorithm>

using namespace std;
#define sizeOfHeap 1000000
int sizeHeap = 0;
int h[sizeOfHeap];
int iElmCount;
int MaxElm = 0;
void siftUp(int v) {
	while (v > 0 && h[v] > h[(v - 1) / 2]) {
		swap(h[v], h[(v - 1) / 2]);
		v = (v - 1) / 2;
	}
}

void siftDown(int v) {
	while (2 * v + 1 < sizeHeap) {
		int left = 2 * v + 1;
		int right = 2 * v + 2;
		int minCh = left;
		if (right < sizeHeap && h[right] > h[left])
			minCh = right;
		if (h[v] >= h[minCh])
			return;
		swap(h[v], h[minCh]);
		v = minCh;
	}
}

void insert(int x) {
	h[sizeHeap++] = x;
	siftUp(sizeHeap - 1);
	//siftDown(sizeHeap - 1);
	iElmCount++;
}

int extractMax() {
/*	int Max = h[0];
	int iPos = 0;
	for (int i = 0; i < sizeHeap; i++) {
		if (Max < h[i]) {
			Max = h[i];
			iPos = i;
		}
	}
	h[iPos] = 0;
	iElmCount--;
	return Max;*/
	int t = h[0];
	h[0] = 0;
	siftDown(0);
	iElmCount--;
	return t;
}

void CleanHeap(){
	iElmCount = sizeHeap;
	for (iElmCount; iElmCount > -1; iElmCount--) {
		h[iElmCount] = 0;
	}
	iElmCount = 0;
}

int main()
{
	int a, com, g;
	iElmCount = 0;
	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> com;
		switch (com)
		{
		case 1: {
			CleanHeap();
		}break;
		case 2: {
			cin >> g;
			insert(g);
		}break;
		case 3: {
			if (iElmCount == 0)
				cout << " "<<"CANNOT\n";
			else
				cout <<" " <<extractMax()<<endl;
		}
		default:
			break;
		}
	}

	return 0;
}

