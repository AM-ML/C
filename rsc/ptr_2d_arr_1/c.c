#include <stdio.h>
#define rows 3
#define cols 4

void display(int a[rows][cols]);
void clear_col(int a[rows][cols], int c);
void print_line()
{
	for (int i = 0; i < cols; ++i)
	{
		printf("====");
	}
	printf("\n");
}

int main(void)
{
	int a[rows][cols] = {{1,2,2,1},{3,4,4,3},{5,6,6,5}};

	int (*p)[cols] = &a[0];

	display(a);
	
	printf("\n");
	print_line();
	print_line();
	printf("\n");

	clear_col(a,0);
	display(a);

	return 0;
}

void display(int a[rows][cols])
{
	for(int i = 0; i < cols; i++)
	{
		if(i+1 == cols)
		{			
			printf("%d", i);
			continue;
		}

		printf("%d || ", i);
	}
	printf("\n");
	print_line();

	for(int i = 0; i < rows;i++)
		for(int j = 0; j < cols;j++)
		{			
			if((j+1) % cols == 0)
			{				
				printf("%d\n", a[i][j]);
				continue;
			}
			printf("%d || ", a[i][j]);
		}
}

void clear_col(int a[rows][cols], int c)
{
	for(int (*p)[cols] = &a[0]; p < a+rows;p++)
		(*p)[c] = 0;
}