#pragma once
#include<iostream>
template <typename T>
struct Node {
	T val;
	Node*left = nullptr;
	Node*right = nullptr;
};
template <typename T>
class CBinarySearch
{
public:
	CBinarySearch();
	~CBinarySearch();
	void insert(T val);
	void remove(T val);
	bool search(T val);
	int size();
	void print_all();
private:
	Node * left;
	Node * right;
};
template <typename T>
CBinarySearch<T>::CBinarySearch()
{
}

template <typename T>
CBinarySearch<T>::~CBinarySearch()
{
}

template<typename T>
inline void CBinarySearch<T>::insert(T val)
{
}

template<typename T>
inline void CBinarySearch<T>::remove(T val)
{
}

template<typename T>
inline bool CBinarySearch<T>::search(T val)
{
	return false;
}

template<typename T>
inline int CBinarySearch<T>::size()
{
	return 0;
}

template<typename T>
inline void CBinarySearch<T>::print_all()
{
}

