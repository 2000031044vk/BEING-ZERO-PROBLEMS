class Solution {
public:
    ListNode* reverseList(ListNode* head) {
      ListNode *cu=head, *pu=NULL, *nu=NULL;
      while(cu){
          nu=cu->next;
          cu->next=pu;
          pu=cu;
          cu=nu;
      }  
      return pu;
    }
};