#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int answer=50;
	int trial_num=0;
	int input_num;
	do
	{
	
	  printf("Guess a number:");
	  scanf("%i",&input_num);
	  ++trial_num;
	  
	  if (input_num>answer) {
	  	printf("High!\n");
	  }
	  else if (input_num<answer) {
	  	printf("Low!\n");
	  }
}
	while(input_num !=answer);
	
	printf("Congratulation! Trials: %i",trial_num);   
	  
	  
	
	
	
	
	
	
	
	
	return 0;
}