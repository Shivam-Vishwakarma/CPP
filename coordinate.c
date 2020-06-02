#include<stdio.h> 
using namespace std; 
  
int main(){
    int x,y;
    printf("Enter X & Y : \n");
    scanf("%d%d",&x,&y);


  x>0?y>0?printf("i"):y<0?printf("iv")
    :printf("x-axis"):x<0?y<0?printf("ii")
    :y<0?printf("iii"):printf("x-axis")
    :y=0?printf("origin"):printf("y-axis");




}