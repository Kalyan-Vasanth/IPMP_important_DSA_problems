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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* head1 = new ListNode(0); // dummy node
        ListNode* temp = head;
        ListNode* temp2 = head1; 
        while(temp!=NULL)
        {
            if(temp->next!=NULL && temp->val != temp->next->val)
            {
                temp2->next = temp;
                temp2 = temp;
                temp = temp->next;
                temp2->next = NULL;
            }
            else if(temp->next!=NULL && temp->val == temp->next->val)
            {
                int a = temp->val;
                while(temp!=NULL && temp->val==a)
                {
                    temp = temp->next;
                }
            }
            else if(temp->next==NULL)
            {
                temp2->next = temp;
                temp = temp->next;
            }
        }
        return head1->next;
    }
};