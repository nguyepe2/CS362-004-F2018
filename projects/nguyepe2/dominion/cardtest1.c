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
  state.handCount[thisPlayer]=1; //initialize handCount to 1
  //state->whoseTurn=0;
  //int player=state->whoseTurn;
  //  drawCard(player, state);

  memcpy(&oldState, &state, sizeof(struct gameState));
  printf("Testing card: %s", "Smithy\n");
  cardEffect(smithy, choice1, choice2, choice3, &state, handpos, &bonus);
  newCards=3;
  printf("hand count=%d, expected=%d\n", state.handCount[thisPlayer], oldState.handCount[thisPlayer] + newCards - discarded);
  //printf("hand count=%d, expected=%d\n", state.handCount[thisPlayer], oldState.handCount[thisPlayer]);
  if(state.handCount[thisPlayer]!=oldState.handCount[thisPlayer]+2) { //+2 because +3 from smithy and -1 from discarding
    printf("test failed\n");
  }
  else {
    printf("test successful\n");
  }
  return 0;
}
