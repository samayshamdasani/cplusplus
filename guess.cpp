/*

Title: Guess the Number, guess.cpp, guess.exe
Name: Samay Shamdasani
Description: A program designed to demonstrate a random number generator while allowing a user to "guess" the number.
            
History:
        07/29/2014        New
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int validInput();
int guess;

int main()
{
    int num, errcode, tries = 0;
    char u_name[10];
    
    srand(time(0));   //seed random number generator - based on time
    num = rand() % 100 + 1; // random number between 1 & 100
    
    //start the game
    cout << "Guess My Number Game" << endl << endl;
    
    cout << "Please enter your name:  ";
    
    //Get name
    cin  >> u_name;
    
    do 
    {
         cout << endl << u_name << " I'm thinking of a number between 1-100. Take a guess: " <<endl;
         while (validInput()!=0);
         
         tries++;    //same as tries = tries + 1
         cout << endl;
         if (guess > num)
            //number high or low
            {
                   cout << u_name << " That number is too high!"<< endl;     
                   }
         else if (guess < num)
            {
                   cout << u_name << " That number is too low!"<< endl;                     
                   }
         else 
            {
                   cout << "You found the answer in  " << tries << " tries!";
                   }
                        } while (guess != num);
                        
                        //ending code
                            cin. ignore();
                            cin.get () ;
                            return 0;


                            }    
                            
int validInput()
{
    cin >> guess;
    if (cin.fail())
    {
                   cout << "Not a valid integer!! - Try again" <<endl ;
                   cin.clear();
                   cin.ignore();
                   return 1;
    }                                                       
    if (guess > 100)
    {
              cout << "Number is greater than 100!!- Try again"<<endl;
              cin.clear();
              cin.ignore();
              return 2;
    }                 
    else if (guess <1)
    {
         cout << "Number is less than 1!! - Try again"<<endl;
           cin.clear();
           cin.ignore();
           return 3;
    }     
    
    return 0;
}
