#include<bits/stdc++.h>
using namespace std;

int main(){

    /*  It stores only unique elements by ignoring duplicate values    */

    set<int> s;

    //Insertion

    s.insert(1);
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(2);
    s.insert(3);
    s.insert(3);
    s.insert(4);
    s.insert(4);
    s.insert(5);

    for(int i : s){
        cout<< i << " "; //Print only unique eleents
    }
    cout<<endl;

    // s.erase(s.begin(), (s.end()));
    // cout<<"after ersae : "<<endl;
    // for(int i : s){
    //     cout<< i << " "; //Print only unique eleents
    // }
    // cout<<endl;


    //Check element is present or not 
    cout<<"5 element present or not : "<< s.count(5)<<endl;



    return 0;
}