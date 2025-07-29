/*
---------------------------------------------------------------
    6. Zigzag Conversion
---------------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) return s;
        string ans = "";
        vector<int> first_idx;
        unordered_set<int> set;
        for (int i = 0; i<s.size(); i++)
            set.insert(i);
        
        int aux = 0;
        while (aux < s.size()) {
            first_idx.push_back(aux);
            aux += (numRows-1) * 2; 
        }
        first_idx.push_back(aux);

        for (int i = 0; i<numRows; i++) {
            for (auto it = first_idx.begin(); it != first_idx.end(); it++) {
                int min = *it - i;
                int max = *it + i;
                if (set.count(min)) {
                    ans += s[min];
                    set.erase(min);
                }
                if (set.count(max)) {
                    ans +=  s[max];
                    set.erase(max);
                }
            }
        }
        
        return ans;
    }
};