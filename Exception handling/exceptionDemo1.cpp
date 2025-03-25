#include<bits/stdtr1c++.h>
using namespace std;

int main(){

    try
    {
        int numerator = 10;
        int denominator = 0;

        if(denominator == 0){
            throw runtime_error(
                "Division by zero not allowed"
            );
        }

        int div = numerator/denominator;

        cout<< "Division = "<<div<<endl;
    }
    catch( const exception& e )
    {
        cout<< "Exception ocuured : "<<e.what()<<endl;
    }
    

    return 0;
}
