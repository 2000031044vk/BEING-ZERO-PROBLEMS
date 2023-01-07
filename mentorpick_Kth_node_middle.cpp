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
  int kthFromMiddle(SLLNode* h, int k) {
    SLLNode* s = h;
    SLLNode* f = h;
    int count=0, n = 0;
    
    while(s){
        n++;
        s=s->next;
    }
    s=h;
    while(f && f->next!=NULL && f->next->next!=NULL){
        s = s->next;
        f = f->next->next;
        count++;
    }
    if(n%2==0){
        count++;
    }
    count = count-k;
    if(count<0)
        return -1;
    f = h;
    while(count--){
        f=f->next;
    }
    return f->data;
  }
};