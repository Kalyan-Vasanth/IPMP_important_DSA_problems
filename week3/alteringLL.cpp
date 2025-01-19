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
    // Function to split a linked list into two lists alternately
    vector<Node*> alternatingSplitList(struct Node* head) {
    // Create dummy nodes
    Node* d1 = new Node(0);
    Node* d2 = new Node(0);
    Node* curr1 = d1;
    Node* curr2 = d2;
    Node* temp = head;

    // Traverse the list and split alternately
    while (temp != NULL) {
        curr1->next = temp;        // Add current node to the first list
        curr1 = curr1->next;
        temp = temp->next;         // Move to the next node

        if (temp != NULL) {        // Add the next node to the second list if it exists
            curr2->next = temp;
            curr2 = curr2->next;
            temp = temp->next;     // Move to the next node after that
        }
    }

    // Terminate both lists properly
    curr1->next = NULL;
    curr2->next = NULL;

    // Collect results
    vector<Node*> ans;
    ans.push_back(d1->next);
    ans.push_back(d2->next);

    return ans;
}
};