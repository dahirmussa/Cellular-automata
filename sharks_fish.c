#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "header.h" //#include "libmainprogram.h"// 

// global variables. 
int a; 
int i; 
int j;
int numberofgenerations = 20;
int n = 100; 
int Cells[100][100];
int adultFish = 0;
int adultShark = 0;
int babyFish = 0;
int babyShark = 0;


int main()
{
	srand((unsigned int)time(NULL)); 
	
	newOcean(); // Randomly Generated, a new ocean
	
	for(a = 1; a <= numberofgenerations; a++)
	{
		printf("GENERATION: %d\n", a); // %d means print integer, in this case a. \n new line
		
		for(i = 0; i < n; i++) // [100][100]
		{
			for(j = 0; j < n; j++)
			{
				if((Cells[i][j] > 2) && (Cells[i][j] < 11))
				{
					adultFish += 1;
				}
				else if((Cells[i][j] > 12) && (Cells[i][j] < 30))
				{
					adultShark += 1;
				}
				else if((Cells[i][j] < 3) && (Cells[i][j] > 0))
				{
					babyFish += 1;
				}
				else if((Cells[i][j] < 13) && (Cells[i][j] > 10))
				{
					babyShark += 1;
				}
					
				printf("%d\t", Cells[i][j]);
			}
		}
		
		printf("There are %d fish.", adultFish);
		printf("There are %d sharks.", adultShark);
		printf("There are %d baby fish.", babyFish);
		printf("There are %d baby sharks.", babyShark);
	}
	
	adultFish = 0;
	adultShark = 0;
	babyFish = 0;
	babyShark = 0;
} 