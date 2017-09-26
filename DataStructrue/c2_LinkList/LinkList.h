#ifndef LINKLIST_H
#define LINKLIST_H

# include <stdlib.h>
# include <string>
using namespace std;

template<typename T>
typedef struct node
{
	T data;
	struct node *next;
}node;
typedef node* LNode;
template<typename T>
class LinkList
{
public:
	LinkList();
	~LinkList();
	void clear();
	int getLength();
	LNode getElement(int index);
	bool locateElement(T &ele);
	void insert(int loc, T ele);
	void remove(int loc);
	void view();
private:
	void __private_error(string s);
private:
	LNode m_HeadNode;
	int m_nlenght;
};

#include "LinkList.cpp"

#endif
