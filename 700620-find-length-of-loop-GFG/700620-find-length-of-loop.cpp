/*
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    int lengthOfLoop(Node *head) {
        // code here
        Node* s = head;
        Node* f = head;
        bool isCycle = false;
        while(f != NULL && f->next != NULL){
            f = f->next->next;
            s = s->next;
            if(f == s){
                isCycle = true;
                break;
            }
        }
        if(!isCycle) return 0;
        int count = 1;
        f = f->next;
        while(s != f){
            f = f->next;
            count++;
        }
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna