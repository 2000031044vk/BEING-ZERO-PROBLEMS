#include <bits/stdc++.h>

using namespace std;

struct BTNode{
	int val;
	BTNode *left, *right;
};

int countLeafNodes(BTNode *root)
{
    // TODO:  Fill your code here
     if(root==NULL){
        return 0;
    }
    if(root -> left==NULL && root-> right==NULL){
        return 1;
    }
    return countLeafNodes(root->left)+countLeafNodes(root->right);
}