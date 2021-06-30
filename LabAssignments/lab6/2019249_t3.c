
#include<stdio.h>
#include<stdlib.h>



//structure
typedef struct Node
{
    int data;
    struct Node* next;
} Node;

void InsertionIntoSort(Node**, Node*);
 
void insertionSort(Node **h)
{
    Node *sorted = NULL;
  
 
    Node *curr = *h;
    while (curr != NULL)
    {
        
        Node *next = curr->next;
  
      
        InsertionIntoSort(&sorted, curr);
  
        curr = next;
    }
  
    
    *h = sorted;
}

void InsertionIntoSort(Node** h, Node* new_node)
{
    struct Node* curr;
  
    if (*h == NULL || (*h)->data >= new_node->data)
    {
        new_node->next = *h;
        *h = new_node;
    }
    else
    {
        
        curr = *h;
        while (curr->next!=NULL &&
               curr->next->data < new_node->data)
        {
            curr = curr->next;
        }
        new_node->next = curr->next;
        curr->next = new_node;
    }
}

//the push function

void push(Node** h, int nd)
{
  
    // struct Node* nnode = new Node;
  
 
    nnode->data  = nd;
  
    nnode->next = (*h);
  
    (*h)    = nd;
}

//printer
  void printer(Node *str)
{
    Node *t = str;
    while(t != NULL)
    {
        printf("%d  ", t->data);
        t = t->next;
    }
}


  




  
  

int main()
{
    Node *a = NULL;
    
  
    return 0;
}