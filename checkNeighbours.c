#include <stdio.h>
#include <stdlib.h>
#include <time.h>

extern int Cells[100][100];
int sharkNeighbor = 0;
int fishNeighbor = 0;

void checkNeighbours()
{
	// North West
	if((Cells[i-1][j-1] > 0) && (Cells[i-1][j-1] < 11))
	{
		fishNeighbor += 1;
	}
	else if((Cells[i-1][j-1] > 10) && (Cells[i-1][j-1] < 31))
	{
		sharkNeighbor += 1;
	}
	
	// North
	if((Cells[i-1][j] > 0)  && ((Cells[i-1][j] < 11)))
	{
		fishNeighbor += 1;
	}
	else if((Cells[i-1][j] > 10)  && ((Cells[i-1][j] < 31)))
	{
		sharkNeighbor += 1;
	}
	
	// North East
	if((Cells[i-1][j+1] > 0)  && ((Cells[i-1][j] < 11)))
	{
		fishNeighbor += 1;
	}
	else if((Cells[i-1][j+1] > 10)  && ((Cells[i-1][j] < 31)))
	{
		sharkNeighbor += 1;
	}
	
	// West
	if((Cells[i][j-1] > 0)  && ((Cells[i-1][j] < 11)))
	{
		fishNeighbor += 1;
	}
	else if((Cells[i][j-1] > 10)  && ((Cells[i-1][j] < 31)))
	{
		sharkNeighbor += 1;
	}
	
	// East
	if((Cells[i][j+1] > 0)  && (Cells[i-1][j] < 11))
	{
		fishNeighbor += 1;
	}	
	else if((Cells[i][j+1] > 10)  && (Cells[i-1][j] < 31))
	{
		sharkNeighbor += 1;
	}	
	
	// South West
	if((Cells[i+1][j-1] > 0)  && (Cells[i-1][j] < 11))
	{
		fishNeighbor += 1;
	}
	else if((Cells[i+1][j-1] > 10)  && (Cells[i-1][j] < 31))
	{
		sharkNeighbor += 1;
	}
	
	// South
	if((Cells[i+1][j] > 0)  && (Cells[i-1][j] < 11))
	{
		fishNeighbor += 1;
	}
	else if((Cells[i+1][j] > 10)  && (Cells[i-1][j] < 31))
	{
		sharkNeighbor += 1;
	}

	// South East
	if((Cells[i+1][j+1] > 0)  && (Cells[i-1][j] < 11))
	{
		fishNeighbor += 1;
	}
	else if((Cells[i+1][j+1] > 10)  && (Cells[i-1][j] < 31))
	{
		sharkNeighbor += 1;
	}
}