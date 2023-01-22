#include<bits/stdc++.h>
using namespace std;

 void solve(int n) {
    int sum = n * (n + 1) / 2;
    cout <<"The sum of the first "<< n <<" numbers is: "<< sum << endl;
  }

//Function to reverse array using recursion
void reverseArray(int arr[], int start, int end) {
   if (start < end) {
      swap(arr[start], arr[end]);
      reverseArray(arr, start + 1, end - 1);
   }
}

 int main() {
    solve(5);
    solve(6);
  
   int n = 5;
   int arr[] = { 5, 4, 3, 2, 1 };
   reverseArray(arr, 0, n - 1);
   printArray(arr, n);
   return 0;

  }
