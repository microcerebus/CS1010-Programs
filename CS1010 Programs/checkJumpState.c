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

