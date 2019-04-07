#include "UnionFind.h"

UnionFind::UnionFind(int N)
{
	id = new int[N];
	size = new int[N];
	this->N = N;
	for (int i = 0; i < N; i++)
	{
		id[i] = i;
		size[i] = 1;
	}
}

int UnionFind::find(int p)
{
	while (id[p] != p)	p = id[p];
	return p;
}

bool UnionFind::connected(int p, int q)
{
	return find(p) == find(q);
}

void UnionFind::connect(int p, int q)
{
	int pRoot = find(p);
	int qRoot = find(q);
	if ( pRoot == qRoot ) return;
	if (size[pRoot] > size[qRoot])
	{
		id[pRoot] = qRoot;
		size[pRoot] += size[qRoot];
	}
	else
	{
		id[qRoot] = pRoot;
		size[qRoot] += size[pRoot];
	}
	N--;
}

UnionFind::~UnionFind()
{
	delete id;
	delete size;
}
