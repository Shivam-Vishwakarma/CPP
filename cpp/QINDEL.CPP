//Write a program to implement insert and delete operations on a queue implemented in the form of a circular array.
#include<iostream.h>
#include<stdlib.h>
class Queues
{
int FRONT, REAR, max;
int queue_array[5];
public:
Queues();
void insert(int element);
void remove();
void display();
};
Queues :: Queues()
{
/* Initializing the values of the variables REAR and FRONT to -1 to
indicate that the queue is initially empty. */
FRONT=-1;
REAR=-1;
max=5;
}
void Queues :: insert(int element)
{
if((FRONT == 0 && REAR == max-1) || (FRONT == REAR + 1))/*This statement
checks for the overflow condition. */
{
cout<<"\nQueue overflow\n";
return;
}
/* The following statement checks whether the queue
is empty. If the queue is empty, then the value of
the REAR and FRONT variables is set to 0. */
if(FRONT == -1)
{
FRONT = 0;
REAR = 0;
}
else
{
/* If REAR is at the last position of the array, then the
value of REAR is set to 0 that corresponds to the first
position of the array. */
if(REAR == max-1)
REAR = 0;
else
REAR = REAR + 1; /* If REAR is not at the last
position, then its value is incremented by one. */

}
/* Once the position of REAR is determined, the
element is added at its proper place. */
queue_array[REAR] = element;
}
void Queues :: remove()
{
if (FRONT == -1) /* Checks whether the queue is
empty. */
{
cout<<"\n Queue underflow \n";
return;
}
cout<<"\n The element deleted from the queue is "<<queue_array[FRONT]<<"\n";
if (FRONT == REAR) // Checks if the queue has one element.
{
FRONT = -1;
REAR = -1;
}
else
{
/* If the element to be deleted is at the last position
of the array, then the value of FRONT is set to 0 i.e to
the first element of the array. */
if (FRONT == max -1)
FRONT = 0;
else
FRONT = FRONT + 1; /* FRONT is incremented by
one if it is not the first
element of array. */
}
}
void Queues :: display()
{
int FRONT_position = FRONT;
int REAR_position = REAR;
if (FRONT == -1) /* Checks if the queue is empty. */
{
cout<<"Queue is empty\n ;";
return;
}
cout<<"\n Elements in the queue are ";
if (FRONT_position <= REAR_position)
{
while (FRONT_position <= REAR_position)
/* Traverses the queue till the last element
present in an array.*/
{
cout<<queue_array[FRONT_position]<<"  ";
FRONT_position++;
}
cout<<endl;
}
else
{
while (FRONT_position <= max - 1) /* Traverses the queue till the last position of the array. */
{
cout<<queue_array[FRONT_position] <<"  ";
FRONT_position++;
} FRONT_position = 0; /* Set the FRONT position to the first element of thearray. */
while (FRONT_position <= REAR_position)
/* Traverses the array till the last element present in the queue. */
{
cout<<queue_array[FRONT_position] <<"   ";
FRONT_position++;
}
cout<<endl;
}
}

void main()
{
Queues obj;
char ch;
int num;
while (1)
{
cout<<"Menu";
cout<<"\n 1. Implement insert operation ";
cout<<"\n 2. Implement delete operation ";
cout<<"\n 3. Display values             ";
cout<<"\n 4. Exit ";
cout<<"\nEnter your choice (1-4) :  " ;
cin>>ch;
cout<<endl;
switch (ch)
{
case '1':
{
cout<<"Enter a number: ";
cin>>num;
cout<<endl;
obj.insert(num);

}
break;
case '2':
{
obj.remove();
}
break;
case '3':
{
obj.display();
cout<<"\n";
}
break;
case '4':
{
exit(0);
}
}}}