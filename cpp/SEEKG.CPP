# include <fstream.h>
# include <conio.h>
int main ()
{ .
clrscr ();
ofstream out;
char data [25] ;
out.open ("text",ios: :out) ;
cout «"\n Enter text "«endl;
cin.getline(data,25) i
out «data;
aut.close ();
ifstream in;
in.open (\te~t", ios:: in) :
cout «endl«'Reverse Contents of the file \n":
in.seekg(O,ios::end);
int m=in.tellg();
char Chi
for (int i=l;i<=m;i++)
{
in.seekg{-i, ios: :end)';
in»ch;
cout«ch;
}
return 0;
}