// stringizer.cpp
#include <stdio.h>
#include<conio.h>
#define st( x ) printf(  "\n" #x)
int main() {
clrscr();
   st( In quotes in the printf function call );
   //st( "In quotes when printed to the screen" );
  // st( "This: \"  prints an escaped double quote" );
getch();
}