struct ListNode* oddEvenList(struct ListNode* head){
struct ListNode* ptr1=(struct ListNode*)malloc(sizeof(struct ListNode));
ptr1=NULL;
struct ListNode* ptr2=(struct ListNode*)malloc(sizeof(struct ListNode*));
ptr2=NULL;
struct ListNode* temp=(struct ListNode*)malloc(sizeof(struct ListNode));
temp=NULL;
struct ListNode* h=(struct ListNode*)malloc(sizeof(struct ListNode));
h=head;
if(head==NULL||head->next==NULL||head->next->next==NULL) return head;
else
{
    ptr1=head;
    ptr2=head->next;
temp=head->next;
while((ptr1->next!=NULL)&&(ptr2->next!=NULL)){
ptr1->next=ptr2->next;
ptr1=ptr2->next;
ptr2->next=ptr1->next;
ptr2=ptr1->next;
}
ptr1->next=temp;}

return h;
}