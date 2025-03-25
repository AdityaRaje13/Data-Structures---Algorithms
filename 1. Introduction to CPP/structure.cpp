#include<bits/stdc++.h>
using namespace std;

// Each member in a structure has its own memory.

struct employee{
    int id;
    float salary;
    string name;
};

int main(){

    employee e1;

    e1.id = 111;
    e1.salary = 95000.00;
    e1.name = "Aditya Raje";

    cout<<"Id : " << e1.id << endl;
    cout<<"Salary : " << e1.salary << endl;
    cout<<"Name : " << e1.name << endl;
    
    return 0;
}