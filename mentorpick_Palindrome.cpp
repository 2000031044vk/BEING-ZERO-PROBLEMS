
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
	bool isPalindromic(SLLNode* head) {
        // TODO:  Complete this function
        // Do not read any input, use the list passed in as function input parameter
        // Do not print any output
        // Just return head of sorted list
        // Do it in CONSTANT space	
        SLLNode* su=head;
         SLLNode* fu=head;
         stack<int>sk;
         while(fu &&fu ->next){
             sk.push(su->data);
             su = su ->next;
             fu = fu->next -> next;
         }
         if(fu){
              su=su->next;
         }
         while (!sk.empty()){
             if(su ->data!=sk.top()){
                 return false;
             }
             su=su->next;
             sk.pop();
        }
         return true;
	}
};