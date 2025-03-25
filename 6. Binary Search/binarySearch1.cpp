#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int key){

    int start = 0;
    int end = size-1;

    int mid = start + (end-start)/2;

    while(start <= end){

        if(arr[mid] == key){
            return mid;
        }
        else if(key > arr[mid]){ //Then go to second part
            start = mid + 1;
        }
        else{
            end = mid -1;
        }

        mid = start + (end - start)/2; 
    }

    //If key not found -
    return -1;
}

int main () {

    int evenArr[8] = {2, 4, 7, 12, 15, 18, 20, 26};
    int oddArr[7] = {1, 5, 9, 14, 25, 34, 67};

    int evenIdx = binarySearch(evenArr, 8, 20);
    cout<<"The 20 present at Index in Even Array : "<<evenIdx<<endl;

    int oddIdx = binarySearch(oddArr, 7, 67);
    cout<<"The 67 present at Index in Odd Array : "<<oddIdx<<endl;

    return 0;
}