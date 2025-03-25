#include<iostream>
using namespace std;

int main() {

    int a = 123;
    cout<< a <<endl;

    char ch1 = 'a';
    cout<< ch1 <<endl;

    bool b1 = false;
    cout<< b1 <<endl;

    float f1 = 1.2;
    cout<< f1 <<endl;

    double d1 = 1.2345;
    cout<< d1 <<endl;

    cout<<"----------------------------------"<<endl;

    cout<<"Size of int : "<<sizeof(a)<<endl;
    cout<<"Size of char1 : "<<sizeof(ch1)<<endl;
    cout<<"Size of bool : "<<sizeof(b1)<<endl;
    cout<<"Size of float : "<<sizeof(f1)<<endl;
    cout<<"Size of double : "<<sizeof(d1)<<endl;
    

   int m = 'a';
   cout<< m <<endl;

   char ch = 98;
   cout<< ch <<endl;

   char c = 123456;
   cout<< c <<endl;
   

   unsigned int n = 111;    //Only store positive numbers
   cout<< n <<endl;

}