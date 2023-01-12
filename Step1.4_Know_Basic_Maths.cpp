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

int main(){
    int n;
    cin >> n;
    
    extraction_Of_Digits(n);

    count_Digits(n);

    reverse_Number(n);

} 
