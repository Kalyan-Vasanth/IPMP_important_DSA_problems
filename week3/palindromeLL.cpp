/*https://leetcode.com/problems/palindrome-linked-list/description/*/
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
    bool isPalindrome(ListNode* head) {
        if(head->next==NULL) return true;
        ListNode* prev = NULL;
        ListNode* fast = head; //put 2 pointers 
        ListNode* slow = head;
        ListNode* temp ;
        while(fast!=NULL && fast->next!=NULL)
        {
            fast = fast->next->next;
            temp = slow->next;
            slow->next = prev; // while coming reverse the array (front array)
            prev = slow;
            slow = temp;
        }
        if(fast!=NULL&&fast->next==NULL) slow = slow->next;
        while(prev!=NULL && slow!=NULL)
        {
            //prev is head of the first reverse linked list 
            if(prev->val!=slow->val) return false;
            prev = prev->next;
            slow = slow->next;
        }
        return true;
    }
};