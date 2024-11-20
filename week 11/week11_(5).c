#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	FILE *fp;
	fp=fopen("sample.txt","w");
	char word1[100],word2[100],word3[100];
	
	printf("input a word: ");
    scanf("%s", word1);
    printf("input a word: ");
    scanf("%s", word2);
    printf("input a word: ");
    scanf("%s", word3);
    
	
	fprintf(fp,"%s\n",word1);
	fprintf(fp,"%s\n",word2);
	fprintf(fp,"%s\n",word3);


	
	
	
	fclose(fp);
	
	return 0;
}