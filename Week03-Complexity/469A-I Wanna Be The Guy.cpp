#include<bits/stdc++.h>
using namespace std;
//Tmin(best),Tmax(worst), Tavg(average)
//Tmax(n) = 4 + 2n                |Tmax(n)= n+6
//Tmin(n) = 6                     |Tmin(n)= 6
//Tavg(n) = 6+(4+2n)/2            |Tavg(n)= 6+(n+6)/2

//declaring variable
int main()
{
//input
    int a,n,x,y,ar[1000]={0};
    cin >> n;//input the level
    cin >> x;//input the little x
    //loop from the first and the last x with array
    for(int i=0; i<x; i++){
        cin >> a;
        ar[a] = 1;
    }
    cin >> y;//input the little y
    //loop from the first and the last y with array
    for(int i=0; i<y; i++){
        cin >> a;
        ar[a] = 1;
    }
    //Will Little X and Little Y pass the whole game, if they cooperate each other
    bool OK = true;
    for(int i=1; i<=n; i++){
            //if little X and little Y !=1 is false
        if(ar[i] !=1){
            OK = false;
            break;
        }
    }
    //output
    if(OK)cout << "I become the guy." << endl;
    else cout << "Oh, my keyboard!" << endl;
    return 0;
}
