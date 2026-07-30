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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL) return NULL;
        ListNode* temp = head;
        int sz = 1;
        while(temp && temp->next){
            temp = temp->next;
            sz++;
        }
        k = k%sz;
        if(k == 0) return head;
        int n = sz-k;
        ListNode* slow = head;
        for(int i=0; i<n-1; i++){
            slow = slow->next;
        }
        ListNode* nxtHead = slow->next;
        slow->next = NULL;
        temp->next = head;
        return nxtHead;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna