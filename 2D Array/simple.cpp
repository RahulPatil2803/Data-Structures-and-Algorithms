/*
   To print simple 2D array
*/
#include<stdio.h>
#include<iostream>
using namespace std;
int main(){

	int arr[3][4];

	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			printf("Enter value for arr[%d] [%d] :",i,j);
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}
	cout<<"\nDisplay Your Data -->";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			printf("\narr[%d] [%d]=%d",i,j,arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}


