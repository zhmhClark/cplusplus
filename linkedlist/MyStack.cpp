#include "MyStack.h"
template<class Item>
MyStack<Item>::MyStack()
{
}

template<typename Item>
MyStack<Item>::~MyStack<Item>()
{
}

template<typename Item>
void MyStack<Item>::push(Item newfirst)
{
	Node newHead = { newfirst,list.head,NULL };
	list.head->last = newHead;
	list.head = newHead;
	list.N++;
}

template<typename Item>
Item MyStack<Item>::pop()
{
	list.head = list.head.next;
	list::N--;
	return list.head.last;
}

template<typename Item>
int MyStack<Item>::size()
{
	return list.size();
}
