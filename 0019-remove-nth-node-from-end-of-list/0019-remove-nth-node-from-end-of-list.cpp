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
int length(ListNode* head) {
        int count = 0;
        while (head != nullptr) {
            count++;
            head = head->next;
        }
        return count;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    int count = length(head);
    if (n == count) {
            ListNode* todelete = head;
            head = head->next;
            delete todelete;
            return head;
        }
    ListNode* temp = head;
        for (int i = 1; i < count - n; i++) {
            temp = temp->next;
        }
    ListNode* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
    return head;
    }

    };
