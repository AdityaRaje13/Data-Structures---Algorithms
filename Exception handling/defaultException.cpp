#include<bits/stdc++.h>
using namespace std;

int main(){

    try
    {
        int size = 5;
        int arr[size] = {10, 20, 30, 40, 50};

        int position = 6;

        if(position >= 5){
            throw runtime_error(
                "Array index is out of boundry"
            );
        }

        cout<< arr[position] << endl;
    }
    catch(const exception& e)
    {
        cout<< e.what() <<endl;
    }
    

    return 0;
}