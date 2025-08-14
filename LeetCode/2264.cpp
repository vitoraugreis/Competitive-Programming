/*
---------------------------------------------------------------
    Daily Question - 08/14/2025
    2264. Largest 3-Same-Digit Number in String
---------------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string largestGoodInteger(string num) {
        string ans = "0";
        string aux = "";

        for (char c : num) {
            if (aux == "" || aux[0] != c) aux = c;
            else aux += c;
            
            if (aux.length() == 3)
                ans = (stol(aux) >= stol(ans)) ? aux : ans;
        }

        return (ans == "0") ? "" : ans;
    }
};