#include "Bsort.h"

ABsort::ABsort(int *data, int size)
{
    this->data = data;
    this->size = size;
}

void ABsort::sort(std::string mode)
{
    bool swap;
    do
    {
        swap = false;
        for(int i = 0; i < this->size - 1; i++)
        {
            if(mode == "asc")
            {
                if(this->data[i] > this->data[i+1])
                {
                    int temporary = this->data[i+1];
                    this->data[i+1] = this->data[i];
                    this->data[i] = temporary;
                    swap = true;
                }
            }
            else if(mode == "desc")
            {
                if(this->data[i] < this->data[i+1])
                {
                    int temporary = this->data[i+1];
                    this->data[i+1] = this->data[i];
                    this->data[i] = temporary;
                    swap = true;
                }
            }
        }
    } 
    while (swap);
}

LNBsort::LNBsort(LinkNode::Node *pointer)
{
    this->structure = pointer;
}

void LNBsort::sort(std::string mode)
{
    bool swap;
    do
    {
        swap = false;
        LinkNode::Node *head = this->structure;
        while(head->next != NULL)
        {
            if(mode == "asc")
            {
                if(head->value > head->next->value)
                {
                    int temporary = head->next->value;
                    head->next->value = head->value;
                    head->value = temporary;
                    swap = true;
                }
            }
            else if(mode == "desc")
            {
                if(head->value < head->next->value)
                {
                    int temporary = head->next->value;
                    head->next->value = head->value;
                    head->value = temporary;
                    swap = true;
                }
            }
            head = head->next;
        }
    } 
    while (swap);   
}