/*https://leetcode.com/problems/linked-list-cycle-ii/*/
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
    ListNode* hasCycle(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            return NULL;
        }
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
            if (fast == slow) {
                return slow; 
            }
        }
        return NULL;
    }
    
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* meetingPoint = hasCycle(head);
        if (meetingPoint == NULL) return NULL; 
        ListNode* start = head;
        while (start != meetingPoint) {
            start = start->next;
            meetingPoint = meetingPoint->next;
        }
        return start; 
    }
};