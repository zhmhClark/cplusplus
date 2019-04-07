#pragma once
#include<iostream>
#include<string>
using namespace std;
typedef struct treeNode
{
	string word;
	struct treeNode * left;
	struct treeNode * right;
	struct treeNode * up;
} treeNode;
class BinaryTree
{
private:
	treeNode * root;
	int N;
	void insert(treeNode* newNode, treeNode* Node);
	bool search(string word, treeNode* Node);
	treeNode* match(string word,treeNode* Node);
	void deleteAllNodes(treeNode* node);
public:
	BinaryTree();
	int size();
	void add(string word);
	bool inTree(string word);
	void deleteItem(string word);
	~BinaryTree();
};

