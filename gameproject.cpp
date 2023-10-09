#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;

void header();
void gotoxy(int x,int y);
char getCharAtxy(short int x, short int y);
void printenemy1();
void eraseenemy1();
void moveenemy1();
void printenemy2();
void eraseenemy2();
void moveenemy2();
void printenemy3();
void eraseenemy3();
void moveenemy3();
void printplayer();
void eraseplayer();
void move_p_left();
void move_p_right();
void move_p_up();
void move_p_down();
void moveplayer();
void level1();

int eX1=2,eY1=2;
int eX2=7,eY2=5;
int eX3=110,eY3=7;
int pX=2,pY=47;

main()
{
    header();
    cout << "Press any key to start game!" ;
    getch();
    system("cls");

    level1();
    printplayer();

    while (true)
    {
        moveplayer();
        moveenemy1();
        Sleep(50);
        moveenemy2();
        Sleep(100);
        moveenemy3();
        Sleep(300);
    }
    
    getch();
    return 0;

}
void header()
{
    cout << "===================================================================" << endl;
    cout << "||##########    #######    #### ##########  @@@@@@@@   ###    ## ||" << endl;
    cout << "||###########   ##    ##    ##   ##        @@      @@  ####   ## ||" << endl;
    cout << "||###     ####  ##    ##    ##     ##     @@  @@@@  @@ ## ##  ## ||" << endl;
    cout << "||###     ####  #######     ##       ##   @@  @@@@  @@ ##  ## ## ||" << endl;
    cout << "||###########   ##    ##    ##         ##  @@      @@  ##   #### ||" << endl;
    cout << "||##########    ##     ##  #### ##########  @@@@@@@@   ##    ### ||" << endl;
    cout << "||###------------------------------------------------------------||" << endl;
    cout << "||###  ######  #######   ####### ####### ######  ######          ||" << endl;
    cout << "||###  ##     ##        ##       ##   ## ##   ## ##              ||" << endl;
    cout << "||###  ######  ######  ##        ####### ######  ######          ||" << endl;
    cout << "||###  ##           ##  ##       ##   ## ##      ##              ||" << endl;
    cout << "||###  ###### #######    ####### ##   ## ##      ######          ||" << endl;
    cout << "===================================================================" << endl;
  
}
void gotoxy(int x,int y)
{
	COORD coordinates;
	coordinates.X=x;
	coordinates.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void level1()
{
    cout << "#######################################################################################################################" << endl ;
    cout << "#                                                                                                                     #" << endl ;
    cout << "#                                                                                                                     #" << endl ;
    cout << "#                                                                                                                     #" << endl ;
    cout << "#                                                                                                                     #" << endl ;
    cout << "#                                                                                                                     #" << endl ;
    cout << "#                                                                                                                     #" << endl ;
    cout << "#                                                                                                                     #" << endl ;
    cout << "#                                                                                                                     #" << endl ;
    cout << "#                                                                                                                     #" << endl ;
    cout << "#                                                                                                                     #" << endl ;
    cout << "#                                                                                                                     #" << endl ;
    cout << "#                                                                                                                     #" << endl ;
    cout << "#                                                                                                                     #" << endl ;
    cout << "#                                                                                                                     #" << endl ;
    cout << "#                                                                                                                     #" << endl ;
    cout << "#                                                                                                                     #" << endl ;
    cout << "#                                                                                                                     #" << endl ;
    cout << "#                                                                                                                     #" << endl ;
    cout << "#                                                                                                                     #" << endl ;
    cout << "#                                                                                                                     #" << endl ;
    cout << "#                                                                                                                     #" << endl ;
    cout << "#                                                                                                                     #" << endl ;
    cout << "#                                                                                                                     #" << endl ;
    cout << "#                                                                                                                     #" << endl ;
    cout << "#                                                                                                                     #" << endl ;
    cout << "#                                                                                                                     #" << endl ;
    cout << "#                                                                                                                     #" << endl ;
    cout << "#                                                                                                                     #" << endl ;
    cout << "#                                                                                                                     #" << endl ;
    cout << "#                                                                                                                     #" << endl ;
    cout << "#                                                                                                                     #" << endl ;
    cout << "#                                                                                                                     #" << endl ;
    cout << "#                                                                                                                     #" << endl ;
    cout << "#                                                                                                                     #" << endl ;
    cout << "#                         |              -----------------------------                                                #" << endl ;
    cout << "#                         |                                                                                           #" << endl ;
    cout << "#                         |                                                                                           #" << endl ;
    cout << "#                         |                                                                                           #" << endl ;
    cout << "#             ------------|--------------------                                                                       #" << endl ;
    cout << "#                         |                                                                                           #" << endl ;
    cout << "#                         |                                                                                           #" << endl ;
    cout << "#                         |                                                                                           #" << endl ;
    cout << "#                         |                                                                                           #" << endl ;
    cout << "#                         |                                                                                           #" << endl ;
    cout << "#                                                                                                                     #" << endl ;
    cout << "#                                                                                                                     #" << endl ;
    cout << "#                                                                                                                     #" << endl ;
    cout << "#                                                                                                                     #" << endl ;
    cout << "#                                                                                                                     #" << endl ;
    cout << "#######################################################################################################################" << endl ;
}
void printenemy1()
{
    gotoxy(eX1,eY1);
    cout << "\\./";
    gotoxy(eX1,eY1+1);
    cout << "-G-";
    gotoxy(eX1,eY1+2);
    cout << "/-\\";     
}
void eraseenemy1()
{
    gotoxy(eX1,eY1);
    cout << "   ";
    gotoxy(eX1,eY1+1);
    cout << "   ";
    gotoxy(eX1,eY1+2);
    cout << "   ";   
}
void moveenemy1()
{
        eraseenemy1();
        eX1=eX1+1;
        if(eX1==114)
        {
            eX1=5;
        }
        printenemy1();
        
}
void printenemy2()
{
    gotoxy(eX2,eY2);
    cout << "/^\\";
    gotoxy(eX2,eY2+1);
    cout << "|O|";
    gotoxy(eX2,eY2+2);
    cout << "\\#/";   
}
void eraseenemy2()
{
    gotoxy(eX2,eY2);
    cout << "   ";
    gotoxy(eX2,eY2+1);
    cout << "   ";
    gotoxy(eX2,eY2+2);
    cout << "   ";   
}
void moveenemy2()
{
    eraseenemy2();
    eX2=eX2+3;
    eY2=eY2+1;
    if(eX2==82)
    {
        eX2=7;
    }
    if(eY2==30)
    {
        eY2=5;
    }
    printenemy2();
}
void printenemy3()
{
    gotoxy(eX3,eY3);
    cout << "\\|/";
    gotoxy(eX3,eY3+1);
    cout << "=S=";
    gotoxy(eX3,eY3+2);
    cout << "/+\\";   
}
void eraseenemy3()
{
    gotoxy(eX3,eY3);
    cout << "   ";
    gotoxy(eX3,eY3+1);
    cout << "   ";
    gotoxy(eX3,eY3+2);
    cout << "   ";   
}
void moveenemy3()
{
    eraseenemy3();
    eY3=eY3+1;
    if(eY3==40)
    {
        eY3=7;
    }
    printenemy3();
}
void printplayer()
{
    gotoxy(pX,pY);
    cout << "\\o/";
    gotoxy(pX,pY+1);
    cout << "-P-";
    gotoxy(pX,pY+2);
    cout << "/-\\";     
}
void eraseplayer()
{
    gotoxy(pX,pY);
    cout << "   ";
    gotoxy(pX,pY+1);
    cout << "   ";
    gotoxy(pX,pY+2);
    cout << "   ";  
}
void move_p_left()
{
    if(getCharAtxy(pX-1,pY)==' ' && getCharAtxy(pX-1,pY+1)==' ' && getCharAtxy(pX-1,pY+2)==' ')
    {
        if(GetAsyncKeyState(VK_LEFT))
        {  
            eraseplayer();
            pX=pX-1;
            printplayer();
        }
    }
}
void move_p_right()
{
    if(getCharAtxy(pX+3,pY)==' ' && getCharAtxy(pX+3,pY+1)==' ' && getCharAtxy(pX+3,pY+2)==' ')
    {
        if(GetAsyncKeyState(VK_RIGHT))
        {
            eraseplayer();
            pX=pX+1;
            printplayer();
        }
    }
}
void move_p_down()
{
    if(getCharAtxy(pX,pY+3)==' ' && getCharAtxy(pX+1,pY+3)==' ' && getCharAtxy(pX+2,pY+3)==' ')
    {
        if(GetAsyncKeyState(VK_DOWN))
        {
            eraseplayer();
            pY=pY+1;
            printplayer();
        }
    }
}
void move_p_up()
{
    if(getCharAtxy(pX,pY-1)==' ' && getCharAtxy(pX+1,pY-1)==' ' && getCharAtxy(pX+2,pY-1)==' ')
    {
        if(GetAsyncKeyState(VK_UP))
        {
            eraseplayer();
            pY=pY-1;
            printplayer();
        }
    }
    
}
void moveplayer()
{
    move_p_left();
    move_p_right();
    move_p_down();
    move_p_up();
}
char getCharAtxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar: ' ';
}
