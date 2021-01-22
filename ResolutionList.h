#pragma once

#include "LinkedList.h"
#include "Resolution.h"
#include "ResolutionList.cpp"

class ResolutionList : private LinkedList<Resolution>
{
    public:
    //Interface
    
    int addResolution(const Resolution& to_add);
    int addTask(const char& resolution_title, const Task& to_add);

    int deleteResolution(int index);
    int deleteTask(const char& resolution_title, int task_index);

    int display() const;
    int display(int index) const;    

    
    //
    private:
    //Data Members and Functions
    
    Resolution& getResolution(const char& search_title); //returns reference to a Resolution in the list that matches the search_title
    
    //inherited from LinkedList?

    

};