﻿#include <iostream>
#include "stack.h"
#include "deq.h"
#include "queue.h"

int main()
{
    //
    //
    //test of queue
    
    queue l;
    l.push(1);
    l.push(2);
    l.push(3);
    l.push(4);
    l.push(5);
    l.push(6);
    l.push(7);

    l.pop();
    l.pop();
    l.pop();
    l.pop();
    

    l.display();
    l.~queue();
   
    
    // 
    //
    //
    //test of deq
    /*
    deq de;
    de.push_front(3);
    de.push_front(4);
    de.push_front(7);
    de.push_front(13);
    de.push_front(5);
    de.pop_back();
    de.pop_front();
    de.push_back(145);
    de.print_all();
    */
    //
    //
    //
    //test of stack
    /*
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
    s.push(124);
    s.push(155);

    s.pop();
    s.pop();


    s.print();

    s.empty();
    */
    //
    //
    //


    
}
