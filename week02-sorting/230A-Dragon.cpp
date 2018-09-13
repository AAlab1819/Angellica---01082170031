#include <iostream>
#include<stdlib.h>

using namespace std;

struct Dragon
{
    int str, bonus;//strength
};
void insertionSort(Dragon arr[], int n)
{
   int i, j;
   Dragon key;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;

       while (j >= 0 && arr[j].str > key.str)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
   }
}

int main()
{
    int s, n;
    cin>>s>>n;
    Dragon dragon[n];
    for(int i=0; i<n; i++)//to input the dragon's strength and bonus for defeating it
    {
        cin>>dragon[i].str>>dragon[i].bonus;
    }
    insertionSort(dragon, n);
    for(int i=0; i<n; i++)
    {
        if(s>dragon[n-1].str)////if Kirito is stronger than the dragon
        {
            cout<<"YES";
            break;
        }
        if(s>dragon[i].str)
        {
            s+=dragon[i].bonus;
        }
        else////if Kirito is weaker than the dragon
        {
            cout<<"NO";
            break;
        }
    }
    return 0;
}
