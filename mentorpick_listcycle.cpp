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
  SLLNode* cycleStartNode(SLLNode* h) {
    SLLNode*s = h;
    SLLNode*f = h;
    while(f && f -> next && f-> next -> next){
        s = s-> next;
        f = f ->next-> next;
        if(s==f){
            while (h!=s){
                h= h->next;
                s = s->next;
            }
            return s;
        }
    }
    return NULL;
  }
};