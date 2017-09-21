template <typename T>
SqList<T>::SqList()
{
	element = new T[MAX_LIST_SIZE];
	if(!element)
	{
		__private_error("Overflow!");
		exit(1);
	}
	length = 0;
}
template <typename T> 
SqList<T>::~SqList()
{
	delete [] element;
	length = 0;
}
template <typename T> 
void SqList<T>::clear()
{
	length = 0;
}

template <typename T> 
int SqList<T>::get_length()
{
	return length;
}

template <typename T> 
T& SqList<T>::get_element(int i)
{
	if (i<0 && i>length)
	{
		__private_error("Position Error!");
		exit(1);
	}
	
	return element[i];
}

template <typename T> 
int SqList<T>::locate_element(T &ele)
{
	int i=0;
	T *p = element;
	while(i<length && *p++!=ele) i++;
	if(i<length)
		return i;
	else
		return -1; // if not located
}

template <typename T> 
bool SqList<T>::insert(int loc, T ele)
{
	if (loc<0 || loc>length) 
	{
		__private_error("Position Error!");
		return false;
	}
	if (loc>MAX_LIST_SIZE)
	{
		__private_error("List Overflow!");
		return false;
	}
	if (length>0)
	{
		T *q = &(element[loc]);
		T *p = &(element[length-1]);
		for (; p>=q; --p) *(p+1) = *p;
		*q = ele;
	}
	else
	{
		element[0]=ele;
	}
	++length;
	return true;
}
template <typename T>
bool SqList<T>::remove(int loc)
{
	if (length==0)
	{
		__private_error("Empty List");
		return false;
	}
	if (loc<0 || loc>length)
	{
		__private_error("Position Error!");
		return false;
	}

	T *q = &(element[loc]);
	T *p = &(element[length-1]);
	for (; q<p; ++q) *q = *(q+1);
	--length;
	return true;
}
template <typename T> 
void SqList<T>::view()
{
	if(length==0) 
	{
		__private_error("Empty List");
		return;
	}
	int i=0;
	T *p = element;
	while(i<length){cout<<*p++<<endl;i++;}
}
template <typename T> 
void SqList<T>::__private_error(string s)
{
	cout<<s<<endl;
	//exit(1);
}
