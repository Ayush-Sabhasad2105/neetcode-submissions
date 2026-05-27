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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        int count = 0;
        ListNode* curr = head;
        while (curr != nullptr) {

            count++;
            curr = curr->next;
        }

        int removeindex = count - n;
        if(removeindex == 0){

           return head->next;
        }

        curr = head;
        for (int i = 0; i < count - 1; i++) {

            if ((i + 1) == removeindex) {

                curr->next = curr->next->next;
                break;
            }
            curr = curr->next;
        }

        return head;
    }
};
