#include <bits/stdc++.h>

using namespace std;
int main()
{
    //declaring variables
    int n;
    //input
    while(cin>>n)
    {
        int ans=n;
        //number of round
        for(int i=1;i<=n;i++)
        {
            //variable i indicates i-th number to be found
            //push needed to be done to get a number in correct place
            ans+=i*(n-i);
        }
        //output
        cout<<ans<<endl;
    }
    return 0;
}
