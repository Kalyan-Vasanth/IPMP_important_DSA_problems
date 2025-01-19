/**/
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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL||head->next==NULL) return head;
        ListNode* ptr1 = head;
        ListNode* ptr2 = head->next;
        ListNode* dummy = ptr2;
        ListNode* temp1;
        ListNode* temp2;
        while(ptr1!=nullptr&&ptr2!=nullptr)
        {
            temp1 = ptr2->next;
            if(temp1!=nullptr) temp2 = temp1->next;
            else temp2 = nullptr;
            ptr2->next = ptr1;
            if(temp2==nullptr&&temp1!=nullptr) ptr1->next = temp1;
            else ptr1->next = temp2;
            ptr1 = temp1;
            ptr2 = temp2;
        }
        return dummy;
        
    }
};