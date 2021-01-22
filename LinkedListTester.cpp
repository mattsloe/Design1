#include <iostream>
#include "LinkedList.cpp"
using namespace std;

int main(){

    //Create a LinkedList
    LinkedList<int> myList;

    //Create a string with test info
    int testInt= 99;

    //add string to LinkedList
    myList.insert(testInt, 0);
    //Display List
    myList.display();
    //add another string to LinkedList

    //Display List

    //add another string to LinkedList IN BETWEEN the first two entries

    //Display List

    //Display List Length

    //Remove a member of the list & display

    //Create new LinkedList using copy constructor

    //delete list

    //END
    cout << "End of the program!\n"; 
    return 0;
}