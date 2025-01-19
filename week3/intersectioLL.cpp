/*https://leetcode.com/problems/intersection-of-two-linked-lists/*/
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* ptrA = headA;
        ListNode* ptrB = headB;
        while(ptrA!=ptrB)
        {
           if(ptrA==NULL) ptrA = headB;
           else ptrA = ptrA->next;
           if(ptrB==NULL) ptrB = headA;
           else ptrB = ptrB->next;
        }
        return ptrA;     
    }
};
