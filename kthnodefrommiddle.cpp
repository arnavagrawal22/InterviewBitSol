/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::solve(ListNode* A, int k) {
    int count = 0;
    ListNode* temp = A;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    int mid = count/2 + 1;
    int ele = mid - k;
    if(ele < 1){
        return -1;
    }
    else{
        int data;
        temp = A;
        while(ele > 0){
            data = temp->val;
            temp = temp->next;
            ele--;
        }
        return data;
    }
}
