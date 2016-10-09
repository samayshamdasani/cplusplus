/*

Title: Tic Tac Toe, ttt.cpp, ttt.exe
Name: Samay Shamdasani
Description: Tic Tac Toe is a game that is composed of o's and x's. The object is to have your shape form a row either horizontal, vertical, or digagonal. 
            
History:
        07/29/2014        New
        07/31/2014         completed
*/

#include <iostream>

using namespace std;

char square[10] = {'o','1','2','3','4','5','6','7','8','9'};

int checkwin();
void board();

int main()
{
    int player = 1, ctr, choice;
    char mark; 
    
    do
    {
         board();
         player=(player%2)?1:2;
         
        cout << "Player " << player << ", enter a number:  ";
        cin >> choice;
        
        mark= (player ==1) ? 'X' : 'O';
        
        
        if (choice == 1 && square[1] == '1')
           square[1] = mark;
           
        else if (choice == 2 && square[2] == '2')
           square[2] = mark;
           
        else if (choice == 3 && square[3] == '3')
           square[3] = mark;
           
        else if (choice == 4 && square[4] == '4')
           square[4] = mark; 
             
        else if (choice == 5 && square[5] == '5')
           square[5] = mark; 
             
        else if (choice == 6 && square[6] == '6')
           square[6] = mark;
              
        else if (choice == 7 && square[7] == '7')
           square[7] = mark;
              
        else if (choice == 8 && square[8] == '8')
           square[8] = mark;  
           
        else if (choice == 9 && square[9] == '9')
           square[9] = mark; 
           
           else
           {
               cout << "Invalid move, we will find and break you. But, you still get to re-do your move. ";
               player--;
               cin.ignore();
               cin.get();
           }
           ctr=checkwin();
           player++;
           
           } while (ctr==-1);
           
           board();
           if (ctr==1)
              cout << "==> Player " << --player << " wins!";
           else 
                cout << "==>DRAW<==";
           
           cin.ignore();
           cin.get();
           return 0;
}

int checkwin()
{
     /*
    function to return game status
    1 for game with winner
    -1 for game in progress
    0 for game that is a draw
    */
    if (square[1] == square[2] && square [2] == square[3])
       return 1;
       
    else if (square[4] == square[5] && square[5] == square[6])
         return 1;
         
    else if (square[7] == square[8] && square[8] == square[9])
         return 1; 
          
    else if (square[1] == square[4] && square[4] == square[7])
         return 1; 
           
    else if (square[2] == square[5] && square[5] == square[8])
         return 1; 
          
    else if (square[3] == square[6] && square[6] == square[9])
         return 1; 
          
    else if (square[1] == square[5] && square[5] == square[9])
         return 1;  
         
    else if (square[3] == square[5] && square[5] == square[7])
         return 1;  
         
    else if (square[1] != '1' && 
            square[2] != '2' && 
            square[3] != '3' && 
            square[4] != '4' && 
            square[5] != '6' && 
            square[7] != '7' && 
            square[8] != '8' && 
            square[9] != '9' )
    
      return 0;
    
    else
        return -1;
}    
    
void board() //function to draw to tic-tac-toe board
{
     system("cls");
     cout << endl << "Tic - Tac - Toe, Yo" << endl << endl;
     cout << "Player 1 (X) -  Player 2 (0)" << endl << endl;
     
     cout << "     |     |     " << endl;
     cout << "  " << square[1] <<  "  |  " << square[2] <<  "  |  " << square[3] << endl;
     cout << "_____|_____|_____" << endl;
     cout << "     |     |     " << endl;
     cout << "  " << square[4] <<  "  |  " << square[5] <<  "  |  " << square[6] << endl;
     cout << "_____|_____|_____" << endl;
     cout << "     |     |     " << endl;
     cout << "  " << square[7] <<  "  |  " << square[8] <<  "  |  " << square[9] << endl;
     cout << "     |     |     " << endl;
}    

