#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int input_num;
	printf("Enter an integer:");
	scanf("%i",&input_num);
	if (input_num>0) {
		printf("%i",input_num);
	}
	else {
		input_num=-input_num;
		printf("%i",input_num);
	}
	return 0;
}