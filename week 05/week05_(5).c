#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b;
	int result_and,result_or,result_xor,result_left,result_right;
	
	printf("Input two integers: ");
	scanf("%d %d",&a,&b);
	result_and=(a&b);
	result_or=(a|b);
	result_xor=(a^b);
	result_left=a<<1;
	result_right=a>>1;
	
	printf("& result is %d\n| result is %d\n^ result is %d\n<<1 result is %d\n>>1 result is %d\n",result_and,result_or,result_xor,result_left,result_right);
	
	
	
	
	return 0;
}