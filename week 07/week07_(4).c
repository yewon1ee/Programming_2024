#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int factorial(int n)
{
	int res=1;
	int i;
	for(i=1;i<=n;i++)
	{
		res=res*i;
		
	}
	return (res);
}

int combination (int n, int r)
{
	return(factorial(n)/(factorial(n-r)*factorial(r)));
}

int get_integer()
{
	int x;
	printf("Enter the value:");
	scanf("%i",&x);
	return(x);
}

int main(void) {
	
	int n,r,result;
	n=get_integer();
	r=get_integer();
	result=combination(n,r);
	printf("The result of C(%i, %i) is %i",n,r,result);
	
	
	return 0;
}