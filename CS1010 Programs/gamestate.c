//			2. whether the frog can jump
//	
//						(checks if a frog at position i can jump)checkJumpState(position, size, bridge[]): return 1 || 0 
//						check frogType: if fT == -1; if space behind or 2 spaces behind == 0 && pos != 0 || size-1; return 1 else 0
//										if fT == 0; return 0
//										if fT = =1; if space in front or 2 spaces in front == 0 && pos != 0 || size-1; return 1 else 0		


//			1. Whether game can start (i.e any possible moves):
//				
//				gameStart, gameStop(break), gameCont, gameEnd
//				if CGS != gameStop, for <-- 0 to size-1: check if 
//										
//				cGS(int size, int bridge) --> set count=0. from 0 to size-1; check if canJump == 1, count ++
//				if count =  0; check at which i bridge[i] = 0, then at that i,  
//				check if all values of bridge[i] from i=0 to i=i-1 are == -1. 
//				if yes, check if all values of bridge[i] from i=i+1 to i=size-1 == 1. if yes, do printBridge 
//				and printf("you win nigger")
//
//				else gameStop							


#include <stdio.h>
#define MAXSIZE 1000
int canJump(int,int,int[]);

int main()
{
    int bridge[MAXSIZE];
    int a, size, pos;

    printf("Enter size: ");
    scanf("%d", &size);

    for (a=0; a<size; a++) 
    {
        scanf("%d", &bridge[a]);
    }

    int gamestate=0;
    //			1. Whether game can start (i.e any possible moves):
    //				
    //				gameStart, gameStop(break), gameCont, gameEnd
    //				if CGS != gameStop, for <-- 0 to size-1: check if 
    //										
    //				cGS(int size, int bridge) --> set count=0. from 0 to size-1; check if canJump == 1, count ++
    //				if count =  0; check at which i bridge[i] = 0, then at that i,  
    //				check if all values of bridge[i] from i=0 to i=i-1 are == -1. 
    //				if yes, check if all values of bridge[i] from i=i+1 to i=size-1 == 1. if yes, do printBridge 
    //				and printf("you win nigger")
    //
    //				else gameStop							

    // Fill code below you lazy fuck wtf???

    int i, can_jump = 0;
    for(i=0; i<size; i++)
    {
        if (canJump(pos, size, bridge) == 1)
        {
            can_jump = 1;
        }
    }

    if (!can_jump)
    {
        int checkFrog = -1, check = 0;
        for (i = 0; i < size; i++) {
            if (checkFrog == bridge[i]) {
                check++;
            }else if (bridge[i] == 0) {
                checkFrog = 1;
            }else break;
        } if (check == size-1) {
            gamestate = 1;
        }
    } else if (can_jump) {
        printf("Move the frog at position: %d\n", pos);
        scanf("%d", &pos)
        //[printBridge
    } 

switch (gamestate) {
    case 0:
        printf("Oh no! It seems like the two clans of frogs are stuck!\n");
        break;

    case 1:
        printf("Congratulations! The frogs took %d moves to cross the bridge!\n", numMoves );
}
return 0;
}

int canJump(int pos, int size, int bridge[]) 
{
    int returnVal;

    switch (bridge[pos])
    {
        case -1: 
            if (pos != 0 && (bridge[pos-1] == 0 || bridge[pos-2] == 0)) 
            {
                returnVal = 1;
            } else returnVal = 0;
            break;

        case 0:
            returnVal = 0;
            break;

        case 1:
            if (pos != size-1 && (bridge[pos+1] == 0 || bridge[pos+2] == 0))
            {
                returnVal = 1;
            } else returnVal = 0;
            break;
    }
    return returnVal;	
}

