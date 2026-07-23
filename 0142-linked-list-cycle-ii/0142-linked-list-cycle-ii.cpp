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
    ListNode *detectCycle(ListNode *head) {
        ListNode* s = head;
        ListNode* f = head;
        bool isCycle = false;
        while(f != NULL && f->next != NULL){
            f = f->next->next;
            s = s->next;
            if(s == f){
                isCycle = true;
                break;
            }
        }
        if(!isCycle) return NULL;
        s = head;
        while(f != s){
            f = f->next;
            s = s->next;
        }
        return s;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna