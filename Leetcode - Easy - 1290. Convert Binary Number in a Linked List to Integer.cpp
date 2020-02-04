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
    int getDecimalValue(ListNode* head) {
        int num = 0;
        
        while(head != NULL){
            if(head->val == 1){
                num++;
            }
            num = num << 1;
            head = head->next;
        }
        num = num >> 1;
        return num;
    }
};