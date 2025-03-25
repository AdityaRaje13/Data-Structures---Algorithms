#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90 ,100};

    int *ptr = arr; // Stored 1 st block adress int ptr

    //Display array using the ptr pointer

    for(int i = 0; i < 10; i++){

        cout<<*(ptr + i)<<" ";
    }


    return 0;
}