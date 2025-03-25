#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90 ,100};

    cout<<"Adress of first index : "<< arr <<endl;

    cout<<"Adress of first index : "<< &arr[0] <<endl; //Alternate mrthod

    cout<<"Adress of Third index : "<< &arr[2] <<endl;
    //One int has 4 bytes memory, hence every adrees has difference of 4

    cout<<endl;

    //De referencing

    cout<<"Value of first index : "<< *arr <<endl;

    cout<<"Value of first index : "<< *arr + 1 <<endl;

    cout<<"Value of first index : "<< *(arr + 1) <<endl;

    //Value at 4 index
    cout<<"Value of first index : "<< *(arr + 4) <<endl;

    //Use of brackets
    cout<<"Value of first index : "<< (*arr) + 4 <<endl;


    return 0;
}