#include<bits/stdc++.h>
using namespace std;

int main(){

    stack<string> s;

    //insertion 
    s.push("aditya");
    s.push("Dhananjay");
    s.push("Raje");


    //Stack Size
    cout<<"Size of Stack : "<< s.size()<<endl;

    //Stack empty or not
    cout<<"Stack is empty or not: "<< s.empty()<<endl;

    //Stack 1st element
    cout<<"Top element of Stack : "<< s.top()<<endl;


    return 0;
}