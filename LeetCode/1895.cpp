/*
---------------------------------------------------------------
    Daily Question - 01/18/2026
    1895. Largest Magic Square
---------------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool verifyMagicSquare(vector<vector<int>>& grid, int i, int j, int d) {
        int value = 0;
        for (int k = j; k<j+d; k++) value += grid[i][k];

        // Linhas
        int check;
        for (int k = i; k<i+d; k++) {
            check = 0;
            for (int l = j; l<j+d; l++)
                check += grid[k][l];
            if (check != value) 
                return false;
        }

        // Colunas
        for (int l = j; l<j+d; l++) {
            check = 0;
            for (int k = i; k<i+d; k++)
                check += grid[k][l];
            if (check != value) 
                return false;
        }

        // Diagonais
        check = 0;
        for (int k = 0; k<d; k++)
            check += grid[i+k][j+k];
        if (check != value) return false;
        
        check = 0;
        for (int k = 0; k<d; k++)
            check += grid[i+k][j+d-k-1];
        if (check != value) 
            return false;

        return true;
    }

    int largestMagicSquare(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int dimension = min(n, m);

        while (dimension > 1) {
            for (int i = 0; i<=n-dimension; i++) {
                for (int j = 0; j<=m-dimension; j++) {
                    if (verifyMagicSquare(grid, i, j, dimension))
                        return dimension;
                }
            }
            dimension--;
        }
        return 1;
    }
};