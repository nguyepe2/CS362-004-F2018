#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "rngs.h"
#include <stdlib.h>
#include <time.h>

int main() {
  //char array[27][15]={"curse", "estate", "duchy", "province", "copper", "silver", "gold", "adventurer", "council_room", "feast", "gardens", "mine", "remodel", "smithy", "village", "baron", "great_hall", "minion", "steward", "tribute", "ambassador", "cutpurse", "embargo", "outpost", "salvager", "sea_hag", "treasure_map"};
  int costs[27]={0, 2, 5, 8, 0, 3, 6, 6, 5, 4, 4, 5, 4, 4, 3, 4, 3, 5, 3, 5, 3, 4, 2, 5, 4, 4, 4};
  int a;
  int i;
  int checkCost;
  srand(time(NULL));
  a=rand() % 26;

  for(i=0; i<10; i++) {
  checkCost=getCost(a);

  if(checkCost==costs[a]) {
    printf("Test successful\n");
  }
  else {
    printf("Test failed\n");
  }
}

  return 0;
}
