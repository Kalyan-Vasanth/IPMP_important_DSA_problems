 /*https://leetcode.com/problems/sort-list/*/
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
    node* merge(node* l1, node* l2)
    {
        node* temp1 = l1;
        node* temp2 = l2;
        node* dummy = new node(0);
        node* curr = dummy;
        while(temp1!=NULL && temp2!=NULL)
        {
            if(temp1->val >= temp2->val)
            {
                curr->next = temp2;
                temp2  = temp2->next;
            }
            else
            {
                curr->next = temp1;
                temp1 = temp1->next;
            }
            curr = curr->next;
        }
        if(temp1!=NULL) curr->next = temp1;
        if(temp2!=NULL) curr->next = temp2;
        return dummy->next;
    }
    node* findMiddle(node* head)
    {
        node* slow = head;
        node* fast = head->next;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next == NULL) return head;
        node* left = head;
        node* middle = findMiddle(head);
        node* right = middle->next;
        middle->next = NULL;
        left = sortList(left);
        right = sortList(right);
        head = merge(left,right);
        return head;
    }
};