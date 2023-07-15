#include <stdio.h>
#include "utils.h"
#include "calculator.h"

int main () {
  int num1;
  int num2;
  char operator = 'a';
  char supported[] = "+-*/";
  
  // get operator symbol
  printf("Inserta un operador (+, -, * o /): ");
  
  // question to get the correct operator
  while (1) {
    scanf("%c", &operator);
    getchar();
    
    if (!arrayContains(supported, operator)) {
      printf("El operador '%c' no es válido, intente denuevo:", operator);
    }
    else break;
    
  }
  
  // get numbers
  printf("Inserta un número entero: ");
  scanf("%d", &num1);
  
  printf("Inserta otro número entero: ");
  scanf("%d", &num2);
  
  // calculator
  switch (operator) {
    case '+':
      printf("%d + %d = %d\n", num1, num2, sum(num1, num2));
      break;
      
    case '-':
      printf("%d - %d = %d\n", num1, num2, subtract(num1, num2));
      break;
      
    case '*':
      printf("%d * %d = %d\n", num1, num2, multiply(num1, num2));
      break;
      
    case '/':
      if (num2 != 0) printf("%d / %d = %.2f\n", num1, num2, divide(num1, num2));
      else printf("No se puede dividir entre cero.\n");
      break;
   
    default:
      printf("Operador inválido.\n");
      break;
  }

  return 0;
}