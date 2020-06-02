#include<iostream.h>
#include<fstream>

int usercount=0, syscount=0;

int Form1::access()
{
ifstream Myfile("cityFile.txt");
if(Myfile.is_open())
{
while(!Myfile.eof())
{ 
string line;
string name=filename->text();
string password=pwd->text();


int offset; 
getline(Myfile,line);
cout<<line<<endl;

if ((( line.find(name, 0)) &&(( line.find(password,0))) != string::npos) )


cout<<"'"<<name<<"'"<<endl; 
cout<<"'"<<password<<"'"<<endl; 


}

Myfile.close();

}

else
cout<<"unable to open the file";
return 0;


}