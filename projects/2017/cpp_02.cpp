/*
The code is original.
As I wrote it before.
I didn't fix errors to track growth)

Task:
An array of n elements is given.
It is necessary to find the maximum value of the array elements,
as well as the numbers of all the array elements that have this value.

*/
#include <iostream>

using namespace std;

int main() {
int c;
cin >> c;

int* A = new int[c];
for(int i=0;i<c;i++){
  cin >> A[i];
}

int G =A[0];
int max = 0;
for(int i=1;i<c;i++){

  if(G <= A[i]){
    G = A[i];
    max = i;
  }

}
cout << G << " ";
cout << max+1;
  return 0;
}