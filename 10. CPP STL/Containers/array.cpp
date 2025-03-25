#include<bits/stdc++.h>
using namespace std;

int main(){

    array<int, 4> a = {1, 2, 3, 4};

    //Array Size
    cout<<"Size of array : "<< a.size()<<endl;

    //Array index element
    cout<<"element at 2nd index : "<< a.at(2)<<endl;

    //Array empty or not
    cout<<"Array is empty or not: "<< a.empty()<<endl;

    //Array 1st element
    cout<<"First element of array : "<< a.front()<<endl;

    //Array last element
    cout<<"Last element of array : "<< a.back()<<endl;


    return 0;
}