#include<bits/stdc++.h>
using namespace std;

int largest(int arr[], int n) {
    
    int max=INT_MIN;
    
    for(int i = 0; i < n; i++){
        
        if(arr[i] > max){
            max = arr[i];
        }
    }
    
    return max;
}

int smallest(int arr[], int n) {
   
    int min= INT_MAX;
    
    for(int i = 0; i < n; i++){
        
        if(arr[i] < min){
            min = arr[i];
        }
    }
    
    return min;
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
    int large = largest(arr, n);
    int small = smallest(arr, n);

    cout<<"Largest number in array is : "<< large<<endl;
    cout<<"smallest number in array is : "<< small<<endl;

    return 0;
}