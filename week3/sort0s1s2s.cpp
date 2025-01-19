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
 #define Node ListNode
class Solution {
  public:
    // Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node* head) {
        // Add code here
        Node* d0 = new Node(-1);
        Node* d1 = new Node(-1);
        Node* d2 = new Node(-1);
        Node* t0 = d0;
        Node* t1 = d1;
        Node* t2 = d2;
        Node* temp = head;
        while(temp!=NULL)
        {
            int a = temp->val;
            if(a==0)
            {
                t0->next = temp;
                t0 = t0->next;
            }
            else if(a==1)
            {
                t1->next = temp;
                t1 = t1->next;
            }
            else
            {
                t2->next = temp;
                t2 = t2->next;
            }
            temp = temp->next;
        }
        if(d1->next!=NULL) t0->next = d1->next;
        else t0->next = d2->next;
        t1->next = d2->next;
        t2->next = NULL;
        return d0->next;
    }
};