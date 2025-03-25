#include<bits/stdc++.h>
using namespace std;

int main(){

    /* Stored value in the format key and value  */

    map <int, string> m;

    //insertion
    m[1] = "aditya";
    m[2] = "Dhananjay";
    m[13] = "raje";

    m.insert({4, "kumbhar"});

    //print
    //It alway print in sorted way

    for(auto i : m){
        cout<< i.first<<" = "<<i.second<<endl;
    }
    cout<<endl;


    return 0;
}