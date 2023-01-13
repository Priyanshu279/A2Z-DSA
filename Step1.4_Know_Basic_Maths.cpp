// Basic Maths 

// Extraction of Digits 

// 7789 % 10 = 9 
// 778 % 10 = 8 
// 77 % 10 = 7 
// 7 % 10 = 7

// 7789/10 = 778
// 778/10 = 77
// 77/10 = 7
// 7/10 = 0

#include<bits/stdc++.h>
using namespace std;

void extraction_Of_Digits(int n){
    int x = n;
     while(x>0){
        int lastdigit = x%10;
        cout << lastdigit << " ";
        x = x/10;
     }
     cout << endl;
}

void count_Digits(int n){
    int x = n;
    int cnt = 0;
    while(x>0){
        x = x/10;
        cnt++;
    }
    cout << cnt << endl;
}

void reverse_Number(int n){
    int x = n;
    int rev = 0;
    while(x!=0){
        int lastdigit = x%10;
        rev = (rev*10)+lastdigit;
        x = x/10;
    }
    cout << rev << endl;
}

// Palindrome -> 121 = 121 true
// reverse is exactly same as the original

void check_Palindrome(int n){
    int x = n;
    int rev = 0;
    while(n>0){
        int ld = n%10;
        rev = (rev*10)+ ld;
        n = n/10;    
    }

    if(x == rev) cout << "true";
    else cout << "false";
}

// Armstrong Number 
// Armstrong Numbers are the numbers having 
// the sum of digits raised to power no. of digits 
// is equal to a given number. 
// Examples- 0, 1, 153, 370, 371, 407, and 1634 
// are some of the Armstrong Numbers.

void check_Armstrong(int n){
    int x = n;
    int cnt = 0;
    int t = n;
    int sum = 0;

    while(t!=0){
        cnt++;
        t = t/10;
    }

    while(n!=0){
        int ld = n%10;
        sum = sum + pow(ld,cnt);
        n = n/10; 
    }

    if(x == sum) cout << "Yes";
    else cout << "No";

}

// Print all divisors
// A divisor is a number that gives remainder as zero when divided

void print_Divisor(int n){
    for(int i = 1; i<=n; i++){
        if(n%i == 0) cout << i << " ";
    }
}

int main(){
    int n;
    cin >> n;
    
    // extraction_Of_Digits(n);

    // count_Digits(n);

    // reverse_Number(n);

    // check_Palindrome(n);

    // check_Armstrong(n);

    // print_Divisor(n);
    
} 
