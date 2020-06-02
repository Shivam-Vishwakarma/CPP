//program to Count Frequency of Characters
//Frequency of character in any string means how many times a particular character is present in any string.

#include<iostream.h>
#include<stdio.h>
#include<conio.h>

 void main()
 {
   int i,count=0;
   char ch[20],c;
   clrscr();
   cout<<"Enter Any String: ";
   gets(ch);
   cout<<"Enter any Character form string: ";
   cin>>c;
   for(i=0;ch[i]!='\0';i++)
   {
   if(ch[i]==c)
   count++;
   }
   if(count==0)
   {
   cout<<"Given character not found";
   }
   else
   {
   cout<<"Repetition of " <<c<<" "<<count<<" times";
   }
   getch();
 }
/*
Output
Enter any String: india
Enter any Character form string- i
Repetition of i 2 times
*/