/*https://leetcode.com/problems/remove-duplicates-from-sorted-list/*/
#include<bits/stdc++.h>
using namespace std;
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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL) return head;
        ListNode* prev = head;
        while(prev!=NULL)
        {
            if(prev->next!=NULL && prev->val == prev->next->val) 
               prev->next = prev->next->next;
            else prev = prev->next;
        }
        return head;
    }
};