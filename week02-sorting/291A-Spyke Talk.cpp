#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int n;//number of secretaries
	int p=0;//pairs of secretary counter
	int temp;//to store temporary number
	cin>>n;
	int ids[n];//to input the id of secretaries
	for(int i=0; i<n; i++)
	{
		cin>>ids[i];
	}

	for(int i=0; i<n-1; i++)//sort the id of secretaries with bubble sort
	{
		for(int j=0; j<n-i-1; j++)
		{
			if(ids[j]>ids[j+1])
			{
				temp=ids[j];
				ids[j]=ids[j+1];
				ids[j+1]=temp;
			}
		}
	}
    for(int i=0; i<n; i++)
	{
	    //to count how many pairs of chatting secretaries
		if(ids[i]!=0)
		{
			if(ids[i]==ids[i+1])
			{
    //to check if conferences happens
				if(ids[i]==ids[i+2])
				{
					cout<<"-1"<<endl;
					return 0;
				}
				else
				{
					p++;
				}
			}
		}
		else
		{
			//do not count double or more zero
		}
	}

	cout<<p<<endl;

	return 0;
}
