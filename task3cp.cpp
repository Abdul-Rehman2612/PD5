#include<iostream>
#include<conio.h>
using namespace std;
float taxCalculator(char type,float price);
main()
{
    float price,priceaftertax;
    char type;
    string result;
    cout << "Enter the vehicle type code (M, E, S, V, T): ";
    cin >> type;
    cout << "Enter the vehicle price: ";
    cin >> price;
    priceaftertax=taxCalculator(type,price);
    cout << "The final price of a vehicle of type " << type <<" after adding tax is $" << (priceaftertax);
    getch();
}
float taxCalculator(char type,float price)
{
    float priceaftertax;
    if (type=='M')
    {
       priceaftertax=price+price*6/100; 
    }
    if (type=='E')
    {
        priceaftertax=price+price*8/100; 
    }
    if (type=='S')
    {   
        priceaftertax=price+price*10/100; 
    }
    if (type=='V')
    {
        priceaftertax=price+price*12/100; 
    }
    if (type=='T')
    {
        priceaftertax=price+price*15/100; 
    }
   return 0;
}