// Patterns are necessary for mastering the loop 
// Patterns will generally have 2 nested loops

// Golden Rules for Printing any Pattern

// 1.Outer loop -> rows
// 2.Inner loop -> columns & connect them somehow to the rows
// Print them "*" inside the inner loop


#include<bits/stdc++.h>
using namespace std;

// Pattern-1
// *****
// *****
// *****
// *****
// *****

void print1(int n){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout << "*";
        }
        cout << endl;
    }
}

// Pattern-2
// *
// **
// ***
// ****
// *****

void print2(int n){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<=i; j++){
            cout << "*";
        }
        cout << endl;
    }
}

// Pattern-3
// 1
// 12
// 123
// 1234
// 12345

void print3(int n){
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout << j;
        }
        cout << endl;
    }
}

// Pattern-4
// 1
// 22
// 333
// 4444
// 55555

void print4(int n){
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout << i;
        }
        cout << endl;
    }
}

// Pattern-5
// *****
// ****
// ***
// **
// *

void print5(int n){
    for(int i = 0; i<n; i++){
        for(int j = n;j>i;j--){
            cout << "*";
        }
    cout << endl;
    }
}

// Pattern-6
// 12345
// 1234
// 123
// 12
// 1

void print6(int n){
    for(int i=0;i<n;i++){
        int d=1;
        for(int j = n; j>i;j--){
            cout << d;
            d++;
        }
        cout << endl;
    }
}

// Pattern-7
//      *
//     ***
//    *****
//   *******
//  *********

void print7(int n){
    for(int i = 0; i<n; i++){
        //space-loop
        for(int j = n;j>i;j--){
            cout << " ";
        }
        //star-loop
        for(int k = 0; k<(2*i+1); k++){
            cout << "*";
        }
        //space-loop
        for(int l = n;l>i;l--){
            cout << " "; 
        }
        cout << endl;
    }
}

// Pattern-8
// *********
//  *******
//   *****
//    ***
//     *

void print8(int n){
    for(int i = 0; i<n; i++){

        // space-loop
        for(int j = 0; j<i; j++){
            cout << " "; 
        }
        // star-loop
        for(int k = 0; k<((2*n)-(2*i+1)); k++){
            cout << "*"; 
        }
        // space-loop
        for(int l = 0; l<i; l++){
            cout << " "; 
        }
        cout << endl;
    }
}

// Pattern-9
//      *
//     ***
//    *****
//   *******
//  *********
//  *********
//   *******
//    *****
//     ***
//      *

void print9(int n){
    for(int i = 0; i<n; i++){
        //space-loop
        for(int j = n;j>i;j--){
            cout << " ";
        }
        //star-loop
        for(int k = 0; k<(2*i+1); k++){
            cout << "*";
        }
        //space-loop
        for(int l = n;l>i;l--){
            cout << " "; 
        }
        cout << endl;
    }
    
     for(int i = 0; i<n; i++){
     
     cout << " ";

        // space-loop
        for(int j = 0; j<i; j++){
            cout << " "; 
        }
        // star-loop
        for(int k = 0; k<((2*n)-(2*i+1)); k++){
            cout << "*"; 
        }
        // space-loop
        for(int l = 0; l<i; l++){
            cout << " "; 
        }
        cout << endl;
    }
}

// Pattern-10
// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *

void print10(int n){
    for(int i = 1; i<=(2*n-1); i++){
        int stars = i;
        if(i>n) stars = 2*n-i;
        for(int j = 1; j<=stars;j++){
            cout << "*";
        }
        cout << endl;
    }
}

// Pattern-11
// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1

void print11(int n){
        int d = 1;
    for(int i = 0; i<n; i++){

        if(i%2==0){
            d = 1;
        }else{
            d = 0;
        }

        for(int j = 0; j<=i;j++){
            cout << d <<" ";
            d = 1-d; //flip
        }
        cout << endl;
    }
}

int main(){

    int n;
    cin >> n;

    // print1(n);

    // print2(n);

    // print3(n);

    // print4(n);

    // print5(n);

    // print6(n);

    // print7(n);

    // print8(n);

    // print9(n);

    // print10(n);

    // print11(n);

}

