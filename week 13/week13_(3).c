#include <stdio.h>
#include <stdlib.h>
#define STUDENTNUM 4

struct student{
	int ID;
	int score;
	
};

void main(void) {
	struct student s[STUDENTNUM];
	int i;
	double totalScore=0;
	double averageScore;
	int highestScoreIndex=0;
	int highestScore=0;
	
	for(i=0;i<STUDENTNUM;i++) {
		printf("Input the ID : ");
		scanf("%d",&s[i].ID);
		printf("Input the score :");
		scanf("%d",&s[i].score);
		totalScore += s[i].score;
		
		if(s[i].score>highestScore)
		{
            highestScore = s[i].score; 
            highestScoreIndex=i;
        }
	}
	
	averageScore=(totalScore/4);
	
	printf("The average of the score : %f\n",averageScore);
	printf("The highest score - ID : %d , score : %d ",s[highestScoreIndex].ID,s[highestScoreIndex].score);
	
}