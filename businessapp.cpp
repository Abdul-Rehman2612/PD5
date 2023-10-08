#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
void header();
int menu();
string fromthecity();
string tocity(string departurecity);
string seattype();
string foodfacility();
float ticketprice(string departurecity,string arrivalcity,string tickettype,string foodfacility);
float foodprice(float ticketprice,string foodfacility);
float total(float ticketprice,float foodprice);
void ticketsdetails(string name,string departurecity,string arrivalcity,string tickettype,string foodfacility,float ticketprice,float foodprice,float totalticketprice);
main()
{
    int option;
    string Name1="",Name2="",Name3="";
    string departurecity1="",departurecity2="",departurecity3="";
    string arrivalcity1="",arrivalcity2="",arrivalcity3="";
    string tickettype1="",tickettype2="",tickettype3="";
    float ticketprice1=0.0,ticketprice2=0.0,ticketprice3=0.0;
    string foodfacility1="",foodfacility2="",foodfacility3="";
    float foodprice1=0.0,foodprice2=0.0,foodprice3=0.0;
    float totalticketprice1=0.0,totalticketprice2=0.0,totalticketprice3=0.0;
    while(true)
    {
        header();
        option=menu();
        if(option==1)
        {
            cout << "Enter the name of 1st Person: " ;
            cin >> Name1;
            departurecity1=fromthecity();
            cout << "Departure Station City: " << departurecity1 << endl;
            arrivalcity1=tocity(departurecity1);
            cout << "Arrival Station City: " << arrivalcity1 << endl;
            tickettype1=seattype();
            cout << "Ticket type: " << tickettype1 << endl;
            foodfacility1=foodfacility();
            cout << "Food facility: " << foodfacility1 << endl ;
            ticketprice1=ticketprice(departurecity1,arrivalcity1,tickettype1,foodfacility1);
            cout << "Ticket Price is: Rs." << ticketprice1 << endl ;
            foodprice1=foodprice(ticketprice1,foodfacility1);
            cout << "Food price: Rs." << foodprice1 << endl ;
            totalticketprice1=total(ticketprice1,foodprice1);
            cout << "Total Ticket Price: " << totalticketprice1 << endl ;
        }
        if(option==2)
        {
            cout << "Enter the name of 2nd Person: " ;
            cin >> Name2;
            departurecity2=fromthecity();
            cout << "Departure City: " << departurecity2 << endl;
            arrivalcity2=tocity(departurecity2);
            cout << "Arrival City: " << arrivalcity2 << endl;
            tickettype2=seattype();
            cout << "Ticket type: " << tickettype2 << endl;
            foodfacility2=foodfacility();
            cout << "Food facility: " << foodfacility2 << endl ;
            ticketprice2=ticketprice(departurecity2,arrivalcity2,tickettype2,foodfacility2);
            cout << "Ticket Price is: Rs." << ticketprice2 << endl ;
            foodprice2=foodprice(ticketprice2,foodfacility2);
            cout << "Food price: Rs." << foodprice2 << endl ;
            totalticketprice2=total(ticketprice2,foodprice2);
            cout << "Total Ticket Price: " << totalticketprice2 << endl ;
        }
        if(option==3)
        {
            cout << "Enter the name of 3rd Person: " ;
            cin >> Name3;
            departurecity3=fromthecity();
            cout << "Departure City: " << departurecity3 << endl;
            arrivalcity3=tocity(departurecity3);
            cout << "Arrival City: " << arrivalcity3 << endl;
            tickettype3=seattype();
            cout << "Ticket type: " << tickettype3 << endl;
            foodfacility3=foodfacility();
            cout << "Food facility: " << foodfacility3 << endl ;
            ticketprice3=ticketprice(departurecity3,arrivalcity3,tickettype3,foodfacility3);
            cout << "Ticket Price is: Rs." << ticketprice3 << endl ;
            foodprice3=foodprice(ticketprice3,foodfacility3);
            cout << "Food price: Rs." << foodprice3 << endl ;
            totalticketprice3=total(ticketprice1,foodprice3);
            cout << "Total Ticket Price: " << totalticketprice3 << endl ;
        }
        if(option==4)
        {
            float totalrevenue=totalticketprice1+totalticketprice2+totalticketprice3;
            cout << "Total revenue collected is: Rs." << totalrevenue << endl ;
        }
        if(option==5)
        {
            cout << "All booked ticket details: " << endl ;
            cout << "Name" << "\t" << "Departure" << "\t" << "Arrival" << "\t" << "Ticket Type" << "\t" << "Food" << "\t" << "TktPrice" << "\t" << "FoodPrice" << "\t" << "Total Price" << endl;
            ticketsdetails(Name1,departurecity1,arrivalcity1,tickettype1,foodfacility1,ticketprice1,foodprice1,totalticketprice1);
            ticketsdetails(Name2,departurecity2,arrivalcity2,tickettype2,foodfacility2,ticketprice2,foodprice2,totalticketprice2);
            ticketsdetails(Name3,departurecity3,arrivalcity3,tickettype3,foodfacility3,ticketprice3,foodprice3,totalticketprice3);
        }
        if(option==6)
        {
            return 0;
        }
        cout << "Press any key to continue..." ;
        getch();
        system("cls");
    }
}
void header()
{    
    cout << "***************************************************" << endl;
    cout << "* ----------------------------------------------- *" << endl;
    cout << "* |                                             | *" << endl;
    cout << "* |     Pakistan Railways Management System     | *" << endl;
    cout << "* |                                             | *" << endl;
    cout << "* ----------------------------------------------- *" << endl;
    cout << "***************************************************" << endl;
}
int menu()
{
    int option;
    cout << "1.Enter the details of 1st Person ticket... " << endl ;
    cout << "2.Enter the details of 2nd Person ticket... " << endl ;
    cout << "3.Enter the details of 3rd Person ticket... " << endl ;
    cout << "4.Calculate the total revenue... " << endl ;
    cout << "5.Display the details of all booked tickets... " << endl ;
    cout << "6.Exit..." << endl ;
    cout << "Your option..." ;
    cin >> option ;
    return option;
}
string fromthecity()
{
    string departurecity="";
    cout << "Select the departure city: " << endl << "1.Lahore" << endl << "2.Karachi" << endl << "3.Islamabad" << endl << "Your option." ;
    int option;
    cin >> option;
    if(option==1)
    {
        departurecity="Lahore";
    }
    if(option==2)
    {
        departurecity="Karachi";
    }
    if(option==3)
    {
        departurecity="Islamabad";
    } 
    return departurecity;
}
string tocity(string departurecity)
{
    string arrivalcity="";
    cout << "Select the arrival city: " << endl << "1.Lahore" << endl << "2.Karachi" << endl << "3.Islamabad" << endl << "Note: Departure and arrival city should not be same!" << endl << "Your option.";
    int option;
    cin >> option;
    if(option==1)
    {   
        arrivalcity="Lahore";
    }
    if(option==2)
    {
        arrivalcity="Karachi";
    }
    if(option==3)
    {
        arrivalcity="Islamabad";
    } 
    return arrivalcity;
}
string seattype()
{
    int option;
    string tickettype;
    cout << "Select the type of ticket: " << endl << "1.Economic class" << endl << "2.Business class" << endl << "Note:Business class ticket will cost 20% more than Economic class!" << endl << "Your option." ;
    cin >> option;
    if(option==1)
    {
        tickettype="Economic class";
    }
    if(option==2)
    {
        tickettype="Business class";
    }
    return tickettype;
}
string foodfacility()
{
    int option;
    cout << "Need food faility: " << endl << "1.Yes " << endl << "2.No" << endl << "Note:Food facility will cost 10% extra on ticket price!" << endl << "Your option." ;
    cin >> option ;
    if(option==1)
    {
        return "Yes" ;
    }
    if(option==2)
    {
        return "No" ;
    }
}
float ticketprice(string departurecity,string arrivalcity,string tickettype,string foodfacility)
{
    float price;
    if(departurecity=="Lahore")
    if(arrivalcity=="Karachi")
    {
        price=1500; 
    }
    if(arrivalcity=="Islamabad")
    {
        price=1200;
    }
    if(departurecity=="Karachi")
    if(arrivalcity=="Lahore")
    {
        price=1500; 
    }
    if(arrivalcity=="Islamabad")
    {
        price=2700;
    }
    if(departurecity=="Islamabad")
    if(arrivalcity=="Karachi")
    {
        price=2700; 
    }
    if(arrivalcity=="Lahore")
    {
        price=1200;
    }
    if(tickettype=="Business class")
    {
        price=price+price*20/100; 
    }
    return price;
}
float foodprice(float ticketprice,string foodfacility)
{
    float fprice=0.0;
    if(foodfacility=="Yes")
    {
        fprice=ticketprice*10/100;
    }
    return fprice;
}
float total(float ticketprice,float foodprice)
{
    float totalticketprice=ticketprice+foodprice;
    return totalticketprice;
}
void ticketsdetails(string name,string departurecity,string arrivalcity,string tickettype,string foodfacility,float ticketprice,float foodprice,float totalticketprice)
{
    cout << name << " \t" <<departurecity<< "\t" << arrivalcity << " \t" << tickettype << "\t" << foodfacility << "\t " << ticketprice << "\t "<< foodprice << "\t " << totalticketprice << endl;
}