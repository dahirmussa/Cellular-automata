#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "header.h" 

extern int i;
extern int j; 
extern int n;
extern int Cells[100][100];

// Roughly 25 % Sharks, 5 % being children (who can not yet breed)
// Roughly 50 % Fish, 10 % being children (who can not yet breed)
// Roughly 25 % empty

void newOcean()
{
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			float rand_number = ( (float) rand() ) / RAND_MAX; // Rand_Number for each element
		
			if(rand_number <= 0.20)
			{
				Cells[i][j] = 13; // Adult Shark
			}
			else if((rand_number > 0.20) && (rand_number <= 0.25))
			{
				Cells[i][j] = 11; // Baby Shark
			}
			else if((rand_number > 0.25) && (rand_number <= 0.65))
			{
				Cells[i][j] = 3; // Adult Fish
			}
			else if((rand_number > 0.65) && (rand_number <= 0.75))
			{
				Cells[i][j] = 1; // Baby Fish
			}
			else if(rand_number > 0.75)
			{
				Cells[i][j] = 0; // Empty
			}
		}
	}
}