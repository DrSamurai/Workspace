#include "BalancedTree.h"

bool BalancedTree::checkBalance(Node* root, Height* height){
    if (!root)
    {
        height->height = 0;
        return true;
    }

    Height* leftHeight = new Height();
    Height* rightHeight = new Height();

    bool isLeftBalanced = checkBalance(root->left, leftHeight);
    bool isRightBalanced = checkBalance(root->right, rightHeight);

    height->height = leftHeight->height > rightHeight->height ? leftHeight->height + 1 : rightHeight->height + 1;
    
    int balanceFactor = leftHeight->height - rightHeight->height;

    if (!(-1 <= balanceFactor && balanceFactor <= 1))
    {
        return false;
    }
    else{
        return isLeftBalanced && isRightBalanced;
    }
}