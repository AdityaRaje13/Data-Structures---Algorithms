#include<bits/stdc++.h>
using namespace std;

int main(){

    list<int> l;

    //inserting
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);

    for(int i : l){
        cout<<i << " ";
    }
    cout<<endl;

    //copyng list to anothor list
    list<int> n(l);

    cout<<"Copied list n : "<<endl;
    for(int i : n){
        cout<<i << " ";
    }
    cout<<endl;

    //List Size
    cout<<"Size of List : "<< l.size()<<endl;

    //List empty or not
    cout<<"List is empty or not: "<< l.empty()<<endl;

    //List 1st element
    cout<<"First element of List : "<< l.front()<<endl;

    //List last element
    cout<<"Last element of List : "<< l.back()<<endl;


    return 0;
}