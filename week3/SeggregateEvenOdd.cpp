 /*https://www.geeksforgeeks.org/problems/segregate-even-and-odd-nodes-in-a-linked-list50
 35/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card*/
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

 Node* divide(Node* head) {
        // code here
        Node* dummy1 = new Node(0);
        Node* dummy2 = new Node(1);
        Node* curr1 = dummy1;
        Node* curr2 = dummy2;
        Node* temp = head;
        while(temp!=NULL)
        {
            if(temp->val % 2 ==0)
            {
                curr1->next = temp;
                curr1 = curr1->next;
            }
            else
            {
                curr2->next = temp;
                curr2 = curr2->next;
            }
            temp = temp->next;
        }
        curr1->next = dummy2->next;
        return dummy1->next;
    }