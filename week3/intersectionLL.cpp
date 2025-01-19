/*https://www.geeksforgeeks.org/problems/intersection-of-two-sorted-linked-lists/1?itm
_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card*/
#define NULL nullptr
 // Definition for singly-linked list.
  struct ListNode {
      int data;
      ListNode *next;
     ListNode() :data(0), next(nullptr) {}
     ListNode(int x) :data(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : data(x), next(next) {}
  };
 #define Node ListNode
 class Solution {
  public:
    Node* findIntersection(Node* head1, Node* head2) {
        // code goes here.
        Node* dummy = new Node(0);
        Node* curr = dummy;
        Node* temp1 = head1;
        Node* temp2 = head2;
        while(temp1!=NULL && temp2!=NULL)
        {
            if(temp1->data == temp2->data)
            {
                if(curr->data!=temp1->data){
                curr->next = temp1;
                curr = curr->next;
                }
                temp1 = temp1->next;
                temp2 = temp2->next;
            }
            else if(temp1->data > temp2->data)
            {
                temp2 = temp2->next;
            }
            else temp1 = temp1->next;
        }
        curr->next = NULL;
        return dummy->next;
    }
};