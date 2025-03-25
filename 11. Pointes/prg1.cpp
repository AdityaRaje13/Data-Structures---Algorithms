#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int a = 5;
    int *ptr = &a;
    cout<<"The adress of a is : "<<ptr<<endl;
    cout<<"The value of a is : "<<*ptr<<endl;

    cout<<endl;

    int b = 5;
    int *p = 0;   //Do not initialise only pointer like int *ptr;
    p = &b;  //Dont use the *p for assigning the adress
    cout<<"The adress of b is : "<<p<<endl;
    cout<<"The value of b is : "<<*p<<endl;

    cout<<endl;

    int m = 10, n = 20;

    int *mP = &m;
    int *nP = &n;

    cout<<"Addition using pointer : "<< *mP + *nP<<endl;
    cout<<"Substration using pointer : "<< *nP - *mP<<endl;
    cout<<"Multiplition using pointer : "<< *mP * *nP<<endl;
    cout<<"Division using pointer : "<< *nP / *mP<<endl;


    cout<<endl;

    //Changing the original variable using pointer 

    int x = 10;
    int *xP = &x;

    cout<<"Value before x : "<<x<<endl;

    *xP = *xP + 2;  //Here we are not changing the x, We changing its pointer

    cout<<"Value after x : "<<x<<endl; //value of x is also changed



    return 0;
}