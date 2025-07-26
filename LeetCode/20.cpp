/*
---------------------------------------------------------------
    20. Valid Parentheses
---------------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> p;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') p.push(c);
            else if (!p.empty()) {
                if (c == ')' && p.top() == '(') p.pop();
                else if (c == ']' && p.top() == '[') p.pop();
                else if (c == '}' && p.top() == '{') p.pop();
                else return false;
            }
            else return false;
         }
        return p.empty();
    }
};