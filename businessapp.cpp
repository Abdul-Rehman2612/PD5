#include<iostream>
#include<iomanip>
#include<conio.h>
#include<windows.h>
using namespace std;

void header();
int menu();
string FromCity(); 
string ToCity(string departurecity); 
string SeatType();
string FoodFacility();
float TicketPrice(string departurecity, string arrivalcity, string tickettype, string foodfacility);
float FoodPrice(float ticketprice, string foodfacility);
float Total(float ticketprice, float foodprice);
void TicketsDetails(string name, string departurecity, string arrivalcity, string tickettype, string foodfacility, float ticketprice, float foodprice, float totalticketprice);

main()
{
    int option;

    string Name_of_person1 = "",
    Name_of_person2 = "",
    Name_of_person3 = "";

    string departure_city_of_person_1 = "",
    departure_city_of_person_2 = "",
    departure_city_of_person_3 = "";

    string arrival_city_of_person_1 = "",
    arrival_city_of_person_2 = "",
    arrival_city_of_person_3 = "";

    string ticket_type_of_person_1 = "",
    ticket_type_of_person_2 = "",
    ticket_type_of_person_3 = "";

    float ticketprice1 = 0.0,
    ticketprice2 = 0.0,
    ticketprice3 = 0.0;

    string foodfacility1="",
    foodfacility2="",
    foodfacility3="";

    float foodprice1=0.0,
    foodprice2=0.0,
    foodprice3=0.0;

    float totalticketprice1=0.0,
    totalticketprice2=0.0,
    totalticketprice3=0.0;

    while(true)
    {
        header();
        option=menu();

        if(option==1)
        {
            cout << "Enter the name of 1st Person: " ;
            cin >> Name_of_person1;

            departure_city_of_person_1=FromCity();
            cout << "Departure Station City: " << departure_city_of_person_1 << endl;

            arrival_city_of_person_1=ToCity(departure_city_of_person_1);
            cout << "Arrival Station City: " << arrival_city_of_person_1 << endl;

            ticket_type_of_person_1=SeatType();
            cout << "Ticket type: " << ticket_type_of_person_1 << endl;

            foodfacility1=FoodFacility();
            cout << "Food facility: " << foodfacility1 << endl ;

            ticketprice1=TicketPrice(departure_city_of_person_1, arrival_city_of_person_1, ticket_type_of_person_1, foodfacility1);
            cout << "Ticket Price is: Rs." << ticketprice1 << endl ;

            foodprice1=FoodPrice(ticketprice1, foodfacility1);
            cout << "Food price: Rs." << foodprice1 << endl ;

            totalticketprice1=Total(ticketprice1, foodprice1);
            cout << "Total Ticket Price: " << totalticketprice1 << endl ;

            if(arrival_city_of_person_1=="N.A")
            {
                Name_of_person1="N.A";
                departure_city_of_person_1="N.A";
                ticket_type_of_person_1="N.A";
                foodfacility1="N.A";
                foodprice1=0.0;
                totalticketprice1=0.0;
                ticketprice1=0.0;
            }
        }
        if(option==2)
        {
            cout << "Enter the name of 2nd Person: " ;
            cin >> Name_of_person2;

            departure_city_of_person_2=FromCity();
            cout << "Departure City: " << departure_city_of_person_2 << endl;

            arrival_city_of_person_2=ToCity(departure_city_of_person_2);
            cout << "Arrival City: " << arrival_city_of_person_2 << endl;

            ticket_type_of_person_2=SeatType();
            cout << "Ticket type: " << ticket_type_of_person_2 << endl;

            foodfacility2=FoodFacility();
            cout << "Food facility: " << foodfacility2 << endl ;

            ticketprice2=TicketPrice(departure_city_of_person_2,arrival_city_of_person_2,ticket_type_of_person_2,foodfacility2);
            cout << "Ticket Price is: Rs." << ticketprice2 << endl ;

            foodprice2=FoodPrice(ticketprice2,foodfacility2);
            cout << "Food price: Rs." << foodprice2 << endl ;

            totalticketprice2=Total(ticketprice2,foodprice2);
            cout << "Total Ticket Price: " << totalticketprice2 << endl ;

            if(arrival_city_of_person_2=="N.A")
            {
                Name_of_person2="N.A";
                departure_city_of_person_2="N.A";
                ticket_type_of_person_2="N.A";
                foodfacility2="N.A";
                foodprice2=0.0;
                totalticketprice2=0.0;
                ticketprice2=0.0;
            }

        }
        if(option==3)
        {
            cout << "Enter the name of 3rd Person: " ;
            cin >> Name_of_person3;

            departure_city_of_person_3=FromCity();
            cout << "Departure City: " << departure_city_of_person_3 << endl;

            arrival_city_of_person_3=ToCity(departure_city_of_person_3);
            cout << "Arrival City: " << arrival_city_of_person_3 << endl;

            ticket_type_of_person_3=SeatType();
            cout << "Ticket type: " << ticket_type_of_person_3 << endl;

            foodfacility3=FoodFacility();
            cout << "Food facility: " << foodfacility3 << endl ;

            ticketprice3=TicketPrice(departure_city_of_person_3,arrival_city_of_person_3,ticket_type_of_person_3,foodfacility3);
            cout << "Ticket Price is: Rs." << ticketprice3 << endl ;

            foodprice3=FoodPrice(ticketprice3,foodfacility3);
            cout << "Food price: Rs." << foodprice3 << endl ;

            totalticketprice3=Total(ticketprice3,foodprice3);
            cout << "Total Ticket Price: " << totalticketprice3 << endl ;
            
            if(arrival_city_of_person_3=="N.A")
            {
                departure_city_of_person_3="N.A";
                ticket_type_of_person_3="N.A";
                foodfacility3="N.A";
                foodprice3=0.0;
                totalticketprice3=0.0;
                ticketprice3=0.0;
            }

        }
        if(option==4)
        {
            float totalrevenue=totalticketprice1+totalticketprice2+totalticketprice3;
            cout << "Total revenue collected is: Rs." << totalrevenue << endl ;
        }
        if(option==5)
        {
            cout << "All booked ticket details: " << endl ;
            cout << setfill(' ') << setw(15) << left << "Name" << "\t" << setfill(' ') << setw(15) << left << "Departure City" << "\t" << setfill(' ') << setw(15) << left << "Arrival City" << "\t" << setfill(' ') << setw(15) << left << "Ticket Type" << "\t" << setfill(' ') << setw(15) << left << "Food Facility" << "\t" << setfill(' ') << setw(15) << left << "Ticket Price" << "\t" << setfill(' ') << setw(15) << left << "Food Price" << "\t" << setfill(' ') << setw(15) << left << "Total Ticket Price" << endl;
        
            TicketsDetails(Name_of_person1, departure_city_of_person_1, arrival_city_of_person_1, ticket_type_of_person_1, foodfacility1, ticketprice1, foodprice1, totalticketprice1);
            TicketsDetails(Name_of_person2, departure_city_of_person_2, arrival_city_of_person_2, ticket_type_of_person_2, foodfacility2, ticketprice2, foodprice2, totalticketprice2);
            TicketsDetails(Name_of_person3, departure_city_of_person_3, arrival_city_of_person_3, ticket_type_of_person_3, foodfacility3, ticketprice3, foodprice3, totalticketprice3);
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
    cout << "4.Calculate the Total revenue... " << endl ;
    cout << "5.Display the details of all booked tickets... " << endl ;
    cout << "6.Exit..." << endl ;
    cout << "Your option..." ;
    cin >> option ;
    return option;
}
string FromCity()
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
string ToCity(string departurecity)
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
    
    int x=1;
    while (departurecity==arrivalcity)
    {
        if(x<=3)
        {
            cout << "Departure and Arrival cities cannot be same!" << endl << "Select the city again: ";
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
        }
        if(departurecity==arrivalcity)
        {
            if(x==1)
            {
                cout << "You have " << 3-x << " attempts left!" << endl;
            }
            if(x==2)
            {
                cout << "You have " << 3-x << " attempts left!" << endl ;
            }
            if(x==3) 
            {
                cout << "Sorry service not available!" << endl;
            }
        }
        if(x==4)
        {
            arrivalcity="N.A";
        }
        x=x+1;
    }
    
    return arrivalcity;
}
string SeatType()
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
string FoodFacility()
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
float TicketPrice(string departurecity,string arrivalcity,string tickettype,string FoodFacility)
{
    float price;
    if((departurecity=="Lahore" && arrivalcity=="Karachi") || (departurecity=="Karachi" && arrivalcity=="Lahore"))
    {
        price=3000;
    }
    if((departurecity=="Karachi" && arrivalcity=="Islamabad") || (departurecity=="Islamabad" && arrivalcity=="Karachi"))
    {
        price=5000;
    }
    if((departurecity=="Lahore" && arrivalcity=="Islamabad") || (departurecity=="Islamabad" && arrivalcity=="Lahore"))
    {
        price=2000; 
    }
    if(tickettype=="Business class")
    {
        price=price+price*20/100; 
    }
    return price;
}
float FoodPrice(float TicketPrice,string FoodFacility)
{
    float fprice=0.0;
    if(FoodFacility=="Yes")
    {
        fprice=TicketPrice*10/100;
    }
    return fprice;
}
float Total(float TicketPrice,float FoodPrice)
{
    float totalticketprice=TicketPrice+FoodPrice;
    return totalticketprice;
}
void TicketsDetails(string name,string departurecity,string arrivalcity,string tickettype,string FoodFacility,float TicketPrice,float FoodPrice,float totalticketprice)
{
    cout << setfill(' ') << setw(15) << name << "\t" << setfill(' ') << setw(15) << left << departurecity << "\t" << setfill(' ') << setw(15) << left  << arrivalcity << "\t" << setfill(' ') << setw(15) << left << tickettype << "\t" << setfill(' ') << setw(15) << left << FoodFacility << "\t" << setfill(' ') << setw(15) << left  << TicketPrice << "\t" << setfill(' ') << setw(15) << left << FoodPrice << "\t" << setfill(' ') << setw(15) << left << totalticketprice << endl;
}