/*https://leetcode.com/problems/reverse-nodes-in-k-group/description/
?envType=problem-list-v2&envId=linked-list*/
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
    node* reverse(node* head) // a function to reverse
    {
        node* prev = nullptr;
        node* curr = head;
        node* next;
        while(curr!=NULL)
        {
            next = curr->next ;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    node* kthNode(node* temp , int k) // a function to find kth node 
    {
       k = k-1;
       while(temp!=NULL && k>0)
       {
          k--;
          temp = temp->next;
       }
       return temp;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        //reverse the nodes iin groups
        node* prev ;
        node* temp = head;
        node* kth ;
        node* nextNode;
        while(temp!=NULL)
        {
            kth = kthNode(temp,k); //find kth node
            if(kth==NULL) 
            {
                if(prev!=NULL) prev->next = temp; //previously got head 
                break;
            }
            nextNode = kth->next;
            kth->next = nullptr;
            reverse(temp);
            if(temp==head) head = kth;
            else prev->next = kth;
            prev = temp;
            temp = nextNode;
        }
        return head;
    }
};