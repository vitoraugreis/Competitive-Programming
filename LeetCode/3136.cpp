/*
---------------------------------------------------------------
    Daily Question - 07/15/2025
    3136. Valid Word
---------------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string word) {
        if (word.length() < 3) return false;
        bool vowel = false;
        bool consoant = false;

        for (char c : word) {
            c = tolower(c);
            if (isalpha(c)) {
                if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                    vowel = true;
                else
                    consoant = true;
            } else if (isdigit(c)) {
                continue;
            } else {
                return false;
            }
        }
        
        return vowel && consoant;
    }
};