#include <stdio.h>

int main ()
{
  int x, y;

  printf("Digite os fatores X e Y para a multiplicação\n");
  printf("X: "); scanf("%d", &x);
  printf("Y: "); scanf("%d", &y);
  int resultado = x * y;
  printf("O resultado é: %d \n", resultado);


  printf("***************************************\n");
  printf("*               Welcome               *\n");
  printf("***************************************\n");

  int secretNumber = 42;

  int guess = 0;

  do {
    printf("What's your guess on the secret number? \n");
    printf("Guess: "); scanf("%d", &guess);
  }while (guess != secretNumber);
   
  printf("You're right!\n");
  return 0;
}

