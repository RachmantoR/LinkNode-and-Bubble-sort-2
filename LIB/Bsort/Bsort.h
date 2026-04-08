#pragma once
#include <string>
#include <iostream>
#include "../LinkNode/LinkNode.h"

class ABsort
{
    private:
        int *data;
        int size;

    public:
        ABsort(int *data, int size);

        void sort(std::string mode);
};

class LNBsort
{
    private:
        LinkNode::Node *structure;

    public:
        LNBsort(LinkNode::Node *pointer);
        
        void sort(std::string mode);
};