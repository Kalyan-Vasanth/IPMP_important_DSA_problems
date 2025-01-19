/**/
#include<bits/stdc++.h>
using namespace std;
#define NULL nullptr
 // Definition for singly-linked list.
  struct ListNode {
      char val;
      ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 #define Node ListNode
class Solution {
  public:
    // Function to rearrange the linked list based on vowels
    struct Node *arrangeCV(Node *head) {
        // code here
        Node* d1 = new Node('a');
        Node* d2 = new Node('b');
        Node* curr1 =d1;
        Node* curr2 = d2;
        Node* temp = head;
        while(temp!=NULL)
        {
            char c = temp->val;
            if(c=='a' || c=='e' ||c=='i' ||c=='o' ||c=='u')
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
        curr2->next = NULL;
        curr1->next = d2->next;
        return d1->next;
    }
};