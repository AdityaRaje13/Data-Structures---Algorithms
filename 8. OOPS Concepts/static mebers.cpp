#include<bits/stdc++.h>
using namespace std;

class Man{

    public :

    int age;
    int id;
    int income;

    //Here we creating the static variable named weight
    static int weight;
};

int Man :: weight = 100; //We initialize the value to weight

int main(){

    //We can access the static data member without creating the object

    cout<<"The value of statiic data memeber weigtht is :  "<<Man::weight<<endl;
    
    return 0;
}