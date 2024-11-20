#include <stdio.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	FILE *fp=NULL;
	char c;
	fp=fopen("sample.txt","r");
	if (fp==NULL)
	{
		printf("cannot open the file\n");
	}
	
	while((c=fgetc(fp))!=EOF)
	{
		putchar(c);
	}
	
	fclose(fp);
	return 0;
}