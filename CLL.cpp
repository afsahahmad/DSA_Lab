#include<iostream>
using namespace std;
struct Node
{
  int num;
  struct Node *next;
} *head;

void insertStart (struct Node **head, int data)	
{
  struct Node *newNode = (struct Node *) 
  newNode->num = data;
  if (*head == NULL)
    {
      *head = newNode;		
      (*head)->next = *head;	
      cout << newNode->num << " Inserted\n";
      return;
    }
  struct Node *curr = *head;
   while (curr->next != *head)
    {
      curr = curr->next;
    }
  curr->next = newNode;		
  newNode->next = *head;	
  *head = newNode;		
  cout << newNode->num << " Inserted\n";
}
void deleteEnd (struct Node **head)	
{
  struct Node *cur, *prev;
  cur = (*head);
  while (cur->next != *head)
    {
      prev = cur;
      cur = cur->next;
    }
  prev->next = *head;
  free (cur);
}
void display (struct Node *head)
{
  cout << "\nCircular Linked List : " << endl;
  if (head == NULL)
    return;

  struct Node *temp = head;
  do
    {
      cout << temp->num << " ";
      temp = temp->next;
    }
  while (temp != head);
  cout << endl;
}
int main ()
{
   
  struct Node *head = NULL;
  insertStart (&head, 1);
  insertStart (&head, 2);
  insertStart (&head, 3);
  insertStart (&head, 4);
  insertStart (&head, 5);
  cout << "Before insertion ";
  display (head);
  deleteEnd (&head);
  cout << "After insertion ";
  display (head);
  return 0;
}
