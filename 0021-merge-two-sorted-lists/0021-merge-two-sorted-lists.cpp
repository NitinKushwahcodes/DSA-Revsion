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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* list = new ListNode(200);
        ListNode* dummy = list;
        while(list1 && list2){
            int a = list1->val;
            int b = list2->val;
            if(a<b){
                list->next = list1;
                list1 = list1->next;
            }
            else{
                list->next = list2;
                list2 = list2->next;
            }
            list = list->next;
        }
        if(list1){
            list->next = list1;
        }
        if(list2){
            list->next = list2;
        }
        return dummy->next;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna