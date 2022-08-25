#include <stdio.h>
#include <stdlib.h>
#include <time.h>

extern int i;
extern int j; 
extern int Cells[100][100];
extern int fishNeighbor;
extern int sharkNeighbor;

void checkCellStates()
{
	// Generate Random Float Point Number
	float rand_number = ( (float) rand() ) / RAND_MAX;

	// Fish Code
	
	if((Cells[i][j] > 0) && (Cells[i][j] < 11)) // Meaning Fish
	{
		if(Cells[i][j] > 2) // Fish Breeding
		{
			if((Cells[i - 1][j - 1] > 2) && (Cells[i - 1][j - 1] < 11)) // Row Above [i][j] // i-1 is North, j-1 is West... > 2 AND < 11 as fish can only breed between 3 and 10
			{
				if(Cells[i - 1][j] == 0) // 0 meaning empty
				{
					Cells[i - 1][j] = 1; 
				}
				else if(Cells[i][j - 1] == 0) // if Cells[i - 1][j] is not empty try here!
				{
					Cells[i][j - 1] = 1;
				}
			}
			else if((Cells[i - 1][j] > 2) && (Cells[i - 1][j] < 11)) // Row Above [i][j]
			{
				if(Cells[i - 1][j - 1] == 0)
				{
					Cells[i - 1][j - 1] = 1;
				}
				else if(Cells[i - 1][j + 1] == 0)
				{
					Cells[i - 1][j + 1] = 1;
				}
				else if(Cells[i][j - 1] == 0)
				{
					Cells[i][j - 1] = 1;
				}
				else if(Cells[i][j + 1] == 0)
				{
					Cells[i][j + 1] = 1;
				}				
			}
			else if((Cells[i - 1][j + 1] > 2) && (Cells[i - 1][j + 1] < 11))  // Row Above [i][j]
			{
				if(Cells[i - 1][j] == 0)
				{
					Cells[i - 1][j] = 1;
				}
				else if(Cells[i][j - 1] == 0)
				{
					Cells[i][j + 1] = 1;
				}				
			}
			else if((Cells[i][j - 1] > 2) && (Cells[i][j - 1] < 11)) // Row Of [i][j]
			{
				if(Cells[i - 1][j - 1] == 0)
				{
					Cells[i - 1][j - 1] = 1;
				}
				else if(Cells[i - 1][j] == 0)
				{
					Cells[i - 1][j] = 1;
				}
				else if(Cells[i + 1][j - 1] == 0)
				{
					Cells[i + 1][j - 1] = 1;
				}
				else if(Cells[i + 1][j] == 0)
				{
					Cells[i + 1][j] = 1;
				}					
			}
			else if((Cells[i][j + 1] > 2) && (Cells[i][j + 1] < 11)) // Row Of [i][j]
			{
				if(Cells[i - 1][j] == 0)
				{
					Cells[i - 1][j] = 1;
				}
				else if(Cells[i - 1][j + 1] == 0)
				{
					Cells[i - 1][j + 1] = 1;
				}
				else if(Cells[i + 1][j] == 0)
				{
					Cells[i + 1][j] = 1;
				}
				else if(Cells[i + 1][j + 1] == 0)
				{
					Cells[i + 1][j + 1] = 1;
				}	
			}
			else if((Cells[i + 1][j - 1] > 2) && (Cells[i + 1][j - 1] < 11)) // Row Below [i][j]
			{
				if(Cells[i][j - 1] == 0)
				{
					Cells[i][j - 1] = 1;
				}
				else if(Cells[i + 1][j] == 0)
				{
					Cells[i + 1][j] = 1;
				}				
			}
			else if((Cells[i + 1][j] > 2) && (Cells[i + 1][j] < 11))
			{
				if(Cells[i][j - 1] == 0)
				{
					Cells[i][j - 1] = 1;
				}
				else if(Cells[i][j + 1] == 0)
				{
					Cells[i][j + 1] = 1;
				}
				else if(Cells[i + 1][j - 1] == 0)
				{
					Cells[i + 1][j - 1] = 1;
				}
				else if(Cells[i + 1][j + 1] == 0)
				{
					Cells[i + 1][j + 1] = 1;
				}	
			}
			else if((Cells[i + 1][j + 1] > 2) && (Cells[i + 1][j + 1] < 11)) 
			{
				if(Cells[i][j + 1] == 0)
				{
					Cells[i][j + 1] = 1;
				}
				else if(Cells[i + 1][j] == 0)
				{
					Cells[i + 1][j] = 1;
				}	
			}
		} // End Of Fish Breeding Age!
		
		// Shark Killing Fish
			
			// if Fish has 1 Shark Neightbor, Fish has 12.5% chance of death.
			
		if((sharkNeighbor == 1) && (rand_number <= 0.125)) 
		{
			Cells[i][j] = 31;
		}
		else if((sharkNeighbor == 2) && (rand_number <= 0.25))
		{
			Cells[i][j] = 31;
		}
		else if((sharkNeighbor == 3) && (rand_number <= 0.375))
		{
			Cells[i][j] = 31;
		}
		else if((sharkNeighbor == 4) && (rand_number <= 0.50))
		{
			Cells[i][j] = 31;
		}
		else if((sharkNeighbor == 5) && (rand_number <= 0.625))
		{
			Cells[i][j] = 31;
		}
		else if((sharkNeighbor == 6) && (rand_number <= 0.75))
		{
			Cells[i][j] = 31;
		}
		else if((sharkNeighbor == 7) && (rand_number <= 0.825))
		{
			Cells[i][j] = 31;
		}
		else if((sharkNeighbor == 8) && (rand_number <= 1))
		{
			Cells[i][j] = 31;
		}
		
		// Fish Overcrowding Death
		
		if((fishNeighbor == 4) && (rand_number <= 0.15))
		{
			Cells[i][j] = 31;
		}
		else if((fishNeighbor == 5) && (rand_number <= 0.3))
		{
			Cells[i][j] = 31;
		}
		else if((fishNeighbor == 6) && (rand_number <= 0.45))
		{
			Cells[i][j] = 31;
		}
		else if((fishNeighbor == 7) && (rand_number <= 0.6))
		{
			Cells[i][j] = 31;
		}
		else if((fishNeighbor == 8) && (rand_number <= 0.75))
		{
			Cells[i][j] = 31;
		}
		
		// Fish Live To 10, Therefore while Cell[i][j] is not 10, the fish will age (persuming they haven been eaten!)
		
		if(Cells[i][j] != 10) // If the fish is not 10, it will age up
		{
			Cells[i][j] += 1; // If the fish is one --- it will be two nect gen, If the fish is two --- it will be three next gen (and can now breed)
		}
		else // If the fish is 10, it will die
		{
			Cells[i][j] = 31; 
		}
	}

	// Shark Code
	
	if((Cells[i][j] > 10) && (Cells[i][j] < 31)) // Meaning Shark
	{
		if(Cells[i][j] > 12) // Breeding Age
		{
			if((Cells[i - 1][j - 1] > 12) && (Cells[i - 1][j - 1] < 31)) // Row Above [i][j]
			{
				if(Cells[i - 1][j] == 0)
				{
					Cells[i - 1][j] = 11;
				}
				else if(Cells[i][j - 1] == 0)
				{
					Cells[i][j - 1] = 11;
				}
			}
			else if((Cells[i - 1][j] > 12) && (Cells[i - 1][j] < 31)) // Row Above [i][j]
			{
				if(Cells[i - 1][j - 1] == 0)
				{
					Cells[i - 1][j - 1] = 11;
				}
				else if(Cells[i - 1][j + 1] == 0)
				{
					Cells[i - 1][j + 1] = 11;
				}
				else if(Cells[i][j - 1] == 0)
				{
					Cells[i][j - 1] = 11;
				}
				else if(Cells[i][j + 1] == 0)
				{
					Cells[i][j + 1] = 11;
				}				
			}
			else if((Cells[i - 1][j + 1] > 12) && (Cells[i - 1][j + 1] < 31))  // Row Above [i][j]
			{
				if(Cells[i - 1][j] == 0)
				{
					Cells[i - 1][j] = 11;
				}
				else if(Cells[i][j - 1] == 0)
				{
					Cells[i][j + 1] = 11;
				}				
			}
			else if((Cells[i][j - 1] > 12) && (Cells[i][j - 1] < 31)) // Row Of [i][j]
			{
				if(Cells[i - 1][j - 1] == 0)
				{
					Cells[i - 1][j - 1] = 11;
				}
				else if(Cells[i - 1][j] == 0)
				{
					Cells[i - 1][j] = 11;
				}
				else if(Cells[i + 1][j - 1] == 0)
				{
					Cells[i + 1][j - 1] = 11;
				}
				else if(Cells[i + 1][j] == 0)
				{
					Cells[i + 1][j] = 11;
				}					
			}
			else if((Cells[i][j + 1] > 12) && (Cells[i][j + 1] < 31)) // Row Of [i][j]
			{
				if(Cells[i - 1][j] == 0)
				{
					Cells[i - 1][j] = 11;
				}
				else if(Cells[i - 1][j + 1] == 0)
				{
					Cells[i - 1][j + 1] = 11;
				}
				else if(Cells[i + 1][j] == 0)
				{
					Cells[i + 1][j] = 11;
				}
				else if(Cells[i + 1][j + 1] == 0)
				{
					Cells[i + 1][j + 1] = 11;
				}	
			}
			else if((Cells[i + 1][j - 1] > 12) && (Cells[i + 1][j - 1] < 31)) // Row Below [i][j]
			{
				if(Cells[i][j - 1] == 0)
				{
					Cells[i][j - 1] = 11;
				}
				else if(Cells[i + 1][j] == 0)
				{
					Cells[i + 1][j] = 11;
				}				
			}
			else if((Cells[i + 1][j] > 12) && (Cells[i + 1][j] < 31))
			{
				if(Cells[i][j - 1] == 0)
				{
					Cells[i][j - 1] = 11;
				}
				else if(Cells[i][j + 1] == 0)
				{
					Cells[i][j + 1] = 11;
				}
				else if(Cells[i + 1][j - 1] == 0)
				{
					Cells[i + 1][j - 1] = 11;
				}
				else if(Cells[i + 1][j + 1] == 0)
				{
					Cells[i + 1][j + 1] = 11;
				}	
			}
			else if((Cells[i + 1][j + 1] > 12) && (Cells[i + 1][j + 1] < 31)) 
			{
				if(Cells[i][j + 1] == 0)
				{
					Cells[i][j + 1] = 11;
				}
				else if(Cells[i + 1][j] == 0)
				{
					Cells[i + 1][j] = 11;
				}	
			}
		} // End of Shark Breeding Age!
		
		if((Cells[i][j] > 10 && Cells[i][j] < 31)(rand_number <= 0.03)) // each shark has a 0.03 chance of dying, every generation
		{
			Cells[i][j] = 32; // 32 = Dead Shark
		}
		
		if((numberOfFishNeighbors == 0) && (rand_number <= 0.70))
		{
			Cells[i][j] = 32; // 32 = Dead Shark, Shark died due to no food.
		}
		
		// Shark Live To 30, Therefore while Cell[i][j] is not 10, the fish will age (persuming they haven't died!)
		if(Cells[i][j] != 30)
		{
			Cells[i][j] = 32;
		}
	}

	if(Cells[i][j] == 31) // Dead Fish
	{
		Cells[i][j] = 0; // Empty The Cell
	}

	if(Cells[i][j] == 32) // Dead Shark
	{
		Cells[i][j] = 0; // Empty Cell
	}
}