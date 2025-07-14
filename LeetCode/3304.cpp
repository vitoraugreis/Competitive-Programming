/*
---------------------------------------------------------------
    Daily Question - 07/03/2025
    3304. Find the K-th Character in String Game I
---------------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    char kthCharacter(int k) {
        vector<char> s(k);
        s[0] = 'a';
        for (int i = 1; i<k; i*=2) {
            for (int j = 0; j<i; j++) {
                if (j+i >= k) break;
                s[j+i] = char(((int(s[j]) - 96) % 26) + 97);
            }
        }
       return s[k-1];
    }
};