/*https://leetcode.com/problems/merge-k-sorted-lists/description/?
envType=problem-list-v2&envId=linked-list*/
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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int k = lists.size();
        if(k==0) return nullptr;
         node* dummy = new node(0);
         node* curr = dummy;
         while(1)
         {
            int ind = -1;
            int mini = INT_MAX;
            for(int i = 0 ; i<k ; i++)
            {
                if(lists[i]!= NULL && lists[i]->val<=mini)
                {
                    ind = i;
                    mini = lists[i]->val;
                }
            }
            if(ind==-1) break;
            curr->next  = lists[ind];
            curr = curr->next;
            lists[ind] = lists[ind]->next;
         }
         return dummy->next;
    }
};