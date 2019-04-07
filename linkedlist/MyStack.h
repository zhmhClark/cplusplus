#include "Linkedlist.h"
template<class Item>
class MyStack 
{
private:
	Linkedlist<Item> list;

public:
	void push(Item newfirst);
	Item pop();
	MyStack<Item>();
	~MyStack<Item>();
	int size();
};


