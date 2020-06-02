//basic file operation
#include <iostream.h>
#include <fstream.h>

main () {
  ofstream m;
  m.open ("a.txt");
  m<< "Writing this to a file.\n";
  m<<"\n hello sourabh and zaigam ";
  m.close();
}
