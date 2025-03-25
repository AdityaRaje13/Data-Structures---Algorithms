#include<bits/stdc++.h>
using namespace std;

bool linearSearch(int arr[], int size, int key){

    for(int i = 0; i < size; i++){

        if(arr[i] == key){
            return true;
        }
    }

    return false;
}

int main () {

    int arr[5] = {10, 20, 30, 40, 50};
    int key;
    cout<<"Enter the key to search in array : ";
    cin>>key;
    cout<<endl;

    bool found = linearSearch(arr, 5, key);
    
    if( found ){
        cout<<"Key is present in the array";
    }
    else{
        cout<<"Key is not present in the array";
    }


    return 0;
}