/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::detectCycle(ListNode* A) {
    ListNode* slow=  A;
    ListNode* fast = A;
    while(fast){
        slow = slow->next;
        fast = fast->next;
        if(!fast) return NULL;
        fast = fast->next;
        if(slow == fast) break;
    }
    if(!fast) return NULL;
    fast = A;
    while(slow!=fast){
        slow = slow->next;
        fast = fast->next;
    }

    return fast;
}