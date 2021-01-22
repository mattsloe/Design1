#pragma once
template <class type> //this template should be able to hold different types of data
struct Node
{
    type * data;
    Node<type> * next;
};
//template <class type> using Node = struct NodeStruct<type>;

template <class type>
class LinkedList
{
    public:
        /*Constructors*/
        LinkedList();
        LinkedList(const LinkedList<type>& list); //copy constructor
        ~LinkedList();

        /*Public Interfaces*/
        int isEmpty() const; //returns true if length= 0
        int listLength() const; //returns the length of the collection
        int insert(const type& new_entry, int index); //inserts a new entry at the index
        int remove(int index);
        int display() const; //displays the contents of the list
        //int display(int index) const; //displays the entry at 'index'
        int clear(); //deletes and deallocates all memory. returns true if successful

        type& getEntry(int index) const; //retrieves the entry at the given index. PRE: index must be between 0 and listLength() 
        //[[repeat of insert]] int setEntry(const type& newEntry, int index); //inserts the new entry at index. Returns true if successful. PRE: index must be between 0 and listLength()


    private:
      /* Data Members*/
        Node<type> * head;
        int size;

      /* Private Functions*/  
        //int addNode(Node<type> to_add); //adds a node to the linkedlist and updates the relevant members
        Node<type>* getNodeAt(int index) const; //gets pointer to node at index. PRE: index >=0 && index < listLength()
        bool indexInBounds(int index) const; //Returns true if passed in index is in bounds
        int displayRecursively(Node<type>*) const; //recursive function to display the List
};