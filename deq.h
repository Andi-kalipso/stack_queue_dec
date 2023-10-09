#pragma once
#include <iostream>


struct deq_item {
	int data;
	deq_item* next;
	deq_item* prev;
	deq_item(int d, deq_item *n, deq_item *p) {
		data = d;
		next = n;
		prev = p;
	}
};


class deq
{
private:
	deq_item* head;
	deq_item* tail;
	int size;
	
public:
	deq();
	~deq();
	bool empty();
	void push_front(int d);
	void pop_front();
	void print_all();
	void push_back(int d);
	void pop_back();
};

