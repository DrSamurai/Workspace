#include "AVLTree.h"

Node *AVLTree::leftRotate(Node *x)
{
    Node *y = x->rightNode;
    Node *b = y->leftNode;
    y->leftNode = x;
    x->rightNode = b;

    x->height = getMax(getHeight(x->leftNode), getHeight(x->rightNode)) + 1;
    y->height = getMax(getHeight(y->leftNode), getHeight(y->rightNode)) + 1;

    return y;
}

Node *AVLTree::rightRotate(Node *y)
{
    Node *x = y->leftNode;
    Node *b = x->rightNode;

    x->rightNode = y;
    y->leftNode = b; // yer

    y->height = getMax(getHeight(y->leftNode), getHeight(y->rightNode)) + 1;
    x->height = getMax(getHeight(x->leftNode), getHeight(x->rightNode)) + 1;

    return x;
}

void AVLTree::insertNode(int data)
{
    this->root = insertNode(root, data);
}

// 10 20 30 40 5 7 23 18

Node *AVLTree::insertNode(Node *node, int item)
{
    if (!node)
        return new Node(item);
    else if (node->item < item)
        node->rightNode = insertNode(node->rightNode, item);
    else if (node->item > item)
        node->leftNode = insertNode(node->leftNode, item);
    else
        return node;

    node->height = getMax(getHeight(node->leftNode), getHeight(node->rightNode)) + 1;
    int balanceFactor = getBalanceFactor(node);

    if (balanceFactor > 1)
    {
        if (item < node->leftNode->item)
        {
            return rightRotate(node);
        }
        else
        {
            node->leftNode = leftRotate(node->leftNode);
            return rightRotate(node);
        }
    }
    else if (balanceFactor < -1)
    {
        if (item > node->rightNode->item)
        {
            return leftRotate(node);
        }
        else
        {
            node->rightNode = rightRotate(node->rightNode);
            return leftRotate(node);
        }
    }
    return node;
}

void AVLTree::deleteNode(int data)
{
    root = deleteNode(root, data);
}

Node *AVLTree::deleteNode(Node *node, int item)
{
    if (!node)
        return nullptr;
    else if (item < node->item)
        node->leftNode = deleteNode(node->leftNode, item);
    else if (item > node->item)
        node->rightNode = deleteNode(node->rightNode, item);
    else
    {

        if (!(node->leftNode) && !(node->rightNode))
        {
            delete node;
            return nullptr;
        }
        else if (!(node->leftNode) && node->rightNode)
        {
            Node *ans = node->rightNode;
            delete node;
            return ans;
        }
        else if (!(node->rightNode) && node->leftNode)
        {
            Node *ans = node->leftNode;
            delete node;
            return ans;
        }
        else
        {
            node->item = minValue(node->rightNode);
            node->rightNode = deleteNode(node->rightNode, node->item);
        }
    }

    node->height = getMax(getHeight(node->leftNode), getHeight(node->rightNode)) + 1;
    int balanceFactor = getBalanceFactor(node);

    if (balanceFactor > 1)
    {
        if (getBalanceFactor(node->leftNode) >= 0)
        {
            return rightRotate(node);
        }
        else
        {
            node->leftNode = leftRotate(node->leftNode);
            return rightRotate(node);
        }
    }
    else if (balanceFactor < -1)
    {

        if (getBalanceFactor(node->rightNode) <= 0)
        {
            return leftRotate(node);
        }
        else
        {
            node->rightNode = rightRotate(node->rightNode);
            return leftRotate(node);
        }
    }
    return node;
}
AVLTree::~AVLTree(){
    deleteAllNodes(root);
}

void AVLTree::deleteAllNodes(Node *node){
    if(node){
        deleteAllNodes(node->leftNode);
        deleteAllNodes(node->rightNode);
        delete node;
    }
}

// ASSIGNMENT

int AVLTree::minValue(Node *node)
{
    Node *current = node;
    int data = current->item;
    while (current->leftNode)
    {
        current = current->leftNode;
        data = current->item;
    }
    return data;
}

int AVLTree::getHeight(Node *node)
{
    return !node ? 0 : node->height;
}

int AVLTree::getMax(int left, int right) // why not Node* node?
{
    return left < right ? right : left;
}

int AVLTree::getBalanceFactor(Node *node)
{
    return getHeight(node->leftNode) - getHeight(node->rightNode);
}