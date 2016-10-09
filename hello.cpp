/* My first program in C++

Title: hellp.cpp, hello.exe
Name: Samay Sham dasani
Description: This program displays a message to the user.
            
History:
        07/28/2014        New
*/

#include <iostream>

using namespace std;

int main()
{
    //decalare variables
    char u_name[20];
    int yage;
    char fcolor[20];
    //Display to screen
    cout << "Hello World!" << endl << endl;
    cout << "Please enter your name:  ";
    
    //Get name
    cin  >> u_name;
    
    //Display custom response
    cout << endl << "Hi " << u_name << ". Nice to meet you!" << endl << endl;
   
   //Display to screen
    cout << u_name << " I'm curious, how old are you?:  " ;
    
    //Get age
    cin  >> yage;
    
    //Display to Screen
    cout << endl << "Cool! I can't believe you're " << yage << " years old!" << endl << endl;
    cout << "What's your favorite color?:  ";
    
    //Get color
    cin  >> fcolor;
    
    //Display to Screen 
    cout << endl << "Awesome my favorite color is "<< fcolor << " too!" << endl;
    cout << endl << "I have to go now soo goodbye, it was mice meeting you!" << endl << endl;
    
    //end function
    system("PAUSE");
    return 0;
}


