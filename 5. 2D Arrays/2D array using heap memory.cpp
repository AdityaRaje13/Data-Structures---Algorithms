#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    
    //creating 2D array in heap memory

    int** arr = new int* [n];

    for(int i = 0; i < n; i++){

        arr[i] = new int[n];
    }

    //Entering the values in array
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){

            cin>>arr[i][j];
        }
    }

    //Printing the 2D array 
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){

            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //Releasing the memory
    for(int i = 0; i < n; i++){

        delete []arr[i];
    }

    delete []arr;


    return 0;
}