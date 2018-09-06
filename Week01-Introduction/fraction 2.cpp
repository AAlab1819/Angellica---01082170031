#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main()
{

    int numerator;
    int denominator;
    int sum;
    srand(time(NULL));
    numerator = rand()%sum;
    denominator = rand()%sum;

    int counterNum;
    while(sum<3 || sum>10000)
    {
        cin >> sum;
    }

    for (int i=2 ; i<sum; i++)
    {

        while(numerator>=denominator || numerator+denominator!=sum || (denominator%i==0&&numerator%i==0))
        {

            denominator=rand()%sum+1;
            numerator=rand()%sum+1;
        }

    }

    cout << numerator << " " << denominator << endl;

}
