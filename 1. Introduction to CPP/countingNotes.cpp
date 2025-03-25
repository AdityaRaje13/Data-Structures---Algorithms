#include<bits/stdc++.h>
using namespace std;

int main() {

    int amount;
    int noteCount = 0;

    cout<<"Enter the amount : ";
    cin>>amount;

    int arr[] = {100, 50, 20, 1};

    for(int i = 0; i < 4; i++){
        if(amount == 0){
            break;
        }
        noteCount = amount/arr[i];
        cout<<"Note of "<<arr[i]<<" Rs is "<<noteCount<<endl;
        noteCount = 0;
        amount = amount % arr[i];
    }
    return 0;
}