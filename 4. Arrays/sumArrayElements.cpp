#include<bits/stdc++.h>
using namespace std;

int sumArray(int arr[], int size){
    
    int total = 0;

    for(int i = 0; i < size; i++){
        total = total + arr[i];
    }

    return total;  
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
    
    int sum = sumArray(arr, n);

    cout<<"The sum of all array elements is : "<<sum;

    return 0;
}