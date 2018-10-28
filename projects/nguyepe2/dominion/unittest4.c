#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "rngs.h"
#include <stdlib.h>
#include <time.h>

int main() {
  int result;
  int card;
  int i;
  struct gameState *state;
  srand(time(NULL));

for(i=0; i<10; i++) {
  card=rand() % 25;

  result=supplyCount(card, state);
//  printf("card: %d\n", result);
  if(result < 0) {
    printf("test failed\n");
  }
  else {
    printf("test successful\n");
  }
}

  return 0;
}
