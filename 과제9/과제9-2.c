#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int i,j,test[5][3];
	int max[3],min[3];
	srand(time(NULL));
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<3;j++)
		{
			test[i][j]=rand()%100+1;	
		}
	}	
	for(i=0;i<3;i++)
	{
		max[i]=test[0][i];
		min[i]=test[0][i];
	}
	for(j=0;j<3;j++)
	{
		for(i=0;i<5;i++)
		{
			if(test[i][j]>max[j]){
				max[j]=test[i][j];
			}
			if(test[i][j]<min[j]){
				min[j]=test[i][j];
			}
		}
	}
	for(i=0;i<3;i++){
		printf("시험%d 의 최대 점수 = %d\n",i+1,max[i]);
		printf("시험%d 의 최소 점수 = %d\n",i+1,min[i]);
	}
	
	return 0;
} 
