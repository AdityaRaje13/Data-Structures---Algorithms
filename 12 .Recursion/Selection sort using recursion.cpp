#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n){

    //base case
    if(n == 0 ||n == 1){
        return;
    }

    for(int i = 1; i < n; i++){
        
        if(arr[i] < arr[i-1]){

            swap(arr[i], arr[i-1]);
        }
    }

    //recursive call

    selectionSort(arr+1, n-1);
}


int main(){
    
    int arr[5] = {6,1,4,2,7};

    selectionSort(arr, 5);

    cout<<"Array after Selection sort : ";
    for(int i = 0; i < 5; i++){
        cout<<arr[i]<<" ";
    }
    

    return 0;
}