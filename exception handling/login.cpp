#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char setId[10]="rahul";
	int setPass=9545;
	char userId[10];
	int userPass;

	int count =0;
	int i=3;
while(true)
{
	count++;
	i--;
	if(count==4)
	{
		cout<<"\nYour account is blocked !";
		return 0;
	}
	try
	{
	cout<<"\nEnter ID:";
	cin>>userId;

	cout<<"\nEnter Password:";
	cin>>userPass;
		if(strcmp(setId,userId)==0)
		{
			if(setPass==userPass)
			{
				cout<<"\nLogin Sucessful !";
				break;
			}
			else
			{
				throw userPass;
			}
		}
		else
		{
			throw userId;
		}
	}
	catch(char *id)	
	{
		cout<<"\nYour entered wrong id :"<<id;
		cout<<"\n**************************\n";
		if(i<3&&i>=1)
          {
	cout<<"only "<<i<<" attempts left !";
          }
	}
	catch(int pass)
	{
		cout<<"\nYou entered wrong Password :"<<pass;
		cout<<"\n**************************\n";	
		if(i<3&&i>=1)
          {
	cout<<"only "<<i<<" attempts left !";
          }
	}
}
}


