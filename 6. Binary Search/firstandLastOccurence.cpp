#include<bits/stdc++.h>
using namespace std;

int firstOcc(int arr[], int size, int k){

    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;
    int ans = -1;

    while(start <= end){

        if(arr[mid] == k){
            ans = mid;
            end = mid -1;
        }
        else if(arr[mid] < k){
            start = mid+1;
        }
        else{
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }

    return ans;
}

int lastOcc(int arr[], int size, int k){
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;
    int ans = 0;

    while(start <= end){

        if(arr[mid] == k){
            ans = mid;
            start = mid+1;
        }
        else if(arr[mid] < k){
            start = mid+1;
        }
        else{
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }

    return ans;
}

int main () {

    int Arr[9] = {0,0,1,1,1,1,1,2,2};

    int first = firstOcc(Arr, 9, 1);
    int last = lastOcc(Arr, 9, 1);

    cout<<"1 occurance for first time is : "<<first<<endl;
    cout<<"1 occurance for last time is : "<<last<<endl;

    return 0;
}