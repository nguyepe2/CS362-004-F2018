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
  int drawntreasure;
  struct gameState state, oldState;

  memcpy(&oldState, &state, sizeof(struct gameState));
  printf("Testing card: %s", "Adventurer\n");
  drawntreasure=cardEffect(adventurer, choice1, choice2, choice3, &state, handpos, &bonus);
  //printf("treasure drawn: %d\n", drawntreasure);

  if(drawntreasure!=0) {
    printf("test failed\n");
  }
  else {
    printf("test successful\n");
  }

  return 0;
}
