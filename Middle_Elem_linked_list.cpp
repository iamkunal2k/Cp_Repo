// Problem Link :
// https://leetcode.com/problems/middle-of-the-linked-list/
// https://www.codingninjas.com/studio/problems/973250?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=1

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while( fast != NULL && fast -> next != NULL ) {

            slow = slow -> next;
            fast = fast -> next -> next;
        } 
        return slow;
    }
};