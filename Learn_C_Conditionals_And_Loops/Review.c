#include <stdio.h>

main() {

float Earth_Weight;
int Planet_Choice;
float final_weight;

printf("What is your weight on earth?\n");
scanf("%f", &Earth_Weight);

printf("What planet do you want to fight on?\n");
printf("Mercury is 1, Venus is 2...\n");
scanf("%d", &Planet_Choice);

switch(Planet_Choice){
  case 1:
  final_weight = Earth_Weight * 0.38;
  printf("Your weight on Mercury is %f", final_weight);
  break;
  case 2:
    final_weight = Earth_Weight * 0.91;
    printf("Your weight on Venus is %f", final_weight);
    break;
  case 3:
    final_weight = Earth_Weight * 0.38;
    printf("Your weight on Mars is %f", final_weight);
    break;
  case 4:
    final_weight = Earth_Weight * 2.34;
    printf("Your weight on Juipter is %f", final_weight);
    break;
  case 5:
    final_weight = Earth_Weight * 1.06;
    printf("Your weight on Saturn is %f", final_weight);
    break;
  case 6:
    final_weight = Earth_Weight * 0.92;
    printf("Your weight on Uranus is %f", final_weight);
    break;
  case 7:
    final_weight = Earth_Weight * 1.19;
    printf("Your weight on Neptune is %f", final_weight);
    break;
  }

  }
