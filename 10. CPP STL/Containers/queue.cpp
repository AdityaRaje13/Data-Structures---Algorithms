#include<bits/stdc++.h>
using namespace std;

int main(){

    queue<string> q;

    //insertion 
    q.push("aditya");
    q.push("Dhananjay");
    q.push("Raje");


    //Queue Size
    cout<<"Size of Queue : "<< q.size()<<endl;

    //Queue empty or not
    cout<<"Queue is empty or not: "<< q.empty()<<endl;

    //Queue 1st element
    cout<<"First element of Queue : "<< q.front()<<endl;

    //Queue last element
    cout<<"Last element of Queue : "<< q.back()<<endl;

    //Remove element
    q.pop();
    cout<<"after remove"<<endl;
    cout<<"First element of Queue : "<< q.front()<<endl;


    return 0;
}