/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    ListNode* head;
    ListNode* tail;
    if(!A){
        return B;
    }
    if(!B){
        return A;
    }
    if(A->val > B->val){
        head = B;
        B = B->next;
    }
    else{
        head = A;
        A = A->next;
    }
    tail= head;
    while(A && B){
        int a = A->val;
        int b = B->val;
        if(a<=b){
            tail->next = A;
            A = A->next;
        }
        else{
            tail->next = B;
            B = B->next;
        }
        tail = tail->next;
    }
    if(A){
        tail->next = A;
    }
    else{
        tail->next = B;
    }
    return head;
}
