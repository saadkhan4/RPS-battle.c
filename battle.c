#include <math.h>
#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

int game(char player , char computer)
{
    // if both the player and computer
    // has the same thing.
    if (player == computer)
    {
        return -1;
    }
    // if player's choice is paper
    // and computer's choice is stone.
    if (player == 'p' && computer == 's')
    {

        return 1;
    }
    // if player's choice is stone
    // computer's choice is paper.
    if (player == 's' && computer == 'p')
    {
        return 0;
    }
    // if player's choice is stone
    // computer's choice is scissor.
    if (player == 's' && computer == 'o')
    {
        return 1;
    }
    // if player's choice is scissor
    // computer's choice is stone.
    if (player == 'o' && computer == 's')
    {
        return 0;
    }
    // if player's choice is paper
    // if computer's choice is scissor.
    if (player == 'p' && computer == 'o')
    {
        return 0;
    }
    // if player's choice is scissor
    // if computer's choice is paper.
    if (player == 'o' && computer == 'p')
    {
        return 1;
    }
}

// UNDER-HOOD CODE.
int main()
{
  //stores random number
  int n;

  char player, computer, result;

  // choose the random number everytime.
  srand(time(NULL));
   
  // make the random number less than
  // 100, divide by hundred
  n = rand() % 100;
   
  // I assumed 100 will partially divide into
  // rock , paper, scissors.
  if (n < 33)
  
    // 's' is indicating stone.
    computer = 's';

  else if (n > 33 && n < 66)
   // 'p' is indicating paper.
    computer = 'p';

  else
    //'o' is indicating scissors.
    computer = 'o';

  printf("\n\n\n\n\t\t\t\tEnter s for STONE, p for PAPER, o for SCISSORS\n\n\n\n\t\t\t\t");

  // input from the user.
  scanf("%c" ,&player);

  // function to run the game.
  result = game(player, computer);

  if (result == -1)
  {
      printf("\n\n\t\t\t\tGAME DRAW! :(\n");
  }
  else if (result == 1)
  {
      printf("\n\n\t\t\t\tYOU WON! :)\n");
  }
  else 
  {
      printf("\n\n\t\t\t\tYOU LOST! :(\n");
  }
  printf("\t\t\t\tplayer choose : %c and computer choose : %c\n", player, computer);

  return 0;
}
