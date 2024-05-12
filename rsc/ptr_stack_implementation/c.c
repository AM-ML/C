#include <stdio.h>
#define STACK_SIZE 100

int contents[STACK_SIZE];
int *ptr_top = &contents[0];

void stack_overflow(void)
{
	printf("\033[0;31mERROR: \033[1;0mSTACK \033[0;31mOVERFLOW!\033[0;0m\n");
}

void stack_underflow(void)
{
	printf("\033[0;31mERROR: \033[1;0mSTACK \033[0;31mUNDERFLOW!\033[0;0m\n");
}

int get_size()
{
	return (ptr_top - &contents[0]);
}

int is_full()
{
	return get_size() == STACK_SIZE;
}

int is_empty()
{
	return get_size() == 0;
}

void push(int i)
{
	if(is_full())
		stack_overflow();
	else
		*ptr_top++ = i;
}

// int pop(void)
// {
// 	if(is_empty())
// 		stack_underflow();
// 	else
// 		return *--ptr_top;
// }

void pop(void)
{
	if(is_empty())
		stack_underflow();
	else
		printf("%d\n", *--ptr_top);
}

int main(void)
{
	push(1);
	push(2);
	push(3);
	pop();
	pop();
	pop();
	pop(); // ERROR CAUSE

	return 0;
}