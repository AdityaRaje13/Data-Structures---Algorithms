#include<bits/stdtr1c++.h>
using namespace std;

int main(){

    try
    {
        int num = 29;
        char c = 's';

        // throw num;

        throw c;
        
    }
    catch(int num)
    {
        cout<< " Exception for Integer : "<< num <<endl;
    }

    catch(char c)
    {
        cout<< " Exception for Char : "<< c <<endl;
    }

    return 0;
}
