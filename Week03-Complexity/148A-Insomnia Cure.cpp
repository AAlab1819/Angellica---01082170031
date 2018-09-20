#include<bits/stdc++.h>
using namespace std;
//Tmin(best),Tmax(worst), Tavg(average)
//Tmax(n) = 4+1n              |Tmax(n)= n+5
//Tmin(n) = 5                 |Tmin(n)= 5
//Tavg(n) = 5+(4+1n)/2        |Tavg(n)= 5+(n+5)/2
int main()
{
//declaring variable
    int k,l,m,n,d;
    int damageddragon=0;


//input
cin>>k;
cin>>l;
cin>>m;
cin>>n;
cin>>d;

//if one of the number is 1. obviously every dragon is damaged
if (k==1 || l==1 || m==1 || n==1){
    damageddragon=d;
}
//if there is number one in any of the number
else
{
    //loop from the first to the last dragon
    for (int thdragon=1; thdragon<=d; thdragon++){
            //if the n dragon divisible by one of the number
        if (thdragon%k==0 || thdragon%l==0 || thdragon%m==0 || thdragon%n==0){
            damageddragon++;
        }
    }
}
//output
   cout <<damageddragon<<endl;
return 0;
}
