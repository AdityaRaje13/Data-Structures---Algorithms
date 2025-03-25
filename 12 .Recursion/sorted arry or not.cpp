#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n){

    if(n == 0 || n == 1){
        return true;
    }

    if(arr[0] > arr[1]){
        return false;
    }
    else{

        bool res = isSorted(arr+1, n-1);
        return res;
    }
}

int main(){
    
    int arr[5] = {1, 2, 3, 4, 5};

    bool ans = isSorted(arr, 5);

    if(ans){
        cout<<"The array is sorted ";
    }
    else{
        cout<<"Th array is not sorted";
    }

    return 0;
}