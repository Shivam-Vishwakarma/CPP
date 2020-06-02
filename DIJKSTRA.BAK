#include<iostream.h>
#include<conio.h>
void sort(int *a,int n){

	for(int pos,i=0;i<n;i++)
		{
		pos=i;
			for(int j=i+1;j<n;j++)
				if(a[pos]>a[j])
					pos=j;
		if(i!=pos)
			a[i]=a[i]+a[pos]-(a[pos]=a[i]);
		}
}

void init(unsigned int** a,int n){
//memory allocation
*a=new unsigned int[n];
for(int k=0;k<n;k++)
	a[k]=new unsigned int[n];

//initiating every path with 00 OR 65535
for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
		a[i][j]=65535;
a[0][0]=0;

}
void main(){
clrscr();
unsigned int **a= NULL,*dist=NULL,*visit=NULL,**cost=NULL;
int n,i,j,q,src=0;
cout<<"\n enter num of nodes : ";
cin>>n;
q=n-1;
init(a,n);
*visit=new int[n];
for(i=1;i<n;i++) {
	visit[i]=0;
	}
visit[src]=1;

*dist=new unsigned int[n];
*cost=new unsigned int[n];
for(int k=0;k<n;k++)
	cost[k]=new unsigned int[n];

/////////////////////////////////////
cout<<"Enter costs :     \n(any big num (less than 65535) for infinity)\n";

for(i=0;i<n;i++)
	for(j=0;j<n;j++)
		{
		if(i==j) {cost[i][j]=0;continue;}
		cout<<endl<<i+1<<" -> "<<j+1<<" : ";
		cin>>cost[i][j];
		}
for(i=0;i<n;i++)
	dist[i]=cost[src][i];
sort(dist,n);




}
getch();
}
