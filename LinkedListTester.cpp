#include <iostream>
#include "LinkedList.cpp"
using namespace std;

int main(){

    //Create a LinkedList
    LinkedList<string> myList;

    //Create a string with test info
    string testString= "Fuck";

    //add string to LinkedList
    myList.insert(testString, 0);
    //Display List
    myList.display();
    //add another string to LinkedList
    myList.insert("Test",0);
    //Display List
    myList.display();
    //add another string to LinkedList IN BETWEEN the first two entries
    myList.insert("Fart",1);
    //Display List
    myList.display();
    //Display List Length
    cout << "Length: " << myList.listLength() << '\n';
    //Remove a member of the list & display
    myList.remove(3);
    myList.display();
    //Create new LinkedList using copy constructor
    LinkedList<string> copyList = myList;
    myList.display();
    //delete list

    //END
    cout << "End of the program!\n"; 
    return 0;
}
