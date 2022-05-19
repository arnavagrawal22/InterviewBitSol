ListNode * reverse(ListNode * head){
    ListNode *p,*q,*r;
    p = NULL;
    q = head;
    while(q)
    {
        r = q->next;
        q -> next = p;
        p = q;
        q = r; 
    }
    return p;
 }
ListNode* Solution::solve(ListNode* head, int k) {
    ListNode * temp = head, *p , *q , *r;
    for(int i = 0; i < k-1; i++){
        temp = temp -> next;
    }
    q = temp -> next;
    temp -> next = NULL;
    p = head;
    head = reverse(head);
    p -> next = q;
    temp = p;
    
    // temp = q;
    // if(q == NULL)
    //     return head;
    // for(int i = 0; i < k-1; i++)
    //     temp = temp -> next;
    bool doop = false;
    while(temp -> next){
        if(!doop){
            for(int i = 0; i < k; i++)
                temp = temp -> next;
            doop = true;
        }
        else{
            p = temp;
            q = temp -> next;
            for(int i = 0; i < k; i++)
                temp = temp -> next;
            r = temp -> next;
            temp -> next = NULL;
            p -> next = reverse(q);
            q -> next = r;
            temp = q;
            doop = false;
        }
    }
    return head;
}