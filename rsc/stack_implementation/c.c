#include <stdio.h>
#include <stdbool.h>

#define STACK_SIZE 100

int contents[STACK_SIZE];
int top = 0;

//make_empty()
//is_empty()
//is_full()
//push()
//pop()

void stack_overflow(void)
{
	printf("\033[1;92mERROR: \033[1;0mSTACK \033[1;91mOVERFLOW!\033[0;0m");
}

void stack_underflow(void)
{
	printf("\033[1;92mERROR: \033[1;0mSTACK \033[1;91mUNDERFLOW!\033[0;0m");
}

void make_empty(void){
	top = 0;
}

bool is_empty(void)
{
	return top == 0;
}

bool is_full(void)
{
	return top == STACK_SIZE;
}

void push(int i)
{
	if (is_full())
		stack_overflow();
	else
		contents[top++] = i;
}

int pop(void)
{
	if (is_empty())
		stack_underflow();
	else
		return contents[--top];
}

int main(void)
{
	push(1);
	push(2);
	push(59);
	push(32);
	pop();
	pop();
	pop();
	pop();
	pop(); // <-- ERROR CAUSE

	for(int i = 0; i < top;i++)
		printf("%d ", contents[i]);
	printf("\n");

	return 0;
}