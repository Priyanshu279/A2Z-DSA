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

// Pattern-12
// 1      1
// 12    21
// 123  321
// 12344321

void print12(int n){
    int space = 2*(n-1);
    for(int i=1; i<=n; i++){
         // number-loop
            for(int j=1;j<=i;j++){
            cout << j;
        }

        //space-loop
        for(int k=1;k<=space;k++){
            cout << " ";
        }

        // number-loop
        for(int l=i;l>=1;l--){
            cout << l;
        }
        cout << endl;
        space -=2;
    }
}

// Pattern-13
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

void print13(int n){
    int d = 1;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<=i; j++){
            cout << d<<" ";
            d++;
        }
        cout << endl;
    }
}

// Pattern-14
// A
// AB
// ABC
// ABCD
// ABCDE

void print14(int n){
    for(int i=0; i<n; i++){
        char d = 'A';
        for(int j = 0; j<=i;j++){
            cout << d;
            d++;
        }
        cout << endl;
    }
}

// Pattern-15
// ABCDE
// ABCD
// ABC
// AB
// A

void print15(int n){
    for(int i=0;i<n;i++){
        char d='A';
        for(int j = n; j>i;j--){
            cout << d;
            d++;
        }
        cout << endl;
    }
}

// Pattern-16
// A
// BB
// CCC
// DDDD
// EEEEE

void print16(int n){
    char d = 'A';
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout << d;
        }
        cout << endl;
        d++;
    }
}

// Pattern-17
//      A
//     ABA
//    ABCBA
//   ABCDCBA
//  ABCDEDCBA

void print17(int n){
    for(int i = 0; i<n; i++){
        //space-loop
        for(int j = n;j>i;j--){
            cout << " ";
        }
        //char-loop
        char d = 'A';
        int breakpoint = (2*i+1)/2;
        for(int k = 1; k<=(2*i+1); k++){
            cout << d;
            if(k<=breakpoint) d++;
            else d--;
        }
        //space-loop
        for(int l = n;l>i;l--){
            cout << " "; 
        }
        cout << endl;
    }
}

// Pattern-18
// E
// D E
// C D E
// B C D E
// A B C D E

void print18(int n){
    for(int i = 0; i<n; i++){
        for(char ch = 'E'-i; ch<='E'; ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}

// Pattern-19
// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********

void print19(int n){
    int space = 0;
    for(int i=0; i<n; i++){
        // stars
        for(int j = 1; j<=n-i;j++){
            cout << "*";
        }
        // spaces
        for(int k = 0;k<space;k++){
            cout << " ";
        }
        // stars
         for(int l = 1; l<=n-i;l++){
            cout << "*";
        }
        space +=2;
        cout << endl;
    }

    space = 2*n-2;

    for(int i = 1; i<=n; i++){
        
        // stars
        for(int j = 1; j<=i;j++){
            cout << "*";
        }
        // spaces
        for(int k = 0;k<space;k++){
            cout << " ";
        }
        // stars
         for(int l = 1; l<=i;l++){
            cout << "*";
        }
        space -= 2;
        cout << endl;
    }
}

// Pattern-20
// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *

void print20(int n){
    int spaces = 2*n-2;
    for(int i = 1; i<=2*n-1; i++){
        int stars = i;
        if(i>n) stars = 2*n-i;

        // stars
        for(int j = 1;j<=stars;j++){
            cout << "*";
        }

        // spaces
        for(int j = 1; j<=spaces; j++){
            cout << " ";
        }

        // stars 
         for(int j = 1;j<=stars;j++){
            cout << "*";
        }
        cout << endl;
        if(i<n) spaces -=2;
        else spaces +=2;
    }
}

// Pattern-21
// *****
// *   *
// *   *
// *   *
// *****

void print21(int n){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(i==0 || j==0 || i==n-1 || j==n-1){
                cout << "*";
            }
            else cout << " ";
        }
        cout << endl;
    }
}

// Pattern-22
// 4 4 4 4 4 4 4
// 4 3 3 3 3 3 4
// 4 3 2 2 2 3 4
// 4 3 2 1 2 3 4
// 4 3 2 2 2 3 4
// 4 3 3 3 3 3 4
// 4 4 4 4 4 4 4

void print22(int n){
    for(int i = 0; i<2*n-1; i++){
        for(int j = 0;j<2*n-1;j++){
            int top = i;
            int left = j;
            int right = (2*n - 2) - j;
            int down = (2*n - 2) - i;
            cout << (n-min(min(top,down),min(left,right)))<<" ";
        }
        cout << endl;
    }
}

int main(){

    int n;
    cin >> n;

    print1(n);

    print2(n);

    print3(n);

    print4(n);

    print5(n);

    print6(n);

    print7(n);

    print8(n);

    print9(n);

    print10(n);

    print11(n);

    print12(n);

    print13(n);

    print14(n);

    print15(n);

    print16(n);

    print17(n);

    print18(n);

    print19(n);

    print20(n);

    print21(n);

    print22(n);

}
