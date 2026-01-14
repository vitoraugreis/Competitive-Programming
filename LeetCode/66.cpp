/*
---------------------------------------------------------------
    Daily Question - 01/01/2026
    66. Plus One
---------------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int i = n-1;
        digits[i]++;

        while(digits[i] == 10 && i != 0) {
            digits[i] = 0;
            i--;
            digits[i]++;
        }

        if (digits[0] == 10) {
            digits[0] = 0;
            vector<int> aux(n+1);
            aux[0] = 1;

            for (int i = 1; i<n+1; i++)
                aux[i]= digits[i-1];
        
            digits = aux;
        }
        
        return digits;
    }
};