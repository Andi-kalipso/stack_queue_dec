#include "stack.h"




stack::stack()
{
	size = 10;
	arr = new int[size];
	ind_on_elem = 0;
	empty_par = true;
	full_par = false;
}

stack::~stack() 
{
	delete[] arr;


}

void stack::push(int elem)
{
	if (full_par == true) {std::cout << "error of memory\n";}
	else {
		arr[ind_on_elem] = elem;
		ind_on_elem++;
		is_empty(false);
		if (ind_on_elem == size) {
			full_par = true;
			full();
		}
	}
	
	
}

void stack::pop()
{
	arr[ind_on_elem] = NULL;
	ind_on_elem--;
	if (ind_on_elem < 0) {
		is_empty(true);
		ind_on_elem = 0;
	}
}

bool stack::is_empty(bool empt)
{
	empty_par = empt;
	return empty_par;
}

void stack::empty()
{
	if (empty_par == true) {std::cout << "The stack is empty\n";}
	else {std::cout << "The stack is NOT empty\n";}
}

void stack::full()
{
	int* reset_arr = new int[size];
	for (int i = 0; i < size; i++) {
		reset_arr[i] = arr[i];
	}

	delete[] arr;

	size = size * 2;
	arr = new int[size];

	for (int i = 0; i < size / 2; i++) {
		arr[i] = reset_arr[i];
	}

	full_par = false;
	delete[] reset_arr;
}



void stack::print()
{
	for (int i = 0; i < ind_on_elem; i++) {
		std::cout << arr[i] << '\n';
	}
	
}