#include<bits/stdc++.h>
using namespace std;

int GCD(int a, int b){

    if(a == 0){
        return b;
    }

    if(b == 0){
        return a;
    }

    while(a != b){

        if(a > b){
            a = a - b;
        }
        else{
            b = b - a;
        }
    }

    return a;
}

int main() {

    int a, b;

    cout<<"Enter two numbers to find out the GCD : "<<endl;
    cin>>a>>b;

    int ans = GCD(a, b);

    cout<<"The GCD of "<<a<<" and "<<b<<" is "<<ans;
    return 0;
}