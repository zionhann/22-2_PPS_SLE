/**
 * @author zionhann
 * @date 2022-07-07
 * @title 206. Reverse Linked List
 * @from https://leetcode.com/problems/reverse-linked-list/
 * @elapsed_time 28min
 */

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
        stack<ListNode*> stack;
        
        while (head != nullptr) {
            stack.push(head);
            head = head->next;
        }
        
        if (!stack.empty()) {
            head = stack.top();
            
            while (true) {
                ListNode* node = stack.top();
                stack.pop();

                if (stack.empty()) {
                    node->next = nullptr;
                    break;
                }
                node->next = stack.top();
            }
        }
        return head;
    }
};