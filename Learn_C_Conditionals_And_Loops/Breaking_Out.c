#include <stdio.h>

int main() {

  int number1 = 1;
  int numbers_entered1 = 0;
  int number2 = 1;
  int numbers_entered2 = 0;

  while (numbers_entered1 < 10) {

    printf("Loop 1 - Please enter a number: ");
    scanf("%d", &number1);

        numbers_entered1++;
  
    if (number1 <= 0){
      break;
    }
  }

while(number2 > 0 && numbers_entered2 < 10){
  printf("Loop 2 - Please enter a number: ");
    scanf("%d", &number2);

    numbers_entered2++;
}





  printf("Good job! You’ve broken out!\n");
}

