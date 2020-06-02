#include"my.h"


class base
{
private:
     base *ptr1;
     int data;
public:
     base(){}
     base(int d) { data=d }

class derived:private base
public:
     void member()

void derived::member()
{
base *temp=new base(val); //val is some integer
temp->ptr1=NULL; //I can't make this happen. To do this I had to declare all the private
                 members of the base class public. 
};