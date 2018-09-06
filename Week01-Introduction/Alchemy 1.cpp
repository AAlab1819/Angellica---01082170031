#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
int main ()
{
    int yellowcrystal_disposal;
    int bluecrystal_disposal;
    int yellow_produce;
    int green_produce;
    int blue_produce;
    int yellowcrystal;
    int bluecrystal;
    int totalcrystal;
    int total_disposal;
    int totalfinal_crystal;


    cin>>yellowcrystal_disposal>>bluecrystal_disposal;//first enter the yellow crystal and blue crystal
    cin>>yellow_produce>>green_produce>>blue_produce;//Yellow, green, and blue input that you want to produce
    yellow_produce=yellow_produce*2;//the way to know which yellow is produced is by way of yellow which we input * 2 why multiply 2 because we make yellow ball need 2 crystal yellow
    blue_produce=blue_produce*3;//how to know the blue produced is by means of blue we input * 3 why multiply 3 because we make blue balls need 3 crystal green
    green_produce=green_produce*2;//how to know the green produced is by the way the green we input * 2 why multiply 2 because we make green balls need 1 crystal yellow and 1 crystal blue
    totalcrystal=yellow_produce+blue_produce+green_produce;//how to find out the total crystal is the yellow method that we produce plus the blue we produce plus the green we produce
    total_disposal=yellowcrystal_disposal+bluecrystal_disposal;//the way to find out the total disposal is by means of the crystal yellow we input plus the blue crystal we input
    totalfinal_crystal=totalcrystal-total_disposal;//how to find out the total final crystal is by way of the total crystal minus the total disposal
cout<<totalfinal_crystal<<endl;//how to display the final crystal total in output

}
