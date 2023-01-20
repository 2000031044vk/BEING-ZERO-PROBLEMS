#include <bits/stdc++.h>

using namespace std;

struct BTNode{
	int val;
	BTNode *left, *right;
};

int sumOfAllNodes(BTNode *root)
{
    // TODO:  Fill your code here
   if(root==NULL) return 0;
     if(root->left==NULL && root->right==NULL) return root->val;
     return root->val+sumOfAllNodes(root->left)+sumOfAllNodes(root->right);
}