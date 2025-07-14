/*
---------------------------------------------------------------
    Daily Question - 07/14/2025
    1290 - Convert Binary Number in a Linked List to Integer
---------------------------------------------------------------
*/

 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int decimal = 0;
        while (head) {
            decimal = (decimal << 1) | head->val;
            head = head->next;
        }
        return decimal;
    }
};