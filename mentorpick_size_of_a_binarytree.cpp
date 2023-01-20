#include <bits/stdc++.h>

using namespace std;

struct BTNode{
	int val;
	BTNode *left, *right;
};

int sizeOfTree(BTNode *root)
{
    // TODO:  Fill your
    if(root==NULL){
    return 0;
    }
    if(root->left==NULL && root->right==NULL) return 1;
    return 1+sizeOfTree(root -> left) +sizeOfTree(root -> right);
}