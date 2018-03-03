#include <stdio.h>
#include <string.h>  
#include "mystack.h"

int main(void)
{
  stackT stack;    // A stack to hold characters.
  char str[101];   // String entered by user. 
  char *traverse;  // Pointer used to traverse the string. 

  
  //To get a string from the user uptil a 100 characters.
   
  printf("Enter a string: ");

  gets(str);  /* Read line, discard newline. */

  // To initialize the stack it must be big enough to hold the string we read in.
   
  StackInit(&stack, strlen(str));

  // To traverse through the string and put each character on the stack.
   

  for (traverse = str; *traverse != '\0'; traverse++) 
  {
    StackPush(&stack, *traverse);
  }

  // To Pop each of the characters off of the stack and print them.
   

  printf("\nPopped characters are: ");

  while (!StackIsEmpty(&stack)) 
  {
    printf("%c", StackPop(&stack));
  }

  printf("\n");

  StackDestroy(&stack);

  return 0;
}

