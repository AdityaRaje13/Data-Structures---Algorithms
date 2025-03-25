#include<bits/stdc++.h>
using namespace std;

int main () {

    int a,b;
    char operation;

    cout<<"Enter the value of a : ";
    cin>>a;

    cout<<"Enter the value of b : ";
    cin>>b;

    cout<<"Enter the operation you want to perform : ";
    cin>>operation;
    cout<<endl;

    switch( operation ){

        case '+':{
            cout<<"you choose Addition"<<endl;
            cout<<"The addition of "<<a<<" and "<<b<<" is "<<(a + b)<<endl;
            break;
        }

        case '-':{
            cout<<"you choose Substraction"<<endl;
            cout<<"The substraction of "<<a<<" and "<<b<<" is "<<(a - b)<<endl;
            break;
        }

        case '*':{
            cout<<"you choose Multipilcation"<<endl;
            cout<<"The multipilcation of "<<a<<" and "<<b<<" is "<<(a * b)<<endl;
            break;
        }

        case '/':{
            cout<<"you choose Division"<<endl;
            cout<<"The Division of "<<a<<" and "<<b<<" is "<<(a / b)<<endl;
            break;
        }

        case '%':{
            cout<<"you choose Mod"<<endl;
            cout<<"The mod of "<<a<<" and "<<b<<" is "<<(a % b)<<endl;
            break;
        }

        default:{
            cout<<"Please enter valid inputs";
            break;
        }
    }

    return 0;
}