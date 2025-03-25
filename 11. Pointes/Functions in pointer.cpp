#include<bits/stdc++.h>
using namespace std;

//By passing the pointer in function we can change the original value of variable.
//This is called as the argument pass by reference.
//Copy is not created of variable, it direct change the original value. 

void update(int *p){

    *p = *p + 10;
}

int updatePointerValue(int num){

    num = num * 2;
    return num;
}

int main(){
    
    int value = 10;

    int *ptr = &value;

    cout<<"Value before = "<<value<<endl;

    update(ptr);

    cout<<"Value after 1st update = "<<value<<endl;

    update(ptr);

    cout<<"Value after 2nd update = "<<value<<endl;

    update(ptr);

    cout<<"Value after 3rd update = "<<value<<endl;

    //Now we are pass the argument as *ptr

    int res = updatePointerValue(*ptr);

    cout<<"By passing the value of pointer Not adress : "<<res<<endl;

    return 0;
}