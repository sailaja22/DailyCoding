//Better Approach

/* 
#include <bits/stdc++.h>
using namespace std;

void markRow(vector<vector<int>> &matrix, int n, int m, int i) {
    for (int j = 0; j < m; j++) {
        if (matrix[i][j] != 0) {
            matrix[i][j] = -1;
        }
    }
}


void markCol(vector<vector<int>> &matrix, int n, int m, int j) {

    for (int i = 0; i < n; i++) {
        if (matrix[i][j] != 0) {
            matrix[i][j] = -1;
        }
    }
}

vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == 0) {
                markRow(matrix, n, m, i);
                markCol(matrix, n, m, j);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == -1) {
                matrix[i][j] = 0;
            }
        }
    }

    return matrix;
}

int main()
{
    vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>> ans = zeroMatrix(matrix, n, m);

    cout << "The Final matrix is: n";
    for (auto it : ans) {
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout << "n";
    }
    return 0;
} */

/****************************************************/

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        long long int n= matrix.size();
        long long int m= matrix[0].size();
        int cols=1;

        for(int l=0; l<n; l++){
            if(matrix[l][0]==0) cols=0;
            for(int k=1; k<m; k++){
                if(matrix[l][k]==0){
                    matrix[l][0]=0;
                    matrix[0][k]=0;
                }
            }
        }

        
        for (int i = n - 1; i >= 0; i--) {
          for (int j = m - 1; j >= 1; j--) {
               if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                   matrix[i][j] = 0;
               }
            }
               if (cols == 0) {
               matrix[i][0] = 0;
            }
        }
        
    }
};
