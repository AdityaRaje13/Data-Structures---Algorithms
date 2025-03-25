#include<bits/stdc++.h>
using namespace std;

void printArr(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}

void swapAlternate(int arr[], int size){

    int x;

    for(int i = 0; i <= size; i+=2){

        if(i+1 < size){
            x = arr[i];
            arr[i] = arr[i +1];
            arr[i+1] = x;
        }
    }
}

int main () {

    int arr[6] = {10, 20, 30, 40, 50, 60};

    cout<<"Before swapping the array : "<<endl;
    printArr(arr, 6);

    cout<<"After swaping the alternate elements : "<<endl;
    swapAlternate(arr, 6);
    printArr(arr, 6);

    return 0;
}