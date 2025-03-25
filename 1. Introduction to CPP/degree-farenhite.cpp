#include<bits/stdc++.h>
using namespace std;

int main(){

    float degree;
    float fr;

    cout<<"Enter the degree temperature to convert in F : ";
    cin>> degree;

    fr = {(degree * 9/5)+ 32};

    cout<<degree<<" degree is eqaul to : "<<fr<<" Farenhite";

    return 0;
}