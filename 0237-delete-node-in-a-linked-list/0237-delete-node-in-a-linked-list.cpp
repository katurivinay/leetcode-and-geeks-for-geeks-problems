/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        int data = node->val;
        node->val = node->next->val;
        ListNode* temp;
        temp = node->next;
        node->next = temp->next;
    }
};