#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int input_year;
	int year_result;
	printf("Input the year: ");
	scanf("%d",&input_year);
	year_result= (input_year%4==0 && input_year%100!=0)|| input_year%400==0;
	
	printf("Is the year %d the leap year? %d",input_year,year_result);
	
	
	
	
	
	return 0;
}