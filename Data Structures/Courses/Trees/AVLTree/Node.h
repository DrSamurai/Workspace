#ifndef NODE_H
#define NODE_H
class Node{

public:
    int item;
    int height;
    Node* leftNode;
    Node* rightNode;

    Node(int item);
};

#endif