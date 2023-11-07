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
    ListNode* reverseList(ListNode* head) {
        ListNode *current = head, *newNode = head, *Head = NULL;
        //create a new linked list to return reverse list.
        while (current) {
            newNode = new ListNode;
            newNode -> val = current -> val;
            newNode -> next = Head;
            Head = newNode;
            current = current -> next;
        }
        return Head;
    }
};
