template<typename T>
LinkList<T>::LinkList()
{
	m_HeadNode = new LNode;
	m_HeadNode->next = NULL;
	m_nLength = 0;
}
template<typename T>
LinkList<T>::~LinkList()
{
	LNode p = m_HeadNode;
	while(m_HeadNode)
	{
		p = m_HeadNode;
		m_HeadNode = m_HeadNode->next;
		delete p;
	}
}

template<typename T>
void LinkList<T>::clear()
{
	LNode p = m_HeadNode->next;
	m_HeadNode->next = NULL;
	while(p)
	{
		q = p;
		p = p->next;
		delete q;
	}
	m_nLength = 0;
}

template<typename T>
int LinkList<T>::getLength()
{
	return m_nLength;
}

template<typename T>
LNode LinkList<T>::getElement(int index)
{
	LNode p = m_HeadNode->next;
	j = 0;
	while(p && j<i)
	{
		p = p->next;
		j++;
	}
	if (!p || j>i)
	{
		__private_error("Position Error!");
		exit(1);
	}
	else
	{
		return p->data;
	}
}

template<typename T>
bool LinkList<T>::locateElement(T &ele)
{
	LNode p = m_HeadNode->next;
	int ntemp=0;
	while(P && (p->data!=ele))
	{
		p = p->next;
		ntemp++;
	}
	if (ntemp==0) return false;
	return true;
}
template<typename T>
void LinkList<T>::insert(int loc,T &ele)
{
	LNode p = m_HeadNode;
	j = 0;
	if (loc<0 || loc>m_nLength)
	{
		__private_error("Position Error When Insert!");
		exit(1);
	}
	while(p && j<loc)
	{
		p = p->next;
		++j;
	}
	LNode newnode = new LNode;
	newnode->data = ele;
	newnode->next = p->next;
	p->next = newnode;
	m_nLength++;
}

template<typename T>
void LinkListg<T>::remove(int loc)
{
	if (loc<0 || loc>m_nLength)
	{
		__private_error("Position Error When Insert!");
		exit(1);
	}
	LNode p=m_HeadNode;
	j=0;
	while(p->next && j<i)
	{
		p = p->next;
		j++;
	}
	LNode q = p->next;
	p->next = q->next;
	delete q;
	m_nLength--;
}

template<typename T>
void LinkList<T>::view()
{
	LNode = m_HeadNode;
	while(p)
	{
		cout<<p->data;
		p = p->next;
	}
}

template <typename T> 
void LinkList<T>::__private_error(string s)
{
	cout<<s<<endl;
}
