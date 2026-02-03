#include<stdio.h>
#include<string.h>

int main() {
  
  char src[] = "banana";
  char dst[7];
  
  char pan[] = "How vexingly quick daft zebras jump!";
  int len = sizeof(pan); // Checkpoint 2
  char dst2[len];
  
  strcpy(dst, src);
  
  printf("%s\n", dst);  
  
  // Code for checkpoint 3 goes here
  strcpy(dst2, pan);
  
  printf("%s", dst2);

}
