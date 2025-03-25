#include<bits/stdc++.h>
using namespace std;

void printArr(int arr[], int n){

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
}

void insertionSort(int arr[], int n){

    for(int i = 1; i < n; i++){

        int temp = arr[i];
        int j;

        for(j = i-1; j >= 0; j--){

            if(arr[j] > temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }

        arr[j+1] = temp;
    }
}

int main () {

    int arr[8] = {8, 5, 2, 7, 1, 4, 6, 3};

    cout<<"Array before sorting"<<endl;
    printArr(arr, 8);

    insertionSort(arr, 8);

    cout<<"Array after sorting"<<endl;
    printArr(arr, 8);

    return 0;
}