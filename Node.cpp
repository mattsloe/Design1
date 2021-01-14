#pragma once
/*Defining a Node template for LinkedList*/

template <class type> //this template should be able to hold different types of data
struct Node
{
    type data;
    Node<type> * next;
};