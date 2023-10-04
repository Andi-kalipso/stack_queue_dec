#include <iostream>
#include "stack.h"



int main()
{

    //
    //
    //test of stack
    stack s;

    s.empty();

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);
    s.push(8);
    s.push(9);
    s.push(10);
    s.push(11);
    s.push(144);
    s.push(155);

    s.pop();
    s.pop();


    s.print();

    s.empty();
    //
    //
    //


    
}
