# include <string>
# include <stdlib.h> 
# include <iostream>
using namespace std;
# define MAX_LIST_SIZE 300
template <typename T>
class SqList
{
public:
	SqList();
	~SqList();
	// empty the list
	void clear();
	int get_length();
	T& get_element(int index);
	int locate_element(T &ele);
	bool insert(int location, T ele);
	bool remove(int location);
	void view();
private:
	void __private_error(string s);
private:

public:
	T *element;
	int length;
};

//g++不支持模板类的分离编译,
//将SqList.cpp中的代码移到SqList.h中
//去掉SqList.cpp里的包含语句
#include "SqList.cpp"
