#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int i = 5;

    int* p = &i;

    int** p2 = &p;

    //value of i
    cout<<"value of i = "<< i <<endl;
    cout<<"value of i = "<< *p <<endl;
    cout<<"value of i = "<< **p2 <<endl;

    cout<<endl;

    //Address of i 
    cout<<"Adress of i = "<< &i <<endl;
    cout<<"Adress of i = "<< p <<endl;
    cout<<"Adress of i = "<< *p2 <<endl;

    cout<<endl;

    //Address of p
    cout<<"Adress of p = "<< &p <<endl;
    cout<<"Adress of p = "<< p2 <<endl;

    cout<<endl;
    

    return 0;
}