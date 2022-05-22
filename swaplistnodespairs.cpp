/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::swapPairs(ListNode* A) {
    if(A==NULL){
        return A;
    }
    ListNode*temp = A;
    while(temp){
        if(temp->next){
            swap(temp->val,temp->next->val);
            temp = temp->next->next;
        }
        else{
            return A;
        }
    }
    return A;
}
