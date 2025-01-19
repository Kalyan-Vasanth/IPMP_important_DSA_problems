/*https://leetcode.com/problems/linked-list-cycle/*/
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
    bool hasCycle(ListNode *head) {
        if(head==NULL) return false;
        struct ListNode* slwptr=head;
        struct ListNode*fastptr=head->next;
        while(fastptr!=nullptr)
        {
            if(fastptr==slwptr)
            return true;
            if(fastptr->next!=nullptr) fastptr=fastptr->next->next;
            else return false;
            slwptr=slwptr->next;
        }
        return false;
        
    }
};