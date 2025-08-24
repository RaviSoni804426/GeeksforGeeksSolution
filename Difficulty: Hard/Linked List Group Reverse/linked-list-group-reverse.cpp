/*
  Node is defined as
    struct node
    {
        int data;
        struct Node* next;

        Node(int x){
            data = x;
            next = NULL;
        }

    }*head;
*/

class Solution {
  public:
    Node *reverseKGroup(Node *head, int k) {
        // code here
        if(head == NULL) return NULL;
        Node* prev = NULL;
        Node* curr = head;
        Node* next = NULL;
        int c = 0;
        while(curr != NULL && c < k){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            c++;
        }
        if(next != NULL){
            head->next = reverseKGroup(next, k);
        }
        return prev;
    }
};
