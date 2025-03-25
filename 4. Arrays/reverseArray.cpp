#include<bits/stdc++.h>
using namespace std;

void reverseArr(int arr[], int size){

    int start = 0;
    int end = size - 1;
    int x;

    while(start <= end){

        x = arr[start];
        arr[start] = arr[end];
        arr[end] = x;

        start++;
        end--;
    }
}

void printArr(int arr[], int n){
    cout<<"After reversing : "<<endl;
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}

int main () {

    int arr[6] = {10, 20, 30, 40, 50, 60};
    cout<<endl;

    cout<<"original array : "<<endl;
     for(int i = 0; i < 6; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    reverseArr(arr, 6);

    printArr(arr, 6);

    return 0;
}