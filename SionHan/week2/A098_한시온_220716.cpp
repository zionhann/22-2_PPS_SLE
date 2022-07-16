/**
 * @author zionhann
 * @date 2022-07-16
 * @title 160. Intersection of Two Linked Lists
 * @from https://leetcode.com/problems/intersection-of-two-linked-lists/
 * @elapsed_time 28min
 * @runtime 987 ms (5.01%)
 * @memory_usage 14.6 MB (72.39%)
 */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* ans = NULL;
        ListNode* currA = headA;
        
        while (currA != nullptr) {
            ListNode* currB = headB;
            
            while (currB != nullptr) {
                if (currA == currB) {
                    ans = currA;
                    return ans;
                }
                currB = currB->next;
            }
            currA = currA->next;
        }
        return ans;
    }
};