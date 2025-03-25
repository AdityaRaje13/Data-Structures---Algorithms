#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr1[2][5];

    int arr2[2][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 0}}; //Entering data row wise.
    
    /*
    i = row;
    j = column;
    we can also take input vice versa
    */

    cout<<"Enter the array elements : "<<endl;

    for(int i = 0; i < 2; i++){

        for(int j = 0; j < 5; j++){

            cin>>arr1[i][j];
        }
    }

    cout<<"Displaying the First array elements : "<<endl;

    for(int i = 0; i < 2; i++){

        for(int j = 0; j < 5; j++){

            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }


    cout<<"Displaying the Second array elements : "<<endl;

    for(int i = 0; i < 2; i++){

        for(int j = 0; j < 5; j++){

            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}