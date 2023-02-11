#include <bits/stdc++.h>
using namespace std;

int main() {
    
    unordered_set<int> b ; 
    //inserting numbers in the unordered set
    b.insert(2);
    b.insert(5);
    b.insert(5);//inserting 5 double time will have no effect
    
    //set looks like this : {2,5}
    
    //checks if "2" exists in the set or not
    if(b.find(2)!=b.end()){
        cout<<"Found";
    }
    else
    {
        cout<<"Not found";
    }
    cout<<endl;
    set<int> g; 
    
    //inserting numbers in the set
    g.insert(2);
    g.insert(5);
    g.insert(5);//inserting 5 double time will have no effect
    
    //set looks like this : {2,5}
    
    //checks if "2" exists in the set or not
    if(g.find(2)!=g.end()){
        cout<<"Found";
    }
    else
    {
        cout<<"Not found";
    }
    cout<<endl;
   // ------------------
    
    unordered_map <int,int> d ; 
    //inserting numbers in the map with their frequencies 
    d[2] = 1 ;
    d[5] = 2 ;
    
    //map looks like this : 
  /*  
    Key   Value
    2-->  1
    
    5-->  2
    */
    //checks if "2" as key exists in the map or not
    if(d.find(2)!=d.end()){
        cout<<"Found";
    }
    else
    {
        cout<<"Not found";
    }
    cout<<endl;
    
    //check the frequency of key "5"
    cout<<d[5];
    cout<<endl;
    
    
    map <int,int> kk ; 
    //inserting numbers in the map with their frequencies 
    kk[2] = 1 ;
    kk[5] = 2 ;
    
    //map looks like this : 
  /*  
    Key   Value
    2-->  1
    
    5-->  2
    */
    //checks if "2" as key exists in the map or not
    if(kk.find(2)!=kk.end()){
        cout<<"Found";
    }
    else
    {
        cout<<"Not found";
    }
    cout<<endl;
    
    //check the frequency of key "5"
    cout<<kk[5];
    cout<<endl;
   

}
