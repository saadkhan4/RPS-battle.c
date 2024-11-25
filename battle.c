#include <math.h>
#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

int game(char Player , char Computer)
{
    // if both the player and computer 
    // has the same thing.
    if (Player == Computer)
    {
        return -1;
    }
    // if player's choice is paper
    // and computer choice is stone.
    if (Player == 'p' && Computer == 's')
    {
        return 0;
    }
    


}
