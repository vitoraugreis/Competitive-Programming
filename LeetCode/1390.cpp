/*
---------------------------------------------------------------
    Daily Question - 01/04/2026
    1390. Four Divisors
---------------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int ans = 0;
        for(int num : nums)
            ans += fourDivisorsCheck(num);
        
        return ans;
    }

    int fourDivisorsCheck(int num) {
        int total = 0;
        int sum = 0;
        int s = floor(sqrt(num));
        for (int i = 1; i<=s; i++) {
            if (num % i == 0) {
                if (i*i == num) total++;
                else {
                    total += 2;
                    sum += num / i;
                }
                sum += i;
            }
            if (total > 4) return 0;
        }
        return (total == 4) ? sum : 0;
    }
};