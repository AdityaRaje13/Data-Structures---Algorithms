#include<bits/stdc++.h>
using namespace std;

// Members of the union share the same memory location.

union student{
    int roll_no;
    float marks;
    char division;
};


int main(){

    student s1;

    s1.roll_no = 111;
    s1.marks = 99.15;
    s1.division = 'A';
    
    cout<< "Roll No : " << s1.roll_no << endl;
    cout<< "Marks : " << s1.marks << endl;
    cout<< "Division : " << s1.division << endl;

    return 0;
}