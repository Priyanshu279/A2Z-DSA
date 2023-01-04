// // Generic skeleton of a C++ code

#include<iostream>

int main(){
    return 0; 
} 

// // Step 1.1.1 -> User Input/Output

#include<iostream>
using namespace std; //use the std library

int main(){
    int x,y;
    cin >> x >> y; //taking input x,y
    cout << "value of x: "<< x <<" and y: "<<y<<endl; //printing output x,y

    cout << "Hey Priyanshu!"<<"\n";
    cout << "Hey Priyanshu!"<<endl<<"Hey Piyush!";
    return 0;
} 


// // Step 1.1.2 -> Data Types

// place where you store value is data type 
// for number use int for character use char and so on...

#include<bits/stdc++.h>
using namespace std;

int main(){

// For storing Numbers/Integers 

    // (1) int, size = 4 bytes
    int x = 10;

    // (2) long, size = 4 bytes
    long y = 154243;
    
    // (3) long long, size = 8 bytes
    long long z = 145553353;

// For storing Decimal Numbers
    
    // (1) float, size = 4 bytes
    float p = 3.5;

    // (2) double, size = 8 bytes
    double q = 432.333324;

    // (3) long double, size = 12 bytes
    long double r = 243.2342242244;

// For storing String/Character 
    
    // (1) string and getline, size = 32 bytes
    
    string str1 = "Hey Priyanshu!";
    cout << str1 << endl;

    string str2;
    getline(cin,str2);//getline take entire string as input and store it in str
    cout << str2 << endl;

    // (2) char, size = 1 byte
    char ch = 'a';
    cout << ch << endl;

} 

// // Step 1.1.3 -> If Else Statements 
  
  // Q1... write a program that takes an input of age
  // and prints if you are adult or not

    #include<bits/stdc++.h>
    using namespace std;

    int main(){
        int age;
        cin >> age;

        if(age >= 18){
            cout << "you are an adult";
        }else{ 
            cout << "you are not an adult";
        }
        return 0;
    }

    // Q2... A school has following rules for grading system
    // a. Below 25 - F 
    // b. 25 to 44 - E
    // c. 45 to 49 - D
    // d. 50 to 59 - C
    // e. 60 to 79 - B
    // f. 80 to 100 - A
    // Ask user to enter marks and print corresponding grade.

    #include<bits/stdc++.h>
    using namespace std;

    int main(){
        int grade;
        cin >> grade;

        if(grade<25){
            cout << "F";
        }else if(grade <= 44){
            cout << "E";
        }else if(grade <= 49){
            cout << "D";
        }else if(grade <= 59){
            cout << "C";
        }else if(grade <= 79){
            cout << "B";
        }else if(grade <= 100){
            cout << "A";
        }
        return 0;
    }

    // Q3... Take the age from the user and then decide accordingly
    // 1. If age < 18, print -> "not eligible for job"
    // 2. If age >= 18, print -> "eligible for job"
    // 3. If age >= 55 and age <=57, print -> "eligible for job,but retirement soon."
    // 4. If age > 57, print -> "reitrement time"
    // Nested if else
    
    #include<bits/stdc++.h>
    using namespace std;

    int main(){
        int age;
        cin >> age;

        if(age<18){
            cout << "not eligible for job";
        }else if(age<=57){
            cout <<"eligible for job";
            if(age>=55){
                cout <<",but retirement soon ";
            }
        }else{
            cout <<"retirement time";
        }
        return 0;
    }

// // Step 1.1.4 -> Switch Statements
    
    // Take the day no and print the corresponding day 
    // for 1 print monday
    // for 2 print tuesday and so on for 7 print sunday.

    #include<bits/stdc++.h>
    using namespace std;

    int main(){
        int day;
        cin >> day;

        switch(day){
            case 1:
                cout << "Monday";
                break;
            case 2:
                cout << "Tuesday";
                break;
            case 3:
                cout << "Wednesday";
                break;
            case 4:
                cout << "Thursday";
                break;
            case 5:
                cout << "Friday";
                break;
            case 6:
                cout << "Saturday";
                break;
            case 7:
                cout << "Sunday";
                break;
            default:
                cout << "Invalid";
        }
    }



// // Step 1.1.5 -> What are arrays, strings?
    
    #include<bits/stdc++.h>
    using namespace std;

    int main(){
       int arr[5];
       cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
       
       arr[3] = 13;
       cout << arr[3];
       return 0;
    }   

    // 2D array 
    
    #include<bits/stdc++.h>
    using namespace std;

    int main(){
        int arr[3][5];//3 rows, 5 columns
        arr[1][3] = 78;
        cout << arr[1][3] << endl;
    }

    // strings

    #include<bits/stdc++.h>
    using namespace std;

    int main(){
        string s = "Priyanshu";//string is storing character within itself
        int len = s.size();
        cout << s << endl;
        s[len-1] = 'z';
        cout << s[2] << endl;
        cout << s[len - 1]<< endl; // s[8]
        cout << s << endl;
        return 0;
    }

// // Step 1.1.6 -> For loops

    #include<bits/stdc++.h>
    using namespace std;

    int main(){
        
        for(int i=1; i<=10; i++){
            cout<< i << " Priyanshu" << endl;
        }

        return 0;
    }

// // Step 1.1.7 -> While loops
    
    #include<bits/stdc++.h>
    using namespace std;

    int main(){
        int i = 1;
        while(i<=10){
            cout <<i << ".Suryavanshi"<< endl;
            i++;
        }
    }

    // do while

    #include<bits/stdc++.h>
    using namespace std;

    int main(){
        int i = 2;
        do {
            cout << "Priyanshu" << i << endl;
            i++;
        }   while (i<=1);
        cout << i << endl;
        
        return 0;
    }

// // Step 1.1.8 -> Functions/(Pass by Reference and Value)
    
    //Functions are set of code which performs something for you
    //Functions are used to modularise code
    //Functions are used to increase readability
    //Functions are used to use same code multiple times

    //Types of Functions
    //1.void -> which does not returns anything
    //2.return -> 
    //3.parameterised
    //4.non parameterised

    #include<bits/stdc++.h>
    using namespace std;

    void printName(string name){
        cout << " Hey " << name;
    }

    int main(){

        string name;
        cin >> name;
        printName(name);//function call

        string name2;
        cin >> name2;
        printName(name2);

        return 0;
    }

    //Take to numbers and prints its sum

    #include<bits/stdc++.h>
    using namespace std;

    int printSum(int n1,int n2){
        int sum = n1+n2;
        return sum;
    }

    int main(){
        
        int n1,n2;
        cin >> n1 >> n2;

        int res = printSum(n1,n2);
        cout << "Sum: " << res;

        return 0;
    }

// pass by value -> copy goes to function

    #include<bits/stdc++.h>
    using namespace std;

    void doSomething(int num){
        cout << num << endl;
        num += 5;
        cout << num << endl;
        num += 5;
        cout << num << endl;
    }

    int main(){
        int num = 10;
        doSomething(num);

        cout << num << endl;
        return 0;
    }

// pass by reference(&)  -> original address passed

    #include<bits/stdc++.h>
    using namespace std;

    void doSomething(string &s){
        s[0] = 't';
        cout << s << endl;
    }

    int main(){
        string s = "raj";
        doSomething(s);
        cout << s << endl;
        return 0;
    }

// Array always goes with reference 

    #include<bits/stdc++.h>
    using namespace std;

    void doSomething(int arr[], int n){
        arr[0] += 100;
        cout << "Value inside function: "<< arr[0] << endl;
    }

    int main(){
        int n = 5;
        int arr[n];

        for(int i = 0; i<n; i++){
            cin >> arr[i];
        }

        doSomething(arr,n);
        cout << "Value inside int main: " << arr[0] << endl;
        return 0;
    }


// // Step 1.1.9 -> Time & Space Complexity 

    // What is time complexity?
    // TC != time taken, because its depend on system & its configuration.
    // The Rate at which the time taken increases with respect to the input size.

    // TC of any program analysed in temrs of -> Big-Oh Notation ->O(time taken)

    // Big-Oh of below for loop code is number of steps it takes

    // 3 Rules for TC
    // 1. Always compute TC in temrs of worst-case scenario
    // 2. Avoid constants
    // 3. Avoid lower values

    // TC of below code is O(N*3)

    for(i = 1; i<=n; i++){
        cout << "Ram";
    }

    // There are 3 things
    // 1. Best Case -> when the no. of steps is less
    // 2. Average Case -> (best + worst)/2
    // 3. Worst Case -> when the program compute every step, more no. of steps

    if(marks<25) cout << "grade D";
    else if(marks <45) << "grade C";
    else if(marks <65) << "grade B";
    else cout << "grade A";

    // Why compute code in worst case always?
    // because the program is build for more no. of inputs

    // N = 10^15
    // O(4N^3+3N^2+8)
    // is +8 in above eqn makes any difference that is why avoid constants while computing TC
    // adding lower values does not make any differnce so avoid lower values


    // Apart from Big-Oh(O) there is Theta θ, Omega Ω
    
    // Big-Oh(O) -> Worst-Case or Upper-Bound
    // Theta θ -> Average Complexity
    // Omega Ω -> Best-Case or Lower-Bound

    // Q.1 Compute Tc of below code

    for(int i = 0; i<N; i++){
        for(int j = 0; j<N; j++){
            // Block of code
        }
    }

    // Ans.1 -> Big-Oh (N^2) 

    // Q.2 Compute TC of below code 

    for(int i = 0; i<N; i++){
        for(int j = 0; j<=i; j++){
            // Block of code
        }
    }

    // Ans.2 -> Big-Oh(N^2)


    // Space complexity

    // It's the memory space that a program takes
    // Again we use Big-Oh notation for SC
    // SC-> Auxillary space(space that you take to solve the problem) + input space(the space that you take to store the input)

    int a,b;
    cin >> a >> b;
    c = a + b; 
    
    //so here auxillary space is c, it takes extra space
    //a & b is input space
    // combied "c + a & b" is SC = (Auxi..+ Input Size)

    // Most of the server takes 1 second for 10^8 Operations
    