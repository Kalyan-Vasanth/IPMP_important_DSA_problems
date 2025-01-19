/*https://leetcode.com/problems/reverse-linked-list/*/
#define NULL nullptr
 // Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

 #define node ListNode
class Solution {
public:
    node* rev(node* prev,node*curr)
    {
        if(curr==NULL) return prev;
        node* temp = curr->next;
        curr->next = prev;
        return rev(curr,temp);
    }
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        return rev(head,head->next);
    }
};