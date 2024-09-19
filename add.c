#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  int number1 = atoi(argv[1]);
  int number2 = atoi(argv[2]);
  int print = number1 + number2;
  printf("%d\n",print);
  return 0;
}
