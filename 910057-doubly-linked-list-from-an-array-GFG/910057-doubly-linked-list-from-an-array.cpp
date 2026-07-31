/* class Node {
  public:
    int data;
    Node* next;
    Node* prev;
    Node(int d) {
        data = d;
        next = nullptr;
        prev = nullptr;
    }
}; */

class Solution {
  public:
    Node* createDLL(vector<int>& arr) {
        // code here
        Node* head = new Node(arr[0]);
        Node* temp = head;
        for(int i=1; i<arr.size(); i++){
            Node* newNode = new Node(arr[i]);
            temp->next = newNode;
            newNode->prev = temp;
            temp = temp->next;
        }
        return head;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna