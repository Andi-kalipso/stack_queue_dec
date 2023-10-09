#pragma once
#include <iostream>

struct list_item {
	int data;
	list_item* next;

	list_item(int d) {
		data = d;
		next = NULL;
	};
};




class queue
{
private:
	int size;
	list_item* head;
	list_item* tail;

public:
	queue();
	~queue();
	void push(int d);
	void pop();
	bool empty();
	void display();


};

