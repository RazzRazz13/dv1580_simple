#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
int is_number(const char *str) { 
    char *endptr; 
    errno = 0; // Reset errno before the call 
 
    double val = strtod(str, &endptr); 
 
    // Check for various conditions 
    if (errno == ERANGE || (endptr == str)) { 
        return 0; // Not a number 
    } 
 
    return 1; // It's a number 
} 

int main(int argc, char *argv[]){
  int ye = is_number(argv[1]);
  int ya = is_number(argv[2]);

  if (ye == 1 && ya == 1){
    float number1 = atof(argv[1]);
    float number2 = atof(argv[2]);
    float print = number1 * number2;
    printf("%.4f\n",print);
  }
  return 0;
}