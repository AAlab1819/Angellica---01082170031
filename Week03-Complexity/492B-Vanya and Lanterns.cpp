#include<bits/stdc++.h>
using namespace std;
//Tmin(best),Tmax(worst), Tavg(average)
//Tmax(n) = 9+1n              |Tmax(n)= n+10
//Tmin(n) = 10                |Tmin(n)= 10
//Tavg(n) = 10+(9+1n)/2       |Tavg(n)= 10+(n+10)/2
int main()
//declaring variable
{
int numoflantern, streetlength;
double startdistance, enddistance;
double currentdistance;
double maxdistance=INT_MIN, minrad;
//input
cin>>numoflantern>>streetlength;
double lanternposition[numoflantern];
for (int i=0; i<numoflantern; i++){
    cin>>lanternposition[i];
}
//sort the latern based on location
sort(lanternposition, lanternposition+numoflantern);
//count the distance from 0 to the first lantern
startdistance=lanternposition[0]-0;
//count the distance from the last lantern to the end of street
enddistance=streetlength-lanternposition[numoflantern-1];
//if startdistence is greater then end distance
if (startdistance>enddistance){
    //set minrad to startdistance
    minrad=startdistance;
}
//if it is equal or smaller
else{
    //set minrad to enddistance
    minrad=enddistance;
}
//finding the longest gap between lantern
for (int i=1; i<numoflantern; i++){
    currentdistance=lanternposition[i]-lanternposition[i-1];
    //if currentdistance is greater
    if(currentdistance>maxdistance){
        //set maxdistance to current
        maxdistance=currentdistance;
    }
}
//divide it by 2,because it is in between two lantern
maxdistance=maxdistance/2.00;
//if maxdistance is greater than the minradius we have count before
if(maxdistance>minrad){
    //set minrad to maxdistance
    minrad=maxdistance;
}
//output
cout<<fixed<<setprecision(10)<<minrad<<endl;
return 0;
}
