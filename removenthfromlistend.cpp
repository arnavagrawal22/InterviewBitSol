/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode *Solution::removeNthFromEnd(ListNode *A, int B)
{
    int len = 0;
    ListNode *temp = A;
    while (temp)
    {
        len++;
        temp = temp->next;
    }
    int c = len - B;
    if (B > len)
    {
        c = 0;
    }
    int count = 0;
    if (c == 0)
    {
        A = A->next;
        return A;
    }
    ListNode *current = A;
    ListNode *prev = NULL;
    while (count < c)
    {
        prev = current;
        current = current->next;
        count++;
    }
    prev->next = current->next;
    return A;
}
