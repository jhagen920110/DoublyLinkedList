#pragma once
#include "Node.h"

class CHList
{
public:
int listSize;
Node * first;
Node * dummy_node;
CHList();
bool empty();
void insert(Node * item, Node * pre);
void erase(Node * prenode);
void display();
};
