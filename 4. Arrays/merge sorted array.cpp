#include<bits/stdc++.h>
using namespace std;

void merge(int arr1[], int m, int arr2[], int n, int ans[]){
    
    int i = 0;
    int j = 0;
    int k = 0;

    while(i < n && j < m){

        if(arr1[i] < arr2[j]){
            ans[k] = arr1[i];
            k++; i++;
        }
        else{
            ans[k] = arr2[j];
            k++; j++;
        }
    }

    while(i < n){
        ans[k] = arr1[i];
        k++; i++;
    }

    while(j < m){
        arr2[k] = arr2[j];
        k++; j++;
    }
}

void printArr(int arr[], int n){

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}

int main () {

    int arr1[5] = {1, 3, 5, 7, 9};
    int arr2[3] = {2, 4, 6};
    
    int ans[8] = {0};

    merge(arr1, 5, arr2, 3, ans);

    printArr(ans, 8);

    return 0;
}