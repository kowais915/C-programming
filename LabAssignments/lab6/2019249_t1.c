#include <stdio.h>
#include <stdlib.h>



// void exch(int *x, int *y){

//     int t = *x;
//     *x = *y;
//     *y = t;
// }

typedef struct node{
    int d;
    struct node* next;
    
} node;


//swaping nodes
node* exchange(node* x, node* y)
{
    node* temp = y->next;
    y->next = x;
    x->next = temp;

    return y;
}

//sorting
int sorting(node** head, int t)
{
    node** star;
    int i;
    int j;
    int ex;
    for(i=0; i<=t;i++){
       star = head;
       ex =0;

       for(j=0; j<t-i-1; j++)
       {
           node* ptr0 = *star;
           node* ptr1 = ptr0->next;


           if(ptr0->d > ptr1->d){

               *star = exchange(ptr0, ptr1);
               ex =1;
           }

           star = &(*star) -> next;
       }

    if (ex==0)
    {
        break;
    }
    

    }
}


//printer

void printer(node* i)
{
    while (i!=NULL)
    {
        /* code */
        printf("%d:  ", i->d);

        i = i->next;
    }
    
    
}


//insertion

void insert(node** str, int dt)
{
    node* p1 = (node*)malloc(sizeof(node));

    p1->d = dt;
    p1->next= *str;
    *str = p1;
}


//to print array

// void print(int array[], int s)
// {
//     int i;
//     for (i = 0; i < s; i++)
//     {
//         /* code */
//         printf("%d\n", array[i]);
//     }
    
// }

//sorting

// void sort(int array[], int num)
// {
//     int m;
//     int n;
//     for ( m = 0; m < num-1; m++)
//     {
//         /* code */
         
//          for (n = 0; n < num - m -1; n++)
//          {
//              /* code */

//              if (array[n]>array[n+1])
//              {
//                  exch(&array[n], &array[n+1]);
//              }
             



//          }
         



//     }
    
// }

int main(){
    int test[] = {1, 3, 2, 4, 0, 5, 6};
    int size;

    
    // sort(test, 7);
    // //sorting

    // print(test, 7);
    node* h = NULL;
    size = sizeof(test)/sizeof(test[0]);
    int i;
    for(i=0; i<size; i++){
        insert(&h, test[i]);
    }

    printf("Before \n");
    printer(h);

    //sorting
    sorting(&h, size);

    //sorted
    printf("Sorted: \n");
    printer(h);

    return 0;
}