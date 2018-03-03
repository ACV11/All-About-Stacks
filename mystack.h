#ifndef _STACK_H
#define _STACK_H


typedef char stackElementT; //This is the type of the objects entered in the stack.

typedef struct     //This structure is to keep track of the contents of the dynamically allocated array.
{
  stackElementT *contents;
  int top;    //To define a variable to store the index of the element at the top of the array.
  int maxSize;     //To know the max size of the array (which is determined at runtime) to know when the stack is full.
}

stackT;

void StackPush(stackT *stackP, stackElementT element); //These teo are to push and pop an element.
stackElementT StackPop(stackT *stackP);


int StackIsEmpty(stackT *stackP); //These return a true value if the stack is empty or full (respectively).
int StackIsFull(stackT *stackP);  //Also created to avoid a call to StackPop on an empty stack or to StackPush on a full stack which is an error

void StackInit(stackT *stackP, int maxSize); // A new stack variable is initialized.The initialized stack is made empty.


void StackDestroy(stackT *stackP); /* This function frees all memory associated with the stack. It should get rid of any dynamically-allocated memory */



#endif
