#pragma once
#include "Node.cpp"
#include "LinkedList.cpp"

template <class type>
class LinkedList
{
    public:
        /*Constructors*/
        LinkedList();
        LinkedList(const LinkedList<type>& list); //copy constructor
        ~LinkedList();

        /*Public Interfaces*/
        int isEmpty() const;
        int listLength() const;
        int insert(const type& new_entry, int index);
        int remove(int index);

        int clear(); //deletes and deallocates all memory. returns true if successful

        type& getEntry(int index) const; //retrieves the entry at the given index. PRE: index must be between 0 and listLength() 
        int setEntry(const type& newEntry, int index); //inserts the new entry at index. Returns true if successful. PRE: index must be between 0 and listLength()


    private:
      /* Data Members*/
        Node<type> * head;
        int size;

      /* Private Functions*/  
        int addNode(Node<type> to_add); //adds a node to the linkedlist and updates the relevant members
        Node<type>* getNodeAt(int index) const; //gets pointer to node at index. PRE: index >=0 && index < listLength()
};