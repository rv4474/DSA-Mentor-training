struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
int len = 0;
    struct ListNode* tmp = head;
    while (tmp != NULL) {
        len++;
        tmp = tmp->next;
    }
    if (n > len)
    {
        return head;
    }
else if (n == len) {
        return head->next;
 
    }
    else
    {
        int diff = len - n;
        struct ListNode* prev= NULL;
        struct ListNode* curr = head;
        for(int i = 0;i < diff;i++){
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        return head;
    }
}