/******************
Name:       
ID:          
Assignment: ex1
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main() {
  int num1,num2,pos,result;
  
  // What bit
  /*Scan two integers (representing number and a position)          
  Print the bit in this position. */

  printf("What bit:\n");
  printf("Please enter a number:\n"); 
  scanf("%d",&num1);
  printf("Please enter a position:\n"); 
  scanf("%d",&pos);
  printf("The bit in position %d of number %d is: %d\n", pos, num1, (num1>>pos)&1);
                                                                    
  // Set bit
  /*Scan two integers (representing number and a position)
  Make sure the bit in this position is "on" (equal to 1)
  Print the output                                                  
  Now make sure it's "off" (equal to 0)
  Print the output */ 

  printf("\nSet bit:\n");
  printf("Please enter a number:\n"); 
  scanf("%d",&num1);
  printf("Please enter a position:\n"); 
  scanf("%d",&pos);
  printf("Number with bit set to 1: %d\n", num1 | (1<<pos));
  printf("Number with bit set to 0: %d\n",num1 & ~(1<<pos)); 
  
  // Toggle bit
  /*Scan two integers (representing number and a position)          
  Toggle the bit in this position                                   
  Print the new number */

  printf("\nToggle bit:\n");
  printf("Please enter a number:\n"); 
  scanf("%d",&num1);
  printf("Please enter a position:\n"); 
  scanf("%d",&pos);
  printf("Number with bit toggled: %d\n",num1^(1<<pos));
  // Even - Odd
  /* Scan an integer
  If the number is even - print 1, else - print 0. */

  printf("\nEven - Odd:\n");
  printf("Please enter a number:\n");
  scanf("%d",&num1);
  printf("%d", (num1&1)^1);
  
  // 3, 5, 7, 11
  /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */ 

  printf("\n3, 5, 7, 11:\n");
  printf("Please enter the first number (octal):\n");
  scanf("%o",&num1);
  printf("Please enter the second number (octal):\n");
  scanf("%o",&num2);

  result = num1+num2;
  printf("The sum in hexadecimal: %X\n",result);
  result  = ((result&(1<<3))>>3)*1000 + ((result&(1<<5))>>5)*100 + ((result&(1<<7))>>7)*10+((result&(1<<11))>>11); 
  printf("The 3,5,7,11 bits are: %d\n",result);

  printf("Bye!\n");
  
  return 0;
}

