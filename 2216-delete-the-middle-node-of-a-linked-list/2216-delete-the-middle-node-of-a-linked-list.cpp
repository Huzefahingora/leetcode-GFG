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
    ListNode* deleteMiddle(ListNode* head) {
        // int cnt = 0;
        // ListNode * temp = head;
        // while(temp->next != NULL)
        // {
        //     temp = temp->next;
        //     cnt++;
        // }
        // cnt = (cnt/2) - 1;
        // temp = head;
        // while(cnt >0)
        // {
        //     temp = temp -> next;
        //     cnt--;
        // }
        // temp->next = temp->next->next;
        // // del temp->next;
        if(head == nullptr || head->next == nullptr)return nullptr;
        ListNode * slow = head;
        ListNode * fast = head;
        ListNode *prev = nullptr;
    

        while( fast != nullptr &&fast ->next != nullptr)
        {
            prev  = slow;
            slow = slow -> next;
            fast = fast ->next->next; 
        }
        prev ->next = slow ->next;
        return head;
    }
};