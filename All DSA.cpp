#include <stdio.h>
#include <stdlib.h>

typedef struct st
{
  int data;
  struct st *next;
} node;

node *first = NULL;
node *ptr;
node *temp;

void create()
{
  int choice = 1;
  while (choice)
  {
    ptr = (node *)malloc(sizeof(node));
    printf("Enter data:");
    scanf("%d", &ptr->data);
    ptr->next = NULL;
    if (first == NULL)
    {
      first = temp = ptr;
    }
    else
    {
      temp->next = ptr;
      temp = ptr;
    }
    printf("Do You want to insert(0/1):");
    scanf("%d", &choice);
  }
}

void print()
{
  temp = first;
  int count = 0;
  while (temp != NULL)
  {
    printf("%d->", temp->data);
    temp = temp->next;
    count++;
  }
  printf("NULL");
  printf("\ntotal no of node: %d\n", count);
}

void insertatbeg()
{
  ptr = (node *)malloc(sizeof(node));
  printf("\nEnter the data:");
  scanf("%d", &ptr->data);
  ptr->next = NULL;
  ptr->next = first;
  first = ptr;
}

void instatend()
{
  ptr = (node *)malloc(sizeof(node));
  printf("\nEnter the node data: ");
  scanf("%d", &ptr->data);
  ptr->next = NULL;
  temp = first;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  temp->next = ptr;
}

void anypos()
{
  int pos = 0;
  int count;
  temp = first;
  ptr = (node *)malloc(sizeof(node));
  printf("\nEnter the position you want to insert:");
  scanf("%d", &pos);
  if (pos > count)
  {
    printf("Invalid position\n");
  }
  else
  {
    for (int i = 0; i < pos - 1; i++)
    {
      temp = temp->next;
    }
    printf("\nEnter the data:");
    scanf("%d", &ptr->data);
    ptr->next = temp->next;
    temp->next = ptr;
  }
}

void delatbeg()
{
  temp = first;
  first = first->next;
  free(temp);
}

void delatend()
{
  node *prevnode;
  while (temp->next != NULL)
  {
    temp = prevnode;
    temp = temp->next;
  }
  if (temp == first)
  {
    first = NULL;
  }
  else
  {
    prevnode->next = NULL;
  }
  free(temp);
}

void delatpos()
{
  int pos = 0;
  node *p;
  int count;
  temp = first;
  printf("Enter the position:");
  scanf("%d", &pos);
  if (pos > count)
  {
    printf("Invalid position");
  }
  else
  {
    for (int i = 0; i < pos - 1; i++)
    {
      temp = temp->next;
    }
    p = temp->next;
    temp->next = p->next;
    free(p);
  }
}

int main()
{
  int ch;

  while (1)
  {
    printf("\nSINGLY LINKED LIST :)\n\n");
    printf("1.Create the list.\n");
    printf("2.Insertion at begining of the list.\n");
    printf("3.Inserrtion at end of the list.\n");
    printf("4.Insert at any position of the list.\n");
    printf("5.Delete at begining of the list.\n");
    printf("6.Delete at any position of the list.\n");
    printf("7.Delete at end of the list.\n");
    printf("8.Exit\n");
    printf("\nSelect The Opreation Of SLL:\n");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
      create();
      print();
      break;

    case 2:
      insertatbeg();
      print();
      break;

    case 4:
      anypos();
      print();
      break;

    case 3:
      instatend();
      print();
      break;

    case 5:
      delatbeg();
      print();
      break;

    case 6:
      delatpos();
      print();
      break;

    case 7:
      delatend();
      print();
      break;

    case 8:
      exit(1);

    default:
      printf("Invalid choice!");
      
      
      break;
    }
  }
  return 0;
}