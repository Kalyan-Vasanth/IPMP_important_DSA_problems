/*https://www.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/
1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card*/
#define NULL nullptr
struct Node
{
    int data;
    struct Node* next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
class Solution {
  public:
    int getKthFromLast(Node *head, int k) {
        // Your code here
        Node* temp = head;
        while(k!=0 && temp!=NULL)
        {
            temp = temp->next;
            k = k - 1;
        }
        if(temp==NULL && k>0) return -1;
        else if(temp==NULL && k==0) return head->data;
        Node* temp2 = head;
        while(temp!=NULL)
        {
            temp = temp->next;
            temp2 = temp2->next;
        }
        return temp2->data;
    }
};