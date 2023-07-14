#include "reversi.h"
//
// Author:
//


void printBoard(char board[][26], int n){
  for (int row = 0; row < 26; row++) {
    for (int col = 0; col < 26; col++) {
        if (row == 0 && col == 0) {
            board[row][col] = ' ';
          }
        else if(row ==0&&col == 1)
          board[row][col]= ' ';
        else if (row == 0) {
            board[row][col] = 'a' + col - 2;
        } 
        else if (col == 0) {
            board[row][col] = 'a' + row - 1;
        } 
        else {
            board[row][col] = ' ';
        }
    }
}
    
    for(int i = 1;i<n+1;i++){
        for(int j = 2; j<n+2;j++){
            board[i][j] = 'U';
          if(i == n/2 && j == n/2+1)
            board[i][j] = 'W';
          else if(i == n/2+1 && j == n/2+2)
            board[i][j] = 'W';
          else if(i == n/2+1 && j == n/2+1)
            board[i][j] = 'B';
          else if(i == n/2 && j == n/2+2)
            board[i][j] = 'B';
        }
    }

  for(int i = 0;i<n+1;i++){
        for(int j = 0; j<n+2;j++){
         printf("%c", board[i][j]); 
        }
    printf("\n");
    }
}

bool positionInBounds(int n, int row, int col){
    if(row>n ||col>n ||row<=0||row<=0){
      return false;
    }
  else
      return true;
  
}

bool checkLegalInDirection(char board[][26], int n, int row, int col,
                           char colour, int deltaRow, int deltaCol) {
}
