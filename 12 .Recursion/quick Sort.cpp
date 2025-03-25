#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int s, int e){

    int pivot = arr[s];

    // Getting count that how many numbers are smaller than pivot

    int count = 0;
    for(int i = s+1; i <= e; i++ ){

        if(arr[i] < pivot){
            count++;
        }
    }

    //placing pivot at right position

    int pivotIdx = s + count;
    swap(arr[s], arr[pivotIdx]);

    //adjusting left and right part

    int i = s, j = e;
    while(i < pivotIdx && j > pivotIdx){

        while(arr[i] < pivot){
            i++;
        }

        while(arr[j] > pivot){
            j--;
        }

        if(i < pivotIdx && j > pivotIdx){
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIdx;
}

void quickSort(int arr[], int s, int e){

    //base case

    if(s >= e){
        return;
    }

    //partition

    int p = partition(arr, s, e);

    //left part
    quickSort(arr, s, p-1);

    //right part 
    quickSort(arr, p+1, e);
}

int main(){
    
    int arr[8] = {6, 6, -6, -2, -4, -6, 2, -6 };
    int n = 8;

    quickSort(arr, 0, n-1);

    cout<<"After quick sort : ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    

    return 0;
}


/*
//Steps : 

1. take 1st element as pivot and put it on its right place

2. all other small elements on left and big elemnts on right side of pivot

3. recursive call of quick sort

*/
