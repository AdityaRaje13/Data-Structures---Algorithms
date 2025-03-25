#include<bits/stdc++.h>
using namespace std;

void printArr(int arr[], int n){

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
}

void bubbleSort(int arr[], int n){

    for(int i = 1; i < n; i++){

        bool swapped = false;

        for(int j = 0; j < n-i; j++){

            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }

        if(swapped == false){
            break;
        }
    }
}

int main () {

    int arr[8] = {8, 5, 2, 7, 1, 4, 6, 3};

    cout<<"Array before sorting"<<endl;
    printArr(arr, 8);

    bubbleSort(arr, 8);

    cout<<"Array after sorting"<<endl;
    printArr(arr, 8);

    return 0;
}