#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
string pyramidVolume(float length,float width,float height,string unit);
main()
{ 
    float length,width,height,result;
    string unit,rstring;
    cout << "Enter the length of the pyramid (in meters): ";
    cin >> length;
    cout << "Enter the width of the pyramid (in meters): " ;
    cin >> width;
    cout << "Enter the height of the pyramid (in meters): " ;
    cin >> height;
    cout << "Enter the desired output unit (milimeters, centimeters, meters, kilometers): " ;
    cin >> unit;
    cout<<pyramidVolume(length,width,height,unit); 
    getch();
}
string pyramidVolume(float length,float width,float height,string unit)
{
    float result;
    string rstring;
    if(unit=="milimeters")
    {
        result=((length*1000)*(width*1000)*(height*1000))/3;
        rstring="The volume of the pyramid is: "+to_string(result)+" cubic milimeters";
        return rstring;
    }
    if(unit=="centimeters")
    {
        result=((length*100)*(width*100)*(height*100))/3;
        rstring="The volume of the pyramid is: "+to_string(result)+" cubic centimeters";
        return rstring;
    }
    if(unit=="meters")
    {
        result=length*width*height/3;
        rstring="The volume of the pyramid is: "+to_string(result)+" cubic meters";
        return rstring;
    }
    if(unit=="kilometers")
    {
        result=((length/(1000))*(width/(1000))*(height/(1000)))/3;
        rstring="The volume of the pyramid is: "+to_string(result)+" cubic kilometers";
        return rstring;
    }    
}