Convert time from HH:MM:SS format to seconds using class program in C++.

/*C++ program to read time in HH:MM:SS format and convert into total seconds.*/
#include <iostream.h>
#include <iomanip.h>
class Time
{
    private:
        int seconds;
        int hh,mm,ss;
    public:
        void getTime(void);
        void convertIntoSeconds(void);
        void displayTime(void);
};
 
void Time::getTime(void)
{
    cout << "Enter time:" << endl;
    cout << "Hours?   ";          cin >> hh;
    cout << "Minutes? ";          cin >> mm;
    cout << "Seconds? ";          cin >> ss;
}
 
void Time::convertIntoSeconds(void)
{
    seconds = hh*3600 + mm*60 + ss;
}
 
void Time::displayTime(void)
{
    cout << "The time is = " << setw(2) << setfill('0') << hh << ":"
                             << setw(2) << setfill('0') << mm << ":"
                             << setw(2) << setfill('0') << ss << endl;
    cout << "Time in total seconds: " << seconds;
}
 
int main()
{
    Time T; //creating objects
     
    T.getTime();
    T.convertIntoSeconds();
    T.displayTime();
     
    return 0;
}

/*
output 
   Enter time:
    Hours?   1
    Minutes? 1
    Seconds? 6
    The time is = 01:01:06
    Time in total seconds: 3666
*/