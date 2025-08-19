/*
structure of the node of the list is as
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* sortedInsert(Node* head, int data) {
        Node* temp = new Node(data);
        if (head == NULL || data <= head->data) {
            temp->next = head;
            return temp;
        }

        Node* current = head;
        while (current->next != NULL && current->next->data < data) {
            current = current->next;
        }
        temp->next = current->next;
        current->next = temp;

        return head;
    }
};
