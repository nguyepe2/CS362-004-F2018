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
  int k1;
  int k2;
  int k3;
  int k4;
  int k5;
  int k6;
  int k7;
  int k8;
  int k9;
  int k10;
  int i;
  int* result;

  k1=rand(); 
  k2=rand();
  k3=rand();
  k4=rand();
  k5=rand();
  k6=rand();
  k7=rand();
  k8=rand();
  k9=rand();
  k10=rand();

  result=kingdomCards(k1, k2, k3, k4, k5, k6, k7, k8, k9, k10);

  for(i=1; i<11; i++) {
      if(result[i]!=NULL) {
        printf("Test successful\n");
      }
      else {
        printf("Test failed\n");
      }
  }

  return 0;
}
