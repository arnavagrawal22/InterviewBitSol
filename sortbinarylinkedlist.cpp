/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::solve(ListNode* A) {
    if(!A){
        return A;
    }
    if(A->next == NULL){
        return A;
    }
    ListNode*front = A;
    ListNode* back = A;
    while(back!=NULL){
        if(back->val == 1){
            back = back->next;
        }
        else{
            swap(back->val,front->val);
            front = front->next;
            back = back->next;
        }
    }
    return A;
}
