#include "deq.h"

deq::deq()
{
	head = NULL;
	tail = NULL;
	size = 0;
}

deq::~deq() 
{
	while (head != NULL) {
		pop_front();
	}
}


bool deq::empty() 
{
	return (size > 0);
}

void deq::push_front(int d)
{
	deq_item* inter = new deq_item(d, head, NULL);
	if (head != NULL) {
		head->prev = inter;
	}
	if (tail == NULL) {
		tail = inter;
	}
	head = inter;
	size++;
}

void deq::pop_front()
{
	if (head == NULL) {
		return;
	}
	deq_item* inter = head->next;
	if (inter != NULL)
		inter->prev = NULL;
	else
		tail = NULL;
	delete head;
	head = inter;	
	size--;
}

void deq::push_back(int d) 
{
	deq_item* inter = new deq_item(d, NULL, tail);
	if (tail != NULL) {
		tail->next = inter;
	}
	if (head == NULL) {
		head = inter;
	}
	tail = inter;
	size++;



}

void deq::pop_back() {
	if (tail == NULL) return;

	deq_item* inter = tail->prev;
	if (inter != NULL)
		inter->next = NULL;
	else
		head = NULL;
	delete tail;
	tail = inter;
	size--;
}



void deq::print_all()
{
	for (int i = 0; i < size; i++) {
		std::cout << head->data << std::endl;
		head = head->next;
	}
}


