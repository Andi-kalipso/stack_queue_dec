#pragma once
#include <iostream>


class stack
{
private:
	int size;

	int* arr;
	int ind_on_elem;

	bool empty_par;
	bool full_par;


	bool is_empty(bool empt);
	void full();

public:

	stack();
	~stack();

	void print();
	void push(int elem);
	void pop();
	void empty();

};

