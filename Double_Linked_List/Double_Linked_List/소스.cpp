#include "List.h"
int main() {
	List<int> list;
	list.push_back(5);
	list.push_back(6);
	list.push_front(4);
	list.push_front(2);
	list.push_front(1);
	list.push_back(7);
	list.pop_back();
	list.pop_front();
	list.push_front(8);
	list.insert(6, 3);
	cout<<list.size()<<endl;
	list.show_list();
	return 0;
}