//wap to sum of two no.
#include<iostream.h>
#include<conio.h>
#include<ctime.h>
class disc
{
public: disc();
       void roll();
       void display();
       void reset();

       int lastRoll, totalRolls, totalScore;
};

disc::disc()
{
lastRoll=0;
totalRolls++;

lastRoll=(rand()%6+1; // gen. random no. between 1 to 6.

totalScore=totalScore+lastRoll;
}
void disc::display()
{
cout<<"\n Your last roll was  "<<lastRoll;
cout<<"\n You have rolled  "<<totalRolls<<" times ";
cout<<"\n Your total score is  "<<totalScore;
}

void disc::reset()
{
lastRoll=0;
totalScore=0;
totalRolls=0;
}







getch();
}







