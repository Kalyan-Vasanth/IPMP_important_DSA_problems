/*https://www.geeksforgeeks.org/problems/union-of-two-linked-list/1?itm_source=geeks
forgeeks&itm_medium=article&itm_campaign=practice_card*/
#include<bits/stdc++.h>
using namespace std;
#define NULL nullptr
 // Definition for singly-linked list.
  struct ListNode {
      int data;
      ListNode *next;
     ListNode() : data(0), next(nullptr) {}
     ListNode(int x) : data(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : data(x), next(next) {}
  };
 #define Node ListNode
class Solution {
  public:
    struct Node* makeUnion(struct Node* head1, struct Node* head2) {
        // code here
        set <int> s;
        Node* temp1 = head1;
        Node* temp2 = head2;
        while(temp1!=NULL || temp2!=NULL)
        {
            if(temp1!=NULL) s.insert(temp1->data);
            if(temp2!=NULL) s.insert(temp2->data);
            if(temp1) temp1 = temp1->next;
            if(temp2) temp2 = temp2->next;
        }
        Node* dummy = new Node(0);
        Node* curr = dummy;
        for(auto i : s)
        {
            Node* newNode = new Node(i);
            curr->next = newNode;
            curr = curr->next;
        }
        return dummy->next;
    }
};