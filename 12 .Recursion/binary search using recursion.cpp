#include<bits/stdc++.h>
using namespace std;

bool binarySearch(int arr[], int s, int e, int k){

    //base case : Element nopt found
    if(s > e){
        return false;
    }

    int mid = s + (e-s)/2;

    //elment found
    if(arr[mid] == k){
        return true;
    }
    
    if(arr[mid] > k){
        return binarySearch(arr, 0, mid-1, k);
    }
    else{
        return binarySearch(arr, mid+1, e, k);
    }
}


int main(){
    
    int arr[5] = {1, 2, 3, 4, 5};
    int key;

    cout<<"Enter Key to search : ";
    cin>>key;

    bool res = binarySearch(arr, 0, 5, key);

    if(res){
        cout<<key<<" is present in the array."<<endl;
    }
    else{
        cout<<key<<" is not present in the array."<<endl;
    }
    
    return 0;
}