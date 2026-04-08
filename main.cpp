#include <string>
#include <iostream>
#include "LIB/LinkNode/LinkNode.h"
#include "LIB/Bsort/Bsort.h"

void spitout(LinkNode::Node *pointer);

int main()
{
    int N;
    std::string cmd;

    std::cout << "Masukan jumlah bilangan" << 
    std::endl << "yang akan di masukan : ";

    std::cin >> N;

    LinkNode Node;

    for(int i = 0; i < N; i++)
    {
        int temporary;
        std::cout << "N" << i << ":";
        std::cin >> temporary;
        Node.insert(temporary);
    }

    std::cout << "Sorting Type: asc, desc, fifo" << 
    std::endl << "Masukan type sorting : ";

    std::cin >> cmd;

    LinkNode::Node *resPointer = Node.pOut();
    LNBsort sorting(resPointer);
    
    if(cmd == "asc")
    {
        sorting.sort(cmd);
        spitout(resPointer);
    }
    else if(cmd == "desc")
    {
        sorting.sort(cmd);
        spitout(resPointer);
    }
    else
    {
        spitout(resPointer);
    }
}

void spitout(LinkNode::Node *pointer)
{
    while(pointer != NULL)
    {
        std::cout << pointer->value << " ";
        pointer = pointer->next;
    }
}