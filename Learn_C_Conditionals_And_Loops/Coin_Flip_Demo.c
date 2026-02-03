#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  // Create a number, 0 or 1
  srand (time(NULL));
  int coin = rand() % 2;
  
  // 0 = heads
  // 1 = tails
  if (coin == 0){
    printf("Heads\n");
  } else{
    printf("Tails\n");
  }
  } 
