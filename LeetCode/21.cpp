/*
---------------------------------------------------------------
    21. Merge Two Sorted Lists
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (!list1 && !list2) return nullptr;

        ListNode* ordened_list = new ListNode();
        ListNode* aux = ordened_list;

        while (list1 || list2) {
            if (list1 && list2) {
                if (list1->val <= list2->val) {
                    aux->val = list1->val;
                    list1 = list1->next;
                } else {
                    aux->val = list2->val;
                    list2 = list2->next;
                }
                aux->next = new ListNode();
                aux = aux->next;
            } else if (list1) {
                aux->val = list1->val;
                list1 = list1->next;
                if (!list1) continue;
                aux->next = new ListNode();
                aux = aux->next;
            } else if (list2){
                aux->val = list2->val;
                list2 = list2->next;
                if (!list2) continue;
                aux->next = new ListNode();
                aux = aux->next;
            }
        }
        return ordened_list;
    }
};

/*
Solução recursiva:

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (!list1 && !list2) return nullptr;

        if (list1 && list2) {
            if (list1->val <= list2->val)
                return new ListNode(list1->val, mergeTwoLists(list1->next, list2));
            else
                return new ListNode(list2->val, mergeTwoLists(list2->next, list1));
        }

        if (list1) return new ListNode(list1->val, mergeTwoLists(list1->next, list2));

        return new ListNode(list2->val, mergeTwoLists(list2->next, list1));
    }
};

*/