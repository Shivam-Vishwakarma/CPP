/* C program to randomly select a node from a singly linked list */

*/
How does this work?
Let there be total N nodes in list. It is easier to understand from last node.

The probability that last node is result simply 1/N [For last or N’th node, we generate a random number between 0 to N-1 and make last node as result if the generated number is 0 (or any other fixed number]

The probability that second last node is result should also be 1/N.

The probability that the second last node is result 
          = [Probability that the second last node replaces result] X 
            [Probability that the last node doesn't replace the result] 
          = [1 / (N-1)] * [(N-1)/N]
          = 1/N

Similarly we can show probability for 3rd last node and other nodes.

*/


#include<stdio.h>
#include<iostream.h>
#include<stdlib.h>
#include <time.h>
/* Link list node */
struct node
{
    int key;
    struct node* next;
};
// A reservoir sampling based function to print a
// random node from a linked list
void printRandom(struct node *head)
{
    // IF list is empty
    if (head == NULL)
       return;
    // Use a different seed value so that we don't get
    // same result each time we run this program
    srand(time(NULL));
    // Initialize result as first node
    int result = head->key;
    // Iterate from the (k+1)th element to nth element
    struct node *current = head;
    int n;
    for (n=2; current!=NULL; n++)
    {
	// change result with probability 1/n
	if (rand() % n == 0)
	   result = current->key;
	// Move to next node
	current = current->next;
    }
    cout<<"\n Randomly selected key is  "<<result;
}
/* BELOW FUNCTIONS ARE JUST UTILITY TO TEST  */
/* A utility function to create a new node */
struct node *newNode(int new_key)
{
    /* allocate node */
    struct node* new_node =
      (struct node*) malloc(sizeof(struct node));
    /* put in the key  */
    new_node->key  = new_key;
    new_node->next =  NULL;
    return new_node;
}
/* A utility function to insert a node at the beginning
  of linked list */
void push(struct node** head_ref, int new_key)
{
    /* allocate node */
    struct node* new_node = new node;
    /* put in the key  */
    new_node->key  = new_key;
    /* link the old list off the new node */
    new_node->next = (*head_ref);
    /* move the head to point to the new node */
    (*head_ref)    = new_node;
}
// Driver program to test above functions
int main()
{
    struct node *head = NULL;
    push(&head, 5);
    push(&head, 20);
    push(&head, 4);
    push(&head, 3);
    push(&head, 30);
    printRandom(head);
    return 0;
}