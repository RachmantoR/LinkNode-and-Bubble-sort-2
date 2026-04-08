#pragma once
#include <string>
#include <iostream>

class LinkNode
{
    public:
        struct Node
        {
            int value;
            Node *next;
        };

    private:
        LinkNode::Node *fnode, *lnode;

    public:
        LinkNode();

        void insert(int value);

        LinkNode::Node *pOut();
};