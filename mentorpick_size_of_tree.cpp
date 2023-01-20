#include <bits/stdc++.h>

using namespace std;

struct BTNode{
	int val;
	BTNode *left, *right;
};

int sizeOfTree(BTNode *root)
{
    // TODO:  Fill your code here
    if(root==NULL){
        
        return 0;
    }
    return sizeOfTree(root -> left) +sizeOfTree(root -> right) + 1;
}