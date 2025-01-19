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
    void deleteAlt(struct Node *head) {
        // Code here
        Node* temp = head;
        while(temp!=NULL && temp->next!=NULL)
        {
            temp->next = temp->next->next;
            temp = temp->next;
        }
    }
};
