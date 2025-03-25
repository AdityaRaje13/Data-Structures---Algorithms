#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<vector<int>> matrix = {{1,2,3}, {4,5,6}, {7,8,9}};

        vector<int> temp;
        int row = matrix.size();
        int col = matrix[0].size();


        for(int i = 0; i < col; i++){

            for(int j = row-1; j >=0; j--){

                temp.push_back(matrix[j][i]);
            }
        }

        for(int k = 0; k < temp.size(); k++){

            cout<<temp[k]<<" ";
        }

        cout<<endl;
        
        int k = 0;
        for(int i = 0; i < row; i++){

            for(int j = 0; j < col; j++){

                matrix[i][j] = temp[k];
                k++;
            }
        }
        

        for(int i = 0; i < row; i++){

            for(int j = 0; j < col; j++){

                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
        
    
    return 0;
}