#include <bits/stdc++.h>
using namespace std;

struct SLLNode{
	int data;
	struct SLLNode *next;
	SLLNode(int d){
		data = d;
		next = NULL;
	}
};

class BeingZero{
public:
	SLLNode *mergeTwoSortedLists(SLLNode *A1, SLLNode *A2){
    if(A1==NULL) return A2;
     if(A2==NULL) return A1;
         if(A1 -> data < A2 -> data){
             A1 -> next = mergeTwoSortedLists(A1->next,A2);
             return A1;
         } else {
             A2 -> next= mergeTwoSortedLists(A1,A2->next);
             return A2;
         }
	 } 
};