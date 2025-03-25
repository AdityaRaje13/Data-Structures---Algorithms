#include<bits/stdc++.h>
using namespace std;

void printArr(int arr[], int n){

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
}

void selctionSort(int arr[], int n){

    for(int i = 0; i < n-1; i++){

        int minIdx = i;

        for(int j = i+1; j < n; j++){

            if(arr[j] < arr[minIdx]){
                minIdx = j;
            }
        }

        swap(arr[i], arr[minIdx]);
    }
}

int main () {

    int arr[8] = {8, 5, 2, 7, 1, 4, 6, 3};

    cout<<"Array before sorting"<<endl;
    printArr(arr, 8);

    selctionSort(arr, 8);

    cout<<"Array after sorting"<<endl;
    printArr(arr, 8);

    return 0;
}