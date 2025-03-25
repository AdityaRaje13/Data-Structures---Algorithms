#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int x = 10;  // Normal variable

    int *ptr = &x; // Pointer variable

    int &ref = x; // Reference variable

    x /= 2;

    cout<<"x = "<< x << endl;

    cout <<"ptr = "<< ptr<<endl;

    cout <<"*ptr = "<< *ptr << endl;
    
    cout <<"ref = "<< ref << endl;


    return 0;
}