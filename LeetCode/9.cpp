/*
---------------------------------------------------------------
    9. Palindrome Number
---------------------------------------------------------------
*/

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        int aux = x;
        long reverse = 0;

        while (aux > 0) {
            reverse = reverse * 10 + aux % 10;
            aux /= 10;
        }

        if (reverse == x) return true;
        return false;
    }
};