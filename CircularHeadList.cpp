#include "stdafx.h"
#include <iostream>
using namespace std;
#include "Node.h"
#include "CHList.h"

CHList::CHList()
{ 
	Node * dnode = new Node('?');
	dummy_node=dnode;
	listSize=0;
	first=dummy_node;
	first->next=first;
}

bool CHList::empty()
{
	if (first->next==first)
		return 1;
	else
		return 0;
}

void CHList::insert(Node * newnode, Node * pre)
{ 
	Node * temp;
	if ((empty())&& (pre!=dummy_node))
	{
		cout<<"*&$MU##\n";
	}
	else
	{
		temp=pre->next;
		pre->next=newnode;
		newnode->next=temp;
		listSize++;
	}
}
 

void CHList::erase(Node * prenode)
{
	Node *to_be_delete;
	 Node *suc;
	 if (!empty())
 	{
	 to_be_delete=prenode->next;
	 suc=to_be_delete->next;
	 prenode->next=suc;
	 to_be_delete->next='\0';
	 listSize--;
 	}
}

void CHList::display()
{
	Node * current_node;
	 current_node=first;
	 do
 	{
		 cout<<current_node->data<<" ";
 		current_node=current_node->next;
 	}while (current_node!=first);
	cout<<'\n';
}
