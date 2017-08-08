#pragma once

class UnionSet
{
public:
	UnionSet(int size)
		:_size(size+1)
	{
		_a=new int[size+1];
		memset(_a,-1,sizeof(int)*(size+1));
	}
	~UnionSet()
	{
		delete[]_a;
		_size=0;
	}
	void Merge(int x1,int x2)
	{
		int root1=_GetRoot(x1);
		int root2=_GetRoot(x2);
		if(root1 != root2)
		{
			_a[root1] += _a[root2];
			_a[root2] = root1;
		}
	}
	int CountFriends()
	{
		int count=0;
		for(int i=0;i<_size;++i)
		{
			if(_a[i] < 0)
			{
				count++;
			}
		}
		return count-1;
	}
protected:
	int _GetRoot(int index)
	{
		int root=index;
		while(_a[root] >= 0)
		{
			root=_a[root];
		}
		return root;
	}
protected:
	int *_a;
	int _size;
};
