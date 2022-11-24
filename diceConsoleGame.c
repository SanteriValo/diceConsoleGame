/* Dice game */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// #define

void pressToStart() {
     printf("Press ENTER to start...\n");
     getchar();
}

int main()
    {
    int 
	firstCubeOne = 0, firstCubeTwo = 0,
	secondCubeOne = 0, secondCubeTwo = 0,
       	sumOne = 0, sumTwo = 0;

     srand(time(NULL));

     pressToStart();     
     
     firstCubeOne = 1 + (rand() % 6);
     firstCubeTwo = 1 + (rand() % 6);
     sumOne = firstCubeOne + firstCubeTwo; 
        
     secondCubeOne = 1 + (rand() % 6);
     secondCubeTwo = 1 + (rand() % 6);
     sumTwo = secondCubeOne + secondCubeTwo;

     printf("Result of first player: %d   %d   \nSum: %d\n\n", firstCubeOne, firstCubeTwo, sumOne);

     printf("Press ENTER to play another player...\n");
     getchar(); 

     printf("Result of second player: %d   %d   \nSum: %d\n\n", secondCubeOne, secondCubeTwo, sumTwo);
      
     if (sumOne > sumTwo) 
     printf("Firts player WIN! \n%d is more than %d\n\n", sumOne, sumTwo);
     
     if (sumOne < sumTwo)
     printf("Second player WIN! \n%d is more than %d\n\n", sumTwo, sumOne);
     
     if (sumOne == sumTwo)
     printf("Nobody win... \n%d is equal %d\n", sumOne, sumTwo);

     return 0;   
}
