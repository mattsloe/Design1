//#include "Node.cpp"
#include "LinkedList.h"
#include <iostream>

//Default constructor
template<class type> LinkedList<type>::LinkedList()
{
   head = NULL;
   size = 0;
}

//Copy Constructor
//This implementation uses the object 'type's copy constructor
template<class type> LinkedList<type>::LinkedList(const LinkedList<type>& list)
{
   //Deep-copy List pointed to by head
   size = list.size;
   Node<type>* oldListPtr;

   if(oldListPtr== NULL){ //Original bag is empty
      head = NULL;
   }else{
      //copy first node
      head = new Node<type>; 
      head->data = new type(*(oldListPtr->data)); //use 'type's copy constructor

      //Copy the rest
      Node<type>* newListPtr = head;
      while(oldListPtr->next != NULL){
         oldListPtr = oldListPtr->next; //iterate pointer on old list
         type * nextItem = new type(*(oldListPtr->data)); //use copy constructor to get next item

         //create a new node containing the nextItem
         Node<type>* newNodePtr = new Node<type>;
         newNodePtr->data = nextItem;
         
         //Link new node in at the end
         newListPtr->next = newNodePtr;

         //Iterate pointer on new list
         newListPtr = newListPtr->next;
      }
      newListPtr->next = NULL; //set last node pointer to null
   }
}

//Destructor
template<class type> LinkedList<type>::~LinkedList()
{
   clear();
}

//simple bool function
template<class type> int LinkedList<type>::isEmpty() const
{
  if(size == 0) return true;
  else return false;
}

//accessor for size
template<class type> int LinkedList<type>::listLength() const
{
   return size;
}

//inserts the object into a node and places the node in the right index
template<class type> int LinkedList<type>::insert(const type& new_entry, int index)
{
   if(index >= 0 && index <= size){
      //Create a new node for the entry
      Node<type>* newNode = new Node<type>;
      newNode->data = new type(new_entry); //uses copy constructor to deepcopy
      
      //attach newNode to chain
      if(index == 0){ //Case: insert at head
         newNode->next = head;
         head = newNode;
      }else{ 
         //Find the node before the new node
         Node<type>* prev = getNodeAt(index-1);
         //Insert newNode after prev
         newNode->next = prev->next;
         prev->next = newNode;
      }

      //increment size
      size++;
   }
   return (index >= 0 && index <= size);
}

template<class type> int LinkedList<type>::remove(int index)
{
   //check index bounds
   if(indexInBounds(index)){
      Node<type>* current = NULL;
      if(index == 0){ //remove the first node in the chain
         current = head;
         head = head->next;
      }else{
         Node<type>* previous = getNodeAt(index); //find the node before the one to be deleted
         current = previous->next; //point to node to delete
         previous->next = current->next;
      }
      //delete and deallocate memory
      delete current;
      size--;
   }
   return indexInBounds(index); 
}

//Recursive implementation that calls display(head)
template<class type> int LinkedList<type>::display() const
{
   return displayRecursively(head);
}

//removes the head of the List until the list is empty
template<class type> int LinkedList<type>::clear()
{
   while(!isEmpty()){
      remove(0);
   }
   return 1; //no error handling
} 

//Returns the entry at index by calling getNodeAt()
template<class type> type& LinkedList<type>::getEntry(int index) const
{
   if(indexInBounds(index)){
      Node<type>* nodePtr = getNodeAt(index);
      return nodePtr->data;
   }else{
      //ERROR ERROR
      std::cout << "\nERROR: Index out-of-bounds\n";
   }
}

/* Depricated
template<class type> int LinkedList<type>::setEntry(const type& newEntry, int index)
{
   if(indexInBounds(index)){
      
   }else{
      //ERROR ERROR
      std::cout << "\nERROR: Index out-of-bounds\n";
   }

}


template<class type> int addNode(Node<type> to_add)
{

}
*/
template<class type> Node<type>* LinkedList<type>::getNodeAt(int index) const
{
   //check that index is in range
   if( indexInBounds(index)){
      //count from the beginning of the List
      Node<type>* curPtr = head;
      for (int toSkip = 1; toSkip < index; toSkip++){
         curPtr = curPtr->next;
      }
      return curPtr;
   }else{
      //ERROR ERROR
      std::cout << "\nERROR: Index out-of-bounds.\n";
      return NULL;
   }
}

template<class type> bool LinkedList<type>::indexInBounds(int index) const
{
   return (index >= 0 && index < size);
}

template<class type> int LinkedList<type>::displayRecursively(Node<type>* currentPointer) const
{
   //base case: currentPointer is null
   if(currentPointer != NULL){
      //display the entry at the current pointer
      std::cout << *(currentPointer->data) << '\n';
      //recursively call the function if not at the end of the list
      return displayRecursively(currentPointer->next);
   }else{
      std::cout << '\n';
      return 1;
   }
}