#include "LinkNode.h"

LinkNode::LinkNode()
{
    this->fnode = NULL;
}

void LinkNode::insert(int value)
{
    LinkNode::Node *TNODE;
    TNODE = new(LinkNode::Node);
    TNODE->value = value;
    TNODE->next = NULL;
    if(this->fnode == NULL)
    {
        this->fnode = TNODE;
        this->lnode = TNODE;
    }
    else
    {
        this->lnode->next = TNODE;
        this->lnode = this->lnode->next;
    }
}

LinkNode::Node *LinkNode::pOut()
{
    this->lnode = this->fnode;
    return this->lnode;
}