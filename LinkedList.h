#include <iostream>
#include "Node.cpp"
#include "LinkedList.cpp"
using namespace std;

template <class type>
class LinkedList
{
    public:
        /*Constructors*/
        LinkedList();
        ~LinkedList();

        /*Public Interfaces*/
        int display(); //displays all data in the list, returns TRUE if no errors
        int display(int index); //displays the data entry at the index. Returns TRUE if no errors
        

    private:
      /* Data Members*/
        Node<type> * head;
        int size;

      /* Private Functions*/  
        int addNode(Node<type> to_add); //adds a node to the linkedlist and updates the relevant members
        int displayNode(Node<type> to_display); //displays a node to cout
};