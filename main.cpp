#include "ResolutionList.h"
#include <iostream>
#include <cctype> //for using the tolower() function
using namespace std;

const int SIZE=100;

int main(){
   char ch=' ';
   //Prompt code
    while(ch != 'q'){
        cout << "What is your choice? ";
        cin >> ch;
        cin.clear();
        cin.ignore(1000,'/n');
        tolower(ch); //convert input to lowercase
        switch(ch) {
        case '1': cout<<"Case1 ";
        break;
        case '2': cout<<"Case2 ";
        break;
        case '3': cout<<"Case3 ";
        break;
        case '4': cout<<"Case4 ";
        break;
        case '5': //code here
        break;
        case '6': //code here
        break;
        case '7': //code here
        default: cout<<"Default ";
        }
    }
    return 0;
}