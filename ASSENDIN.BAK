#include<stdio.h>
#include<conio.h>
main()
{
clrscr();
int a[5],temp;
printf("\n enter 5 elements : \n");
for(int i=0;i<5;i++)
scanf("%d",&a[i]);
for (i=4;i>=0;i--)
{
   for(int j=0;j<i;j++)
   {
   if(a[j]>a[j+1])
    {
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
    }
   }
}
for(i=0;i<5;i++)
printf(" %d ",a[i]);
getch();
}





