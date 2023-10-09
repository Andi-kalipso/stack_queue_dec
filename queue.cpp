#include "queue.h"


queue::queue() {
	head = NULL;
	tail = NULL;
	size = 0;
}

queue::~queue() {
	if (empty()) {
		return;
	}
	else {
		while (head != nullptr) {
			list_item* inter = head;
			head = head->next;
			delete inter;
		}
	}
}

void queue::push(int d)
{
	list_item* inter = tail;
	tail = new list_item(d);
	if (size == 0) {
		head = tail;
	}
	else {
		inter->next = tail;
	}
	size++;
}

void queue::pop()
{
	size--;
	list_item* inter = head;
	inter->data = NULL;
	head = head->next;
	delete inter;
}

bool queue::empty()
{
	return head == tail;
}

void queue::display()
{
	for (int i = 0; i < size; i++) {
		if (empty() == 0 && size == 0) {
		}
		else {
			std::cout << head->data << std::endl;
		}
		head = head->next;
	}
}





