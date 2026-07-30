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
        int zero = 0;
        int one = 0;
        int two = 0;
        Node* curr = head;
        while(curr){
            int val = curr->data;
            if(val == 0) zero++;
            else if(val == 1) one++;
            else two++;
            curr = curr->next;
        }
        int n = zero+one+two;
        Node* dummy = new Node(0);
        Node* t = dummy;
        for(int i=0; i<n; i++){
            if(i<zero){
                Node* temp = new Node(0);
                t->next = temp;
            }
            else if(i<zero+one){
                Node* temp = new Node(1);
                t->next = temp;
            }
            else{
                Node* temp = new Node(2);
                t->next = temp;
            }
            t = t->next;
        }
        return dummy->next;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna