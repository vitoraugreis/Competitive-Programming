/*
---------------------------------------------------------------
    2. Add Two Numbers
---------------------------------------------------------------
*/

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode();
        ListNode* aux = ans;
        int carry = 0;

        while (l1 || l2 || carry) {
            int n1 = 0;
            int n2 = 0;
            if (l1) {
                n1 = l1->val;
                l1 = l1->next;
            }
            if (l2) {
                n2 = l2->val;
                l2 = l2->next;
            }
            int val = n1 + n2 + carry;
            carry = val / 10;
            aux->val = val % 10;
            if (l1 || l2 || carry) {
                aux->next = new ListNode();
                aux = aux->next;
            }
        }

        return ans;
    }
};