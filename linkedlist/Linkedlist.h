#include"main.h"

template<class Item>
class Linkedlist
{
	typedef struct
	{
		Item item;
		struct Node* next;
		struct Node* last;
	} Node;

	friend class Mystack;

protected:
	int N = 0;
	Node* head = NULL;
	Node* tail = NULL;
	Node* temp = NULL;
	
public:
	Linkedlist<Item>() {};
	~Linkedlist() {};
	int size() 
	{
		return N;
	}
	bool isEmpty()
	{
		return N == 0;
	}
};



