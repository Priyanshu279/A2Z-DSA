// STL (Standard Template Library)
// STL - "Compilation of algorithms,containers,
// iterators,functions in a minimized version 
// so that we don't have to wrtie lengthy lines of code"

// #include<bits/stdc++.h> -- have all the library inside this

#include<bits/stdc++.h>
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
} 

// C++ STL is Divided into 4 Parts
// 1. Algorithms
// 2. Containers
// 3. Functions
// 4. Iterators 

// // // CONTAINERS // // //

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

    // Access using ITERATOR

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

// // List // //

// Similar to vector it gives you front operations as well

void explainList(){
    
    list<int> ls;

    ls.push_back(2); // {2}
    ls.emplace_back(4); // {2,4}

    ls.push_front(5); // {5,2,4}
    ls.emplace_front(9); // {9,5,2,4}

    // rest functions same as vector
    // begin, end, clear,insert,size,swap

}

// // Deque // //

void explainDeque(){
    
    deque<int> dq;
    dq.push_back(1); // {1}
    dq.emplace_back(2); // {1,2}
    dq.push_front(4); // {4,1,2}
    dq.emplace_front(3); // {3,4,1,2}

    dq.pop_back(); // {3,4,1}
    dq.pop_front(); // {4,1}

    dq.back();
    dq.front();

    // rest functions same as vector
    // begin, end, clear,insert,size,swap
 
}

// // Stack // //
// Stack if LIFO (Last In First Out)

void explainStack(){

    stack<int> st;
    st.push(1); // {1}
    st.push(2); // {2,1}
    st.push(3); // {3,2,1}
    st.push(3); // {3,3,2,1}
    st.emplace(5); // {5,3,3,2,1}

    cout << st.top(); // prints 5
    st.pop(); // st looks like {3,3,2,1}
    cout << st.top(); // 3
    cout << st.size(); // 4
    cout << st.empty(); // False - 0

    stack<int> st1,st2;
    st1.swap(st2);

    // TC of all stack functions is O(1)
}

// // Queue // //
// Queue is FIFO(First In First Out)

void explainQueue(){
    
    queue<int> q;
    q.push(1); // {1}
    q.push(2); // {1,2}
    q.emplace(4); // {1,2,4}

    q.back() += 5; //adds 5 to last element

    cout << q.back(); // prints 9

    // Q is {1,2,9}
    cout << q.front(); // 1
    q.pop(); // {2,9}

    cout << q.front(); // prints 2
    
    // other functions are same as stack

}

// // Priority Queue // // 
// the guy who have the largest value stays at the top, similar to Queue, also k/a Maximum Heap

void explainPQ(){
    priority_queue<int> pq;
    pq.push(5); // {5}
    pq.push(2); // {5,2}
    pq.push(8); // {8,5,2}
    pq.emplace(10); // {10,8,5,2}

    cout << pq.top(); // prints 10

    pq.pop(); // {8,5,2}
    cout << pq.top(); // prints 8

    // size swap empty functions same as others


    // Minimum Priority Queue also k/a Minimum Heap
    priority_queue<int,vector<int>,greater<int>> pq1;
    pq1.push(5); // {5}
    pq1.push(2); // {2,5}
    pq1.push(8); // {2,5,8}
    pq1.emplace(10); // {2,5,8,10}

    cout << pq1.top(); // prints 2

}

// // Set // //
// Set is container which stores everyting in sorted order and stores unique

void explainSet(){
    
    set<int> st;
    st.insert(1); //{1}
    st.emplace(2); // {1,2}
    st.insert(2); // {1,2}
    st.insert(4); // {1,2,4}
    st.insert(3); // {1,2,3,4}

    // begin(), end(), rbegin(), rend(), size(),
    // empty() and swap() are same as those of above

    // {1,2,3,4,5}
    auto it = st.find(3); // returns iterator that points 3

    auto it = st.find(6); // if element is not there then it returns st.end();

    // {1,4,5}
    st.erase(5); // erases 5 

    int cnt = st.count(1); // gives 1 if it occur in a set else gives 

    // {1,2,3,4,5}
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1,it2); // after erase {1,4,5} [first,last)

    // lower_bound and upper_bound function works in the same way
    // as in vector it does.

    // This is the syntax
    auto it = st.lower_bound(2);
    auto it = st.upper_bound(3);

}

// // MultiSet // //
// Everything is same as set,but it stores everything in sorted order but also stores duplicate

void explainMultiSet(){
    multiset<int> ms;
    ms.insert(1);// {1}
    ms.insert(1);// {1,1}
    ms.insert(1);// {1,1,1}

    ms.erase(1); // all 1's erased

    int cnt = ms.count(1);

    // only a single one erased
    ms.erase(ms.find(1));

    // rest all are same as set

}

// // Unodered Set // //
// Everything is similar to set the only thing is that it not store in sorted order(random order) but stores only unique

void explainUSet(){
    unordered_set<int> st;
    // lower_bound and upper_bound function
    // does not works, rest all functions are same
    // as above, it does not stores in any
    // particular order it has a better complexity
    // than set in most cases, except some when collision happens
}

// // Map // //
// Map is Data Structure which stores data in the form of key value pair
// keys are unique, value can be duplicate but have unique key
// key and value can be have of any data type char,int,string,double ans so on...

void explainMap(){

    map<int,int> mpp1; // <key is int,value is int> 
    map<int,pair<int,int>>mpp2; // <key is int,value is pair of int>
    map<pair<int,int>,int> mpp3; // <key is pair of int, value is int>

    mpp1[1] = 2; // on the key 1 store 2 -> {1,2}
    // mpp1.emplace({3,1});

    mpp1.insert({2,4});// key is 2 which stores value = 4

    // map stores unique keys in a sorted order of key

    mpp3[{2,3}] = 10;// here key is 2,3 and value is 10

    for(auto it:mpp1){
        cout << it.first << " " << it.second << endl;
    }

    cout << mpp1[1]; // it gives the value of key 1 
    cout << mpp1[5]; // if the key is not present then it prints 0 or NULL

    // for upper_bound and lower_bound

    auto it = mpp1.lower_bound(2);
    auto it = mpp1.upper_bound(3);

    // erase, swap, size, empty, are same as above

}

// // MultiMap // // 

void explainMultiMap(){
    // everything same as map, only it can store multiple duplicate keys in sorted order
    // only mpp[key] cannot be used here
}

// // UnorderedMap // //

void explainUnorderedMap(){
    // it have unique keys but not in sorted order
}



// // // ALGORITHMS // // //

void explainAlgo(){

    sort(a,a+n); //for arrays -> a[n] = {1,5,3,2} [start,end) end is not included
    
    sort(v.begin(),v.end()); // for vectors

    sort(a+2,a+4); // sort some portion
    
    sort(a,a+n, greater<int>); // for sorting in decreasing order

    pair<int,int> a[] = {{1,2},{2,1},{4,1}};

    // sort it according to second element
    // if second element is same, then sort
    // it according to first element but in descending

    sort(a,a+n,comp); // self written comprator function for sorting according to our need
    // {4,1}, {2,1}, {1,2}


    int num = 7;
    int cnt = __builtin_popcount(num);// it gives how many set(1) bits are there 3 in this case because binary of 7 is 000000111

    long long num = 165786578687;
    int cnt = __builtin_popcountll(num);

    string s = "123";
    
    do{
        cout << s << endl;
    }while(next_permutation(s.begin(),s.end()));

    int maxi = *max_element(a,a+n); // it gives maximum element in the array
    int mini = *mini_element(a,a+n); // it gives minimum element in the array

}

int main(){

    // Containers // 

    explainPair();

    explainVector();

    explainList();

    explainDeque();

    explainStack();

    explainPQ();

    explainSet();

    explainMultiSet();

    explainUSet();

    explainMap();

    explainMultiMap();

    explainUnorderedMap();

    
    // Algorithms // 

    explainAlgo();

}
