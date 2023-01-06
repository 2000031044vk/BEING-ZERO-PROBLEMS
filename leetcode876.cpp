class Solution {
public:
 int size(ListNode* head){
 int count=0;
 auto current=head;
 while(current){
    count++;
    current = current-> next;
}
return count;
}
 ListNode* middleNode(ListNode* head) {
        if(head==NULL) return NULL;
        int numbers = size(head);
        int sp=numbers/2;
       
        auto current=head;
        while(sp--){
            current = current->next;
        }
        return current;
    }
};