#include<bits/stdc++.h>
using namespace std;

void printArr(int arr[], int size){

    for(int i = 0; i < size; i++){

        cout<<arr[i]<<" ";
    }
}

int main () {

    int n;
    cout<<"Enter size of the array : ";
    cin>>n;
    cout<<endl;
    int arr[n];

    cout<<"Enter the array elements : "<<endl;

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    cout<<endl;
    printArr(arr, n);

    return 0;
}