/* Node is defined as
  class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* segregate(Node* head) {
        // code here
        Node* zeroHead = new Node(-1);
        Node* oneHead  = new Node(-1);
        Node* twoHead  = new Node(-1);

        Node* zero = zeroHead;
        Node* one  = oneHead;
        Node* two  = twoHead;
        
        Node* curr = head;
        while(curr){
            Node* nxt = curr->next;
            curr->next = nullptr;
            if(curr->data == 0){
                zero->next = curr;
                zero = zero->next;
            }
            else if(curr->data == 1){
                one->next = curr;
                one = one->next;
            }
            else{
                two->next = curr;
                two = two->next;
            }
            curr = nxt;
        }
        Node* head0 = zeroHead->next;
        Node* head1 = oneHead->next;
        Node* head2 = twoHead->next;
        if(head0 == nullptr){
            if(head1 == nullptr){
                return head2;
            }
            else{
                one->next = head2;
                return head1;
            }
        }
        else{
            if(head1 == nullptr){
                zero->next = head2;
                return head0;
            }
            else{
                zero->next = head1;
                one->next = head2;
                return head0;
            }
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna