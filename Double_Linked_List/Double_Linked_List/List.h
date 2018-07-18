#pragma once
#include <iostream>
using std::cout;
using std::sin;
using std::endl;

template <typename T>
struct Node {
	T info;
	Node * next = nullptr;
	Node * prev = nullptr;
};
template <typename T>
class List
{
public:
	List();
	~List();
	void show_list();
	void push_front(T val);
	void push_back(T val);
	void pop_front();
	void pop_back();
	void insert(T pos, T val);
	int size();
private:
	Node<T> * list = nullptr;
	Node<T> * step;
};


template<typename T>
inline void List<T>::push_front(T val)
{
	if (list == nullptr) {
		list = new Node<T>;
		list->info = val;
		step = list;
	}
	else {
		while (step->prev != nullptr) {  //step을 맨 처음으로 가져다 둡니다.
			step = step->prev;
		}
		step->prev = new Node<T>;
		step->prev->info = val;
		step->prev->next = step; //밑의 코드는 step을 맨 마지막으로 가져다 둡니다.
		while (step->next != nullptr) {
			step = step->next;
		}
	}
}

template<typename T>  // next를 연결해주고 prev를 이어준다.
inline void List<T>::push_back(T val)
{
	if (list == nullptr) {
		list = new Node<T>;
		list->info = val;
		step = list;
	}
	else {
		step->next = new Node<T>;
		step->next->info = val;
		step->next->prev = step; //다음 노드의 prev를 설정
		step = step->next; //step을 맨 마지막으로 가져다 둠
	}
}

template<typename T>
inline void List<T>::pop_front()
{
	while (step->prev != nullptr) {  //step을 맨 처음으로 가져다 둡니다.
		step = step->prev;
	}
	step = step->next;
	step->prev = nullptr;
}

template<typename T>
inline void List<T>::pop_back()
{
	//Node<T>* del = step->prev;
	step = step->prev;
	step->next = nullptr;
}

template<typename T>
inline void List<T>::insert(T pos, T val)
{
	Node<T>* insert1;
	Node<T>* insert2 = step;

	while (step->next != nullptr) {
	step = step->next;
	}
	if (step->info == pos) {
	push_back(val);
	}
	else
	{
		while (step->prev != nullptr) {  //step을 맨 처음으로 가져다 둡니다.
			step = step->prev;
		}
		while (step->info != pos) {
			step = step->next;
			insert2 = step->next;
		}
		insert1 = new Node<T>;
		insert1->info = val;
		step->next = insert1;
		insert1->next = insert2;
		insert2->prev = insert1;
		insert1->prev = step;
	}
	
}

template<typename T>
inline int List<T>::size()
{
	int count=0;
	while (step->prev != nullptr) {  //step을 맨 처음으로 가져다 둡니다.
		step = step->prev;
	}
	while (step->next != nullptr) {
		step = step->next;
		count += 1;
	}
	return count+1;
}

template <typename T>
List<T>::List()
{


}

template <typename T>
List<T>::~List()
{
}

template<typename T>
inline void List<T>::show_list()
{
	while (step->prev != nullptr) {  //step을 맨 처음으로 가져다 둡니다.
		step = step->prev;
	}
	if (step != nullptr) {
		while (step->next != nullptr) {
			cout << step->info << " -> ";
			step = step->next;
		}
		cout << step->info << std::endl;
	}
}

