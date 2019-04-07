#pragma once

class UnionFind
{
private:
	int N;
	int *id, *size;
	int find(int p);
public:
	UnionFind(int N);
	bool connected(int p, int q);
	void connect(int p, int q);
	~UnionFind();
};

