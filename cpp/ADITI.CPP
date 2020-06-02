#include<stdio.h>
#include<string.h>
#include<iostream.h>
int main ()
{
 char astr[51];
 int length;
 cout<<"\nEnter a string (max 50 characters)>n";
 gets(astr);
 length=strlen (astr);
 puts(astr);
 cout<<"\nThe length of the string is :"<<length<<"\n";
 retrun 0;
}