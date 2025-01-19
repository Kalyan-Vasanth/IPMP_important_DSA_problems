/*https://leetcode.com/problems/rotate-list/*/
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
    int length(node* head)
    {
        node* temp = head;
        int count = 0;
        while(temp!=NULL)
        {
            temp = temp->next;
            count++;
        }
        return count;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL) return head;
        int len = length(head);
        k = k % len;
        node* temp = head;
        node* newNode;
        while(k!=0)
        {
             temp = temp->next;
             if(temp==NULL && k>0) temp = head;
             k= k -1;
        }
        node* temp2 = head;
        while(temp->next!=NULL)
        {
            temp = temp->next;
            temp2 = temp2->next;
        }
        if(temp2->next!=NULL) newNode = temp2->next;
        else return head;
        temp->next = head;
        temp2->next = NULL;
        return newNode;
    }
};