#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node
{
  char *data;
  struct Node *next;
};

struct Node *newNode(char *value)
{
  struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
  temp->data = strdup(value);
  temp->next = NULL;
  return temp;
}

void printlist(struct Node *node)
{
  while (node != NULL)
  {
    printf("%s -> ", node->data);
    node = node->next;
  }
  printf("NULL\n");
}

int main()
{

  struct Node *head = NULL;
  struct Node *second = NULL;
  struct Node *third = NULL;

  head = newNode("Algoritmos");
  second = newNode("e Estrutura");
  third = newNode("de Dados!");

  head->next = second;
  second->next = third;

  printf("Lista ligada de Strings: ");
  printlist(head);

  return 0;
}