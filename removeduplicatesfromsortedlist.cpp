/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    if(A==NULL){
        return A;
    }
    if(A->next == NULL){
        return A;
    }
    ListNode* temp = A;
    while(temp->next !=NULL){
        ListNode* temp1 = temp->next;
        while(temp->val == temp1->val){
            if(temp1->next == NULL){
                temp->next = NULL;
                return A;
            }
            temp1 = temp1->next;
        }
        temp->next = temp1;
        temp = temp->next;

    }
    return A;
}
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    if(A==NULL){
        return A;
    }
    if(A->next == NULL){
        return A;
    }
    ListNode* temp = A;
    while(temp->next !=NULL){
        ListNode* temp1 = temp->next;
        while(temp->val == temp1->val){
            if(temp1->next == NULL){
                temp->next = NULL;
                return A;
            }
            temp1 = temp1->next;
        }
        temp->next = temp1;
        temp = temp->next;

    }
    return A;
}
