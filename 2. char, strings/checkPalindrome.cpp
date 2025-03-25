#include<bits/stdc++.h>
using namespace std;

char toLowercase(char ch){

    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool valid(char ch){

    if( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9') ) {
        return 1;
    }
    else{
        return 0;
    }
}

int main(){

    string s = "nO$*  c151coN";
    string newStr = "";

    for(int i = 0; s[i] != '\0'; i++){
        
        if(valid(s[i])){

            char temp = toLowercase(s[i]);
            newStr.push_back(temp);
        }
    }

    int start = 0;
    int end = newStr.length() - 1;

    while( start <= end){

        if(newStr[start] != newStr[end]){

            cout<<"false";
            break;
        }
        else{
            start++;
            end--;
        }
    }

    cout<<"true";
    
}
