#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "rngs.h"
#include <stdlib.h>
#include <time.h>

int main() {

  int newCards=0;
  int discarded=1;
  int thisPlayer=0;
  int handpos=0;
  int choice1=0, choice2=0, choice3=0, bonus=0;
  struct gameState state, oldState;


  memcpy(&oldState, &state, sizeof(struct gameState));
  printf("Testing card: %s", "Great Hall\n");
  cardEffect(great_hall, choice1, choice2, choice3, &state, handpos, &bonus);

  newCards=1;
  printf("hand count=%d, expected=%d\n", state.handCount[thisPlayer], oldState.handCount[thisPlayer] + newCards - discarded);
  if(state.handCount[thisPlayer]!=oldState.handCount[thisPlayer]) { //0 because +1 from village and -1 from discarding
    printf("test failed\n");
  }
  else {
    printf("test successful\n");
  }
  printf("action count=%d, expected=%d\n", state.numActions, oldState.numActions+1);
  if(state.numActions!=oldState.numActions+1) {
    printf("test failed\n");
  }
  else {
    printf("test success\n");
  }

  return 0;
}
