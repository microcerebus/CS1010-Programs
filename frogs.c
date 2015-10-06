/**
 * CS1010 AY2015/6 Semester 1 Lab3 Ex3
 * frogs.c
 * <This program simulates a way for the frogs to cross the bridge.> 
 * <Dhruv Jain>
 * <C07>
 */
#include <stdio.h>

int canJump(int, int, int[]);
void printBridge(int, int[]);
int checkGameState(int, int, int[]);
int moveFrog (int, int[]);

int main(void) {

    int bridge[1000];
    int i;
    int lengthOfBridge;
    int position;

    int numMoves = 0;
    int gameState;

    printf("Please enter the length of the bridge: ");
    scanf("%d", &lengthOfBridge);

    for (i=0; i<lengthOfBridge; i++) {
        int frogType;

        printf("Please insert frogs at position %d: ", i);
        scanf("%d", &frogType);

        bridge[i] = frogType;
    }

    printf("Input completed\n");
    printBridge(lengthOfBridge, bridge);

    printf("Please start moving the frogs\n");

    for(position = 0; position < lengthOfBridge; position++)
    {        do {
                    moveFrog(lengthOfBridge, bridge);
                } while (checkGameState(position, lengthOfBridge, bridge) == 2);

                if (checkGameState(position, lengthOfBridge, bridge) == 0) {
                    printf("Oh no! It seems like the two clans of frogs are stuck!\n"); 
                }else if (checkGameState(position, lengthOfBridge, bridge) == 1) {
                    printf("Congratulations! The frogs took %d moves to cross the river\n", moveFrog(lengthOfBridge, bridge));
                }
    }


    return 0;
}

//This function is provided for you
/**
 * Prints out the current state on the bridge
 * @param size (int) represents the size of bridge
 * @param bridge[] contains the current state of the bridge
 **/

int canJump(int pos, int size, int bridge[]){
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

void printBridge(int size, int bridge[]) {

    int i;
    printf("Position: ");
    for (i=0; i<size; i++) {
        printf("%2d ", i);
    }
    printf("\n");

    printf("Bridge:   ");
    for (i=0; i<size; i++) {
        printf("%2d ", bridge[i]);
    }
    printf("\n");
}

int checkGameState(int pos,int size,int bridge[])
{
    int i, can_jump = 0;

    if (canJump(pos, size, bridge) == 1)
    {
        can_jump = 1;
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
            return 1;
        }
    } else if (can_jump) {
        return 2;
    }else return 0; 

}

// printf("Congratulations! The frogs took %d moves to cross the bridge!\n", numMoves );
int moveFrog (int size, int bridge[])
{
    int numMoves = 0, posn;
    printf("Move frog at position: ");
    scanf("%d", &posn);
    printBridge(size, bridge);

    switch (bridge[posn]) {
        case 1:
            if ((bridge[posn+1] == 0) && posn != size-1) {
                bridge[posn] = 0;
                bridge[posn+1] = 1;
                numMoves++;
            }else if ((bridge[posn+2]==0) && posn != size-1) {
                bridge[posn] = 0;
                bridge[posn+2] = 1;
                numMoves++;
            }else printf("Invalid move!\n");    
            printBridge(size, bridge);
            break;
        case -1:
            if ((bridge[posn-1] == 0) && posn != 0) {
                bridge[posn] = 0;
                bridge[posn-1] = -1;
                numMoves++;
            }else if ((bridge[posn-2 == 0]) && posn != 0) {
                bridge[posn] = 0;
                bridge[posn-2] = -1;
                numMoves++;
            }else printf("Invalid move!\n");
            printBridge(size, bridge);
            break;
    }
        return numMoves;
}

