#include <iostream>

using namespace std;
bool checkWin(char board[][3], char player);
void printBoard (char board[3][3]);

void alter(char board[][3]); //all the voids similar to this call back to there respected funtions to alther the board after an input
void alter_1(char board[][3]);

void alter1(char board[][3]);
void alter1_1(char board[][3]);

void alter2(char board[][3]);
void alter2_1(char board[][3]);

void alter3(char board[][3]);
void alter3_1(char board[][3]);

void alter4(char board[][3]);
void alter4_1(char board[][3]);

void alter5(char board[][3]);
void alter5_1(char board[][3]);

void alter6(char board[][3]);
void alter6_1(char board[][3]);

void alter7(char board[][3]);
void alter7_1(char board[][3]);

void alter8(char board[][3]);
void alter8_1(char board[][3]);

int main()
{
  bool playAgain = true;
  int xpoint = 0;
  int opoint = 0;
  string Play = "Y";
  
  while (Play == "Y" || Play == "y") { //runs code while value play is equal to y   	  
   bool win = false;
   int turn = 0;
   string input;
   
   
    cout << "Welcome to Tic Tac Toe! The first player is X and the Second Player is O " << endl;
     cout << "Input values like c1 or b2 to pick a spot (rows are a-c and columns are 1-3)" << endl;
    cout << "   " << endl;
    
    char board[3][3] = { { ' ', ' ', ' ' }, 
                         { ' ', ' ', ' ' }, 
                         { ' ', ' ', ' ' } }; //array generates board
    
       board[0][0]= ' ';
       board[0][1]= ' ';
       board[0][2]= ' ';
       
       board[1][0]= ' ';
       board[1][1]= ' ';
       board[1][2]= ' ';
       
       board[2][0]= ' ';
       board[2][1]= ' ';
       board[2][2]= ' ';
       
    printBoard(board); 
    
    
    
    while(win != true){ //runs code while there isnt a win
    cin >> input; 
    int currentPlayer;
    char playerSymbol; 
    
    
    if (turn % 2 == 0) { //checks if value is even or odd and depending on that chooses players turn
        currentPlayer = 1; 
    } else {
        currentPlayer = 2; 
    }
    
    if (currentPlayer == 1) { //gives the player a symbol based off if its even or odd
        playerSymbol = 'X'; 
    } else {
        playerSymbol = 'O'; 
    }
    
    if (input == "a1" && board[0][0] != 'X' && board[0][0] != 'O') { //this if statment and the ones similae checks if the input is valid and if a space isnt already filled. If it isnt it will fill the space with and x or o
        if (currentPlayer == 1) {
            alter(board); //changes the value in the board to x
            cout << "Player 1 turn" << endl;
            cout << " " << endl;
        } else {
            alter_1(board);  //changes the value in the board to o
            cout << "Player 2 turn" << endl;
            cout << " " << endl;
        }
        printBoard(board); // prints the board
        turn++; //adds turn to check whos turn it is calling back to the odd or even statment above
    } else if (input == "a2" && board[0][1] != 'X' && board[0][1] != 'O') {
        if (currentPlayer == 1) {
            alter1(board); 
            cout << "Player 1 turn" << endl;
            cout << " " << endl;
        } else {
            alter1_1(board);  
            cout << "Player 2 turn" << endl;
            cout << " " << endl;
        }
        printBoard(board);
        turn++;
    } else if (input == "a3" && board[0][2] != 'X' && board[0][2] != 'O') {
        if (currentPlayer == 1) {
            alter2(board);
            cout << "Player 1 turn" << endl;
            cout << " " << endl;
        } else {
            alter2_1(board);
            cout << "Player 2 turn" << endl;
            cout << " " << endl;
        }
        printBoard(board);
        turn++;
    } else if (input == "b1" && board[1][0] != 'X' && board[1][0] != 'O') {
        if (currentPlayer == 1) {
            alter3(board);
            cout << "Player 1 turn" << endl;
            cout << " " << endl;
        } else {
            alter3_1(board);
            cout << "Player 2 turn" << endl;
            cout << " " << endl;
        }
        printBoard(board);
        turn++;
    } else if (input == "b2" && board[1][1] != 'X' && board[1][1] != 'O') {
        if (currentPlayer == 1) {
            alter4(board); 
            cout << "Player 1 turn" << endl;
            cout << " " << endl;
        } else {
            alter4_1(board);
            cout << "Player 2 turn" << endl;
            cout << " " << endl;
   }
        printBoard(board);
       turn++;
    } else if (input == "b3" && board[1][2] != 'X' && board[1][2] != 'O') {
        if (currentPlayer == 1) {
            alter5(board);  
            cout << "Player 1 turn" << endl;
            cout << " " << endl;
        } else {
            alter5_1(board);  
           cout << "Player 2 turn" << endl;
            cout << " " << endl;
     }
        printBoard(board);
        turn++;
    } else if (input == "c1" && board[2][0] != 'X' && board[2][0] != 'O') {
        if (currentPlayer == 1) {
            alter6(board);
            cout << "Player 1 turn" << endl;
            cout << " " << endl;
  } else {
            alter6_1(board);
            cout << "Player 2 turn" << endl;
            cout << " " << endl;
        }
        printBoard(board);
        turn++;
    } else if (input == "c2" && board[2][1] != 'X' && board[2][1] != 'O') {
        if (currentPlayer == 1) {
            alter7(board); 
            cout << "Player 1 turn" << endl;
            cout << " " << endl;
        } else {
            alter7_1(board); 
            cout << "Player 2 turn" << endl;
            cout << " " << endl;
        }
        printBoard(board);
        turn++;
    } else if (input == "c3" && board[2][2] != 'X' && board[2][2] != 'O') {
        if (currentPlayer == 1) {
            alter8(board);
            cout << "Player 1 turn" << endl;
            cout << " " << endl;
        } else {
            alter8_1(board);
            cout << "Player 2 turn" << endl;
            cout << " " << endl;
        }
        printBoard(board);
        turn++;
    } else {
     cout << "Invalid input" << endl;
    }

    if (checkWin(board, playerSymbol)) {
      win = true; 
        cout << "Player " << currentPlayer << " wins!" << endl;
        if(currentPlayer == 1){
           xpoint++;
        } else {
            opoint++;
        }
        cout << "Player 1: " << xpoint << " Player 2: " << opoint << endl;
    }   
    if (turn == 9 && win == false) { //when turn is all the way to 9 its calls for a tie then askes if the players want to try again 
        cout << "Tie!" << endl;
        win = true; //dosent mean a tie is true it just here so players have an option to try again
        }
    }
    
    if(win == true){ //allow the player to play again if they enter y and thanks the player and ternimates if entered n, ternimates if any other value is inputed
      cout << "Play again? (y/n)" << endl;
        cin >> Play;
         if (Play == "N" || Play == "n") { 
            cout << "Thanks For Playing!!!" << endl;
            playAgain = false; 
        } 
      }
   }
}

void alter(char board[][3]){ //this function and the ones similar alter the value in the grid to x or o when function is is called
  board[0][0] = 'X';
}
void alter_1(char board[][3]){
  board[0][0] = 'O';
}
void alter1(char board[][3]){
  board[0][1] = 'X';
}
void alter1_1(char board[][3]){
  board[0][1] = 'O';
}
void alter2(char board[][3]){
  board[0][2] = 'X';
}
void alter2_1(char board[][3]){
  board[0][2] = 'O';
}
void alter3(char board[][3]){
  board[1][0] = 'X';
}
void alter3_1(char board[][3]){
  board[1][0] = 'O';
}
void alter4(char board[][3]){
  board[1][1] = 'X';
}
void alter4_1(char board[][3]){
  board[1][1] = 'O';
}
void alter5(char board[][3]){
  board[1][2] = 'X';
}
void alter5_1(char board[][3]){
  board[1][2] = 'O';
}
void alter6(char board[][3]){
  board[2][0] = 'X';
}
void alter6_1(char board[][3]){
  board[2][0] = 'O';
}
void alter7(char board[][3]){
  board[2][1] = 'X';
}
void alter7_1(char board[][3]){
  board[2][1] = 'O';
}
void alter8(char board[][3]){
  board[2][2] = 'X';
}
void alter8_1(char board[][3]){
  board[2][2] = 'O';
}


void printBoard (char board[3][3]){ //genrates and prints the tic tac toe board
        cout << "-------\n";
    for (int a = 0; a < 3; a++){
            cout  << "|" ;
        for (int b = 0; b < 3; b++){
            cout << board[a][b] << "|";
        }
        cout << "\n-------\n";
    }

}


bool checkWin(char board[][3], char player) { //checks all win combonations returning true or false
   
    if (board[0][0] == player && board[0][1] == player && board[0][2] == player){
      return true;   
    } 
    if (board[1][0] == player && board[1][1] == player && board[1][2] == player){
      return true; 
    }
    if (board[2][0] == player && board[2][1] == player && board[2][2] == player){
      return true;   
    } 
    if (board[0][0] == player && board[1][0] == player && board[2][0] == player){
      return true;   
    } 
    if (board[0][1] == player && board[1][1] == player && board[2][1] == player){
      return true;  
    } 
    if (board[0][2] == player && board[1][2] == player && board[2][2] == player){
      return true;  
    } 
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player){
      return true; 
    } 
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player){
      return true;   
    } 
    return false; 
}
