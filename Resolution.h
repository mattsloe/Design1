#pragma once

#include "LinkedList.h"
#include "Resolution.cpp"

struct Task
{
    char * title;
    int length_to_complete;
    int priority;
};
class Resolution : private LinkedList<Task>
{
    public:
    //Public Interfaces
    Resolution();
    ~Resolution();

    //Adds a task associated with the Resolution
    int addTask(const Task& to_add);
    //Removes an associated task at position 'index'
    int removeTask(int index);
    //Displays the title of the Resolution
    int displayTitle() const;
    //Displays the Tasks associated with the Resolution
    int displayTasks() const;
    //Displays the title and the associated tasks with the Resolution
    int display() const;


    private:
    //Member data and functions
    char * title;
    // Node<Task> * head;
    // does this get inherited from LinkedList?

};