// STL (Standard Template Library)
// STL - "Compilation of algorithms,containers,
// iterators,functions in a minimized version 
// so that we don't have to wrtie lengthy lines of code"

// #include<bits/stdc++.h> -- have all the library inside this

/* #include<bits/stdc++.h>
using namespace std;

// void function does'nt return anything
void print(){
    cout << "Priyanshu";
}

// return type function
int sum(int a, int b){
    return a+b;
}

int main(){
    print();
    int s = sum(1,5);
    cout << s ;
    return 0;
} */

// C++ STL is Divided into 4 Parts
// 1. Algorithms
// 2. Containers
// 3. Functions
// 4. Iterators 

// Containers

#include<bits/stdc++.h>
using namespace std;

// // Pairs // //

// Pairs is a part of utility library

void explainPair(){
    
    pair<int,int> p = {1,3};
    cout << p.first <<" "<<p.second<< endl;

    pair<int,pair<int,int>> p1 = {1,{3,4}};
    cout << p1.first<<" "<<p1.second.second<<" "<<p1.second.first<<endl;

    pair<int,int> arr[] = {{1,2},{2,5},{5,1}};
    cout << arr[1].second<<" "<<arr[2].first<< endl;

}

// // Vectors // //

// Vector is a container like array but vector is dynamic in nature, like you can increase the size of the vector.

void explainVector(){

    // Declaration of vector

    vector<int> v;
    v.push_back(1);//insert 1 to v
    v.emplace_back(2);//similar to puch_back,faster than push_back, dynamically increase the size of v and insert 2 at back

    vector<pair<int,int>>vec;
    vec.push_back({1,2});
    vec.emplace_back(1,2);

    vector<int> v1(5,100);//size 5 is already defined with 5 times 100 in v1
    vector<int> v2(5);//v2 of 5 size

    vector<int> v3(5,20);//v3 of size 5 and 5 times 20 in v3
    vector<int> v4(v3);//copying v3 into v4
    // you can always increase the size of the vector even if you predefined its size at the declaratiion

    vector<int> v5;
    v5.push_back(20);
    v5.push_back(10);
    v5.push_back(15);
    v5.push_back(6);
    v5.push_back(7);

    // Access element in vector 

    cout << v1[0] << endl;
    cout << v1.at(0) << endl;

    // Access using iterator

    vector<int>::iterator it = v5.begin();
    it++;//v5.begin()++, 20->10
    cout << *(it) <<" ";//it will print 10 = v5[1]
    
    it = it + 2;//shift it by 2 position 
    cout << *(it) <<" ";
    //iterator points to the memory address where the element is lying 

    vector<int>::iterator it1 = v5.end(); // end will not point to last element in vector rather end will point to memory location right after the last element in vector
    cout << v5.back()<< " "<<endl; // points to the last element in vector

    // Print Vector

    // Print vector using iterator
    for(vector<int>::iterator it2 = v5.begin(); it2 != v5.end(); it2++){
        cout << *(it2) << " ";
    }

    // print vector using auto -> auto keyword automatically assign to a vector iterator
    for(auto it2 = v5.begin(); it2 != v.end(); it2++){
        cout << *(it2) << " ";
    }

    // using for each loop
    for(auto it2 : v5){
        cout << it2 << " ";
    }

    // Deletion in vector

    // v5[] = {20,10,15,6,7}
    v5.erase(v5.begin()+1); // delete second element (10) inside a vector

    v5.erase(v5.begin()+1,v5.begin()+3);// {20,6,7} [start,end) here end is not included

    // Insert function
    
    vector<int> v6(2,100); // {100,100}
    v6.insert(v6.begin(),300); // {300,100,100}
    v6.insert(v6.begin()+1,2,10); // {300,10,10,100,100} insert 10 2times 

    vector<int> copy(2,50); //{50,50}
    v5.insert(v5.begin(),copy.begin(),copy.end());//{50,50,20,10,15,6,7}

    // v[] = {34,21,98,57}
    cout << v.size(); // 4

    // v[] = {34,21,98,57}
    v.pop_back(); // {34,21,98} remove the last element

    // v1 -> {10,20}
    // v2 -> {30,40}
    v1.swap(v2); // v1-> {30,40} , v2-> {10,20}

    v.clear(); // erases the entire vector

    cout << v.empty(); // checks if a vector is empty or not

}

int main(){

    explainPair();

    explainVector();



}
