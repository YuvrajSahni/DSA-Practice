#include <stdio.h>
#include <stdlib.h>
char s[5000]; 
int top = -1;

void push(char x)
{
	top++;
	s[top]=x;
}


char pop()
{
	char x = s[top];
	top--;
	return x;
}


int main(void)
{
	char a[1000];
	printf("Enter: ");
	gets(a);
	int count=0;
	for(int i = 0 ; a[i]!='\0'; i++)
	{
		if ( a[i] == '(' || a[i] == '{' || a[i] == '<')
		{
			push(a[i]);
		}
		
		if (a[i] == ')' || a[i] == '}' || a[i] == '>')
        {
            count++;
        }
		
		if (a[i] == ')')
		{
			char temp =	pop();
			if( temp != '(')
			{
				printf("Invalid\n");
				return 1;
			}
		}
		if(a[i] == '}')
		{
			char temp =	pop();
			if( temp != '{')
			{
				printf("Invalid\n");
				return 1;
			}
		}
		if (a[i] == '>')
		{
			char temp =	pop();
			if( temp != '<')
			{
				printf("Invalid\n");
				return 1;
			}
		}
	}
	if(top == -1)
	{
		printf("Valid\n");
	}
	else 
	{
		printf("Invalid\n");
	}
	
	printf("%d\n",count);
	
	if (count < 5)
    {
        printf("Insufficient\n");
    }
    else if (count >= 5 && count <= 10)
    {
        printf("Moderate\n");
    }
    else
    {
        printf("Sufficient\n");
    }
	
	printf("\n\nVatsal Agarwal - 21BIT0608");
}
