#include<iostream>

using namespace std;
int main()
{
    int student;
    int club;
    int rating[100];
    int counter=0;
    int counter2=0;

    cin>>student >> club;

    for (int i=0; i<student; i++)
    {
        cin>>rating[i];
    }


    for (int i=0; i<student; i++)
        for(int a=i+1; a<=student; a++)
        {
            if(rating[i]==rating[a])
            {
                rating[a]=false;
            }
        }
        if(rating[i]!=false)
        {
            counter++;
        }
    }

    if(counter>=club)
    {
        cout<<"yes"<< endl;
        for(int i=0; i<student; i++)
        {
            if(rating[i]!=false&&counter2<club)
            {
                cout<<i+1<<" ";
                counter2++;
            }

        }

    }
    else
    {
        cout<<"no"<<endl;

    }
}

