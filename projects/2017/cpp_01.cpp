/*
The code is original.
As I wrote it before.
I didn't fix errors to track growth)

Task:
An array of n elements is given.
It is necessary to double all its positive elements,
and to halve its negative elements in absolute value.

*/
#include <iostream>

using namespace std;

int main() {

int c;
cin >> c;

int* A = new int[c];
for(int i = 0;i<c;i++){
  cin >> A[i];
}

for (int i=0;i<c;i++){
  if(A[i] >= 0){
    A[i] = A[i]*2;
    cout << A[i]<<' ';
  }  else if(A[i] == -1){
      A[i] = -1;
      cout << A[i]<<' ';

  }else if(A[i]<0){
    A[i] = A[i]/2;
    if(A[i]%2 !=0){
      A[i] = A[i]-1;
    }


    cout << A[i]<<' ';
  }

}


  return 0;
}
