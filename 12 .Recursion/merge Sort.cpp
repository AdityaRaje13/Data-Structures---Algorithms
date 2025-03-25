#include<bits/stdc++.h>
using namespace std;

void merge(int *arr, int s, int e){

    int mid = (s+e)/2;

    //Taking length of both parts

    int leftLen = (mid - s + 1);
    int rightLen = (e - mid);

    //creating two new arrays

    int *first = new int[leftLen];
    int *second = new int[rightLen];

    //Copying values
    int mainArrayIndex = s;
    for(int i = 0; i < leftLen; i++){
        first[i] == arr[mainArrayIndex++];
    }

    mainArrayIndex = mid + 1;
    for(int i = 0; i < rightLen; i++){
        second[i] = arr[mainArrayIndex++];
    }

    //Merging this two arrays 

    int idx1 = 0;
    int idx2 = 0;
    mainArrayIndex = s;

    while(idx1 < leftLen && idx2 < rightLen){

        if(first[idx1] < second[idx2]){
            arr[mainArrayIndex++] = first[idx1++];
        }
        else{
            arr[mainArrayIndex++] = second[idx2++];
        }
    }

    while(idx1 < leftLen){
        arr[mainArrayIndex++] = first[idx1++];
    }

    while(idx2 < rightLen){
        arr[mainArrayIndex++] = second[idx2++];
    }

    delete []first;
    delete []second;
}

void mergeSort(int *arr, int s, int e){

    //base case
    if(s >= e){
        return;
    }

    int mid = (s+e)/2;

    //left part sort
    mergeSort(arr, s, mid);

    //right part sort
    mergeSort(arr, mid+1, e);

    //merge two sorted arrays
    merge(arr, s, e);
}


int main(){
    
    int arr[5] = {6,1,4,2,7};
    int n = 5;

    mergeSort(arr, 0, n-1);

    cout<<"Array after Selection sort : ";
    for(int i = 0; i < 5; i++){
        cout<<arr[i]<<" ";
    }  

    return 0;
}