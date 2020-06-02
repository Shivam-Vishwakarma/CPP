# include <iostream.h>
# include <process.h>
void main()
{
	int a[10][10],b[10][10],c[10][10];
	int i,j,m,n,p,q;
	cout<<"\nInput row and column of matrix-A \n";
	cin>>m>>n;
	cout<<"\nInput row and column of matrix-B \n";
	cin>>p>>q;
	if((m==p) &&(n==q))
		cout<<"Matrices can be added\n";
	else
	{
		cout<<"Matrices cannot be added\n";
		exit(0);
	}
	cout<<"\nInput matrix-A \n";
	for(i=0;i<m;i++)
	{
		for(j=0;j<p;j++)
			cin>>a[i][j];
	}
	cout<<"Input matrix-B \n";
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
			cin>>b[i][j];
	}
	for(i=0;i<p;i++)

	{
		for(j=0;j<q;j++)
			c[i][j]=a[i][j]+b[i][j];
	}
	cout<<"\nThe sum of two matrices is :\n";
	for(i=0;i<m;i++)
	{
		cout<<"\n";
			for(j=0;j<n;j++)
				cout<<" "<<c[i][j];
	}
}

