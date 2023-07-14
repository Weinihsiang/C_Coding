#include "reversi.h"


int main(){
    int num;
    printf("Enter the board dimension: ");
    scanf(" %d", &num);
    char arr[26][26];
    printBoard(arr, num);
    char colour, row, column;
    printf("Enter board configuration:\n");
    int real1, real2;
    scanf(" %c %c %c", &colour, &row, &column);
   /*Colour:
    U - for unoccupied
    B - occupied by black
    W - occupied by white
    */
    
    real1 = row-96;
    real2 = column-96;
    arr[real1][real2+1] = colour;
    
    
    bool work = positionInBounds(num, real1, real2);
    
    while(colour!='!'&&row!='!'&&column!='!'){
      scanf(" %c %c %c", &colour, &row, &column);
      real1 = row-96;
      real2 = column-96;
      arr[real1][real2+1] = colour;
      
      bool work = positionInBounds(num, real1, real2);
      
      
    }
    for(int i = 0;i<num+1;i++){
        for(int j = 0; j<num+2;j++){
         printf("%c", arr[i][j]); 
        }
      printf("\n");
      }
  
    
   

    return 0;
}

