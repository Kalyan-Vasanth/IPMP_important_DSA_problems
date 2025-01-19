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
    void reorderList(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    // the slow pointer towards the first half last node
    ListNode* secondHalf = slow->next;
    slow->next = NULL;  // Terminate the first half 
    // Reverse the second half
    ListNode* prev = NULL;
    ListNode* curr = secondHalf;
    while (curr != NULL)
     {
        ListNode* temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    // Merge the two halves
    ListNode* firstHalf = head;
    secondHalf = prev; // prev is the  head of the reversed second half
    while (firstHalf != NULL && secondHalf != NULL)
     {
        ListNode* temp1 = firstHalf->next;
        ListNode* temp2 = secondHalf->next;
        // stored the next values of both
        firstHalf->next = secondHalf;
        secondHalf->next = temp1;
        // alternately added both the nodes
        firstHalf = temp1;
        secondHalf = temp2;
        // get them to next part
    }
}

};