#include <iostream>
#include "SqList.h"

int main(int argc, char const *argv[])
{
	SqList<int> SqList_int;
	SqList_int.insert(0,12);
	SqList_int.insert(0,16);
	SqList_int.insert(1,11);
	SqList_int.remove(1);
	SqList_int.view();
	SqList<string> SqList_s;
	SqList_s.insert(0,"1ews2qqwe");
	SqList_s.insert(0,"1qwe6qwe");
	SqList_s.insert(1,"1qwe1");
	SqList_s.view();	
	return 0;
}
