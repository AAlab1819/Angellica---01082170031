#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int ns;//the number of stewards
	int max;
	int min;
	int h;//the number of steward that John helps
	h=0;
	cin>>ns;
	int a[ns];

	for(int i=0; i<ns; i++)
	{
		cin>>a[i];
	}
	max=a[0];
	min=a[0];

	for (int i=0; i<ns; i++)
    {
		if (a[i] > max)
		{
        	max = a[i];
        }
      	else if (a[i] < min)
        {
        	min = a[i];
        }
    }
  	for(int i=0; i<ns; i++)
	{
		if(a[i]<max&&a[i]>min)
		{
			h++;
		}
	}
	cout<<h<<endl;
	return 0;

}
