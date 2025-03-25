#include<bits/stdc++.h>
using namespace std;

int sumElements(int arr[], int n){

    if(n == 0){
        return 0;
    }

    if(n == 1){
        return arr[0];
    }

    int remaining = sumElements(arr+1, n-1);
    int sum = arr[0] + remaining;
    
    return sum;
}


int main(){
    
    int arr[5] = {1, 2, 3, 4, 5};

    int total = sumElements(arr, 5);

    cout<<"The sum of all elements in array is : "<<total <<endl;

    return 0;
}