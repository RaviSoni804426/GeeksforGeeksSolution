/* The Node is defined
  /* Link list Node
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

    /*The function below returns an int denoting
    the length of the longest palindrome list. */
  
class Solution {
public:
    // count common nodes starting from a and b
    int cnt(Node* a,Node* b){
        int len = 0;
        while(a && b){
            if(a->data == b->data){
                len++;
            }else break;
            a = a->next;
            b = b->next;
        }
        return len;
    }
    int maxPalindrome(Node *head) {
        Node* prev = NULL,*temp = head;
        int res = 0;
        while(temp){
            Node* nxt = temp->next;
            temp->next = prev;
            res = max(res,2*cnt(prev,nxt)+1);//if odd
            res = max(res,2*cnt(temp,nxt));//if even
            prev = temp;
            temp = nxt;
        }
        return res;
    }
};

