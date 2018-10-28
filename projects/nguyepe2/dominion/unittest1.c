#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "rngs.h"
#include <stdlib.h>
#include <time.h>

int main() {

  srand(time(NULL));

  const void* a;
  const void* b;
  int check;
  int correct;
  int i;

for(i=0; i<10; i++) {
  //*(int*)b=2;//rand() % 1000;
  //*(int*)a=1;//rand() % 1000;

  check=compare(a, b);

  if(a>b) {
    correct=1;
  }
  else if(a<b) {
    correct=-1;
  }
  else {
    correct=0;
  }
  //printf("expected value: %d, returned value: %d\n", correct, check);
  if(correct==check) {
    printf("test successful!\n");
  }
  else {
    printf("test failed\n");
  }
}
      return 0;
}
