/* Hybrid Inheritance is a feature of C++ where a class can inherit
from more than one classes. The constructors of inherited classes are
called in the same order in which they are inherited. For example, in
the following program, B's constructor is called before A's constructor.
*/
#include<iostream.h>
#include<conio.h>
class player
{
protected:
	char name[15],gender;
	int age;
};
class physique : public player
{
protected:
	float height, weight;
};
class location
{
protected : char city[15],  pin[7];
};
class game: public physique, location
{
protected : char game[15];
public :    void getdata()
	    {
	    cout<<"\n Enter the following information  ";
	    cout<<"\n enter the player name  ";
	    cin>>name;
	    cout<<"\n enter age  ";
	    cin>>age;
	    cout<<"\n enter height and weight ";
	    cin>>height>>weight;
	    cout<<"\n enter player city ";
	    cin>>city;
	    cout<<"\n enter pin code  ";
	    cin>>pin;
	    cout<<"\n enter name of game  ";
	    cin>>game;
	    }
	    void show()
	    {
	    cout<<"\n You Entered Following Information  ";
	    cout<<"\n Player Name "<<name;
	    cout<<"\n Player Gender  "<<gender;
	    cout<<"\n Player Height  "<<height;
	    cout<<"\n Player Weight   "<<weight;
	    cout<<"\n Player City "<<city;
	    cout<<"\n Player Pin Code "<<pin;
	    cout<<"\n Player Game   "<<game;
	    }
};
void main()
{   clrscr();
    game g;
    g.getdata();
    g.show();
    getch();
}

