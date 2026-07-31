/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* leftDummy = new ListNode(-1);
        ListNode* rightDummy = new ListNode(-1);

        ListNode* left = leftDummy;
        ListNode* right = rightDummy;
        
        ListNode* curr = head;
        while(curr){
            ListNode* nxt = curr->next;
            curr->next = NULL;
            if(curr->val < x){
                left->next = curr;
                left = left->next;
            }
            else{
                right->next = curr;
                right = right->next;
            }
            curr = nxt;
        }
        ListNode* lefthead = leftDummy->next;
        ListNode* righthead = rightDummy->next;
        if(lefthead == NULL){
            return righthead;
        }
        else{
            left->next = righthead;
            return lefthead;
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna