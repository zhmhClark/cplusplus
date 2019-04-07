#include "BinaryTree.h"

void BinaryTree::insert(treeNode* newNode, treeNode * Node)
{
	if (newNode->word < Node->word)
	{
		if (Node->left)
			insert(newNode, Node->left);
		else 
		{
			Node->left = newNode;
			newNode->up = Node;
		}
	}
	else
	{
		if (Node->right)
			insert(newNode, Node->right);
		else
		{
			Node->right = newNode;
			newNode->up = Node;
		}
	}
}

bool BinaryTree::search(string word, treeNode * Node)
{
	if (!Node) return false;

	if (word == Node->word)
		return true;
	else if (word < Node->word)
	{
		if (Node->left)
			return search(word, Node->left);
		else
			return false;
	}
	else
	{
		if (Node->right)
			return search(word, Node->right);
		else
			return false;
	}
}

treeNode* BinaryTree::match(string word, treeNode* Node)
{
	if (word == Node->word)
		return Node;
	else if (word < Node->word)
		return match(word, Node->left);
	else
		return match(word, Node->right);
}

void BinaryTree::deleteAllNodes(treeNode * node)
{
	treeNode* leftNode, *rightNode;
	if (node)
	{
		leftNode = node->left;
		rightNode = node->right;
		free(node);
		deleteAllNodes(leftNode);
		deleteAllNodes(rightNode);
	}
}

BinaryTree::BinaryTree()
{
	root = nullptr;
	N = 0;
}

int BinaryTree::size()
{
	return N;
}

void BinaryTree::add(string newWord)
{
	if (inTree(newWord))
	{
		cout << "\""<<newWord<<"\"" <<" is in the tree." << endl;
		return;
	}

	treeNode* newNode = new treeNode;
	newNode->left = nullptr;
	newNode->right = nullptr;
	newNode->up = nullptr;
	newNode->word = newWord;

	if (root)
	{
		insert(newNode, root);
		N++;
	}
	else
	{
		root = newNode;
		N++;
	}
}

bool BinaryTree::inTree(string word)
{

	return search(word,root);
}

void BinaryTree::deleteItem(string word)
{
	if (!inTree(word))
		cout << word << " isn't in the tree." << endl;
	else
	{
		treeNode* wordNode = match(word, root);
		
		if (!wordNode->left)                           //被删的节点有单个子节点
		{
			if (wordNode->up->left == wordNode)
			{
				wordNode->up->left = wordNode->right;
				wordNode->right->up = wordNode->up;
			}
			else
			{
				wordNode->up->right = wordNode->right;
				wordNode->right->up = wordNode->up;
			}
		}
		else if (!wordNode->right)
		{
			if (wordNode->up->left == wordNode)
			{
				wordNode->up->left = wordNode->left;
				wordNode->left->up = wordNode->up;
			}
			else
			{
				wordNode->up->right = wordNode->left;
				wordNode->left->up = wordNode->up;
			}
		}
		else //被删的节点有两个子节点
		{
			treeNode* temp;
			for (temp = wordNode; temp->right; temp = temp->right)   ; //空语句
			wordNode->right->up = temp;
			temp->right = wordNode->right;
			wordNode = nullptr;
			if (wordNode->up->left == wordNode)
			{
				wordNode->up->left = wordNode->left;
				wordNode->left->up = wordNode->up;
			}
			else
			{
				wordNode->up->right = wordNode->left;
				wordNode->left->up = wordNode->up;
			}
		}
		free(wordNode);
	}
}


BinaryTree::~BinaryTree()
{
	deleteAllNodes(root);
}

int main()
{
	BinaryTree dictionary;
	cout << dictionary.size()<<endl;
	dictionary.add("hello");
	dictionary.add("thank");
	dictionary.add("you");
	dictionary.add("you");
	dictionary.add("very");
	dictionary.add("much");
	dictionary.add("how");
	dictionary.add("are");
	dictionary.add("you");
	dictionary.add("indian");
	dictionary.add("mifans");
	dictionary.add("do");
	dictionary.add("you");
	dictionary.add("like");
	dictionary.add("mi");

	cout << dictionary.size() << endl;
	
	if (dictionary.inTree("you"))
	{
		cout << "you";
		dictionary.deleteItem("you");
	}
	cout << (dictionary.inTree("you") ? "yes":"no") << endl ;

	return 0;
}