#include <iostream>
#include <cctype> //for using the tolower() function
//#include "ResolutionList.h"
using namespace std;

const int SIZE=100;
void addResolution();
void addTask();
void displayResolution();
void displayTasks();
void removeResolution();
void removeTask();


int main(){
   char ch=' ';
   //Prompt code
    while(ch != 'q'){
        cout << "\nNEW YEAR\'S RESOLUTIONS" << endl; /*Here is the copy for the menu choices*/
        cout << "1 | Add a resolution" << endl
            << "2 | Add a task to a resolution" << endl
            << "3 | Display Resolution list" << endl
            << "4 | Display tasks for a given resolution" << endl
            << "5 | Remove resolution" << endl
            << "6 | Remove task from a resolution" << endl
            << "q | Quit the program" << endl;
        cout << "What is your choice? ";

        cin >> ch;
        cin.clear();
        cin.ignore(1000,'\n');
        tolower(ch); //convert input to lowercase
        switch(ch) {
        case '1': //add a resolution
        addResolution();
        break;
        case '2': //add a task to a resolution
        addTask();
        break;
        case '3': //Display resolution list 
        displayResolution();
        break;
        case '4': //Display tasks for a given resolution
        displayTasks();
        break;
        case '5': //Remove Resolution
        removeResolution();
        break;
        case '6': //Remove task from a resolution
        removeTask();
        break;
        case 'q': //quit
        break;
        default: //do nothing if invalid input 
        cout << "Invalid input"<<endl;
        }
    }
    return 0;
}

void addResolution()
{
    cout << "addResolution()";

}

void addTask()
{
    cout <<"addTask()";

}

void displayResolution()
{
    cout << "displayResolution()";

}

void displayTasks()
{
    cout << "displayTasks()";

}

void removeResolution()
{
    cout << "removeResolution()";

}

void removeTask()
{
    cout << "removeTask()";

}