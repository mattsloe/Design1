//#include "Node.cpp"
#include "LinkedList.h"


template<class type> LinkedList<type>::LinkedList()
{
   head = NULL;
   size = 0;
}

template<class type> LinkedList<type>::LinkedList(const LinkedList<type>& list)
{
   //Deep-copy List pointed to by head
   size = list.size;
}

template<class type> LinkedList<type>::~LinkedList()
{
   //Delete and deallocate the Linked List
   Node<type> * temp = NULL;
   while( head!= NULL ){
      temp = head->next;
      delete head;
      head = temp;
   }
}

template<class type> int LinkedList<type>::isEmpty() const
{
  if(size == 0) return true;
  else return false;
}

template<class type> int LinkedList<type>::isEmpty() const
{

}
template<class type> int LinkedList<type>::listLength() const
{

}

template<class type> int LinkedList<type>::insert(const type& new_entry, int index)
{

}

template<class type> int LinkedList<type>::remove(int index)
{

}

template<class type> int LinkedList<type>::clear()
{

} 

template<class type> type& LinkedList<type>::getEntry(int index) const
{

}

template<class type> int LinkedList<type>::setEntry(const type& newEntry, int index)
{

}

template<class type> int addNode(Node<type> to_add)
{

}

template<class type> Node<type>* LinkedList<type>::getNodeAt(int index) const
{

}
