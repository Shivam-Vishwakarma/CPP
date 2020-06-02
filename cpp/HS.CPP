# include <iostream.h>
int main()
{
  int AR[50], N;
  cout <<"How many elements do you want to create array with? (max. 50)...";
  cin >> N;   cout<<endl;
  cout <<"Enter the elements of array: \n";
  for (int i =0; i < N; i++)
  {cin >> AR[i];
  }
   cout <<"\nArray with doubled elements is as follows...\n";
   for(i =0; i<N; i++)
   { AR[i] *=2; cout<<" "<<AR[i];
   }
   cout<< endl;
   return 0;
}
