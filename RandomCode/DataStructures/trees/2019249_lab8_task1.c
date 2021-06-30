#include<stdio.h>
#include<string.h>
#include<stdlib.h>


typedef struct node
{
    int val;
    //node pointers to store addresses of the branches
    struct node*childL;
    struct node*childR;
} TreeBee;


TreeBee *head, *ptr;

//prototyping

struct node*insertion(struct node*e, int x);
void searchTheTree(TreeBee *starter, int userInp);



//the main function 
int main()
{
    struct node* fRoot = NULL;
    int x; 
    int entry;
    int var = 1;
    int element;
    int userChoice;
    //building user menu
    while(1)
    {
        printf("\nEnter your choice: ");
        printf("\n\t1. Insert");
        printf("\n\t2. Search ");
        printf("\n\t3. Exit \n");
        
        printf("Your choice here: ");
        scanf(" %d", &userChoice); 

        //using switch statement
        switch(userChoice)
        {
            case 1:   
                printf("Choice: %d", userChoice);
                printf("\nEnter the Element:");
                scanf("%d", &entry);
                //calling insertion function
                fRoot = insertion(fRoot,entry);
                break;
            
            case 2:  
                printf("Choice: %d", userChoice);
                printf("\nEnter element to be searched:  ");
                scanf("%d", &element);
                //calling the searching function
                searchTheTree(fRoot, element);
                if(head != NULL)
                    printf("\nSuccess! Key found in tree :)\n");
                else
                    printf("\nBad Luck! Key not found :(\n");
                break;
            case 3:  
                //exiting the menu
                printf("Choice: %d", userChoice);
                printf("\nClearing the memory and exiting the program.");
                return 0;
                
            default:
                printf("Uh-oh! Try again with a valid entry: ");
 
        }
    }
    return 0;
}

//function bosies
//==============A function for insertion==============================
struct node*insertion(struct node*entry, int x)
{
    if (entry == NULL)
    {
            entry = (struct node*)malloc(sizeof(struct node));
            entry->val = x;
            entry->childL = entry->childR = NULL;
            return entry;
    }
    else if (x < entry->val)
            entry->childL = insertion(entry->childL, x);
    else if (x > entry->val)
            entry->childR = insertion(entry->childR, x);
    return entry;
}
//==========================finsihed=================================

//=====================A function for searching======================
void searchTheTree(TreeBee *starter, int userInp)
{
    TreeBee *savePtr,*Ptr2;
    if (starter == NULL)
    {
        head = NULL;
        ptr=NULL;
    }
    if (userInp == starter -> val)
    {
        head = starter;
        ptr = NULL;
    return;
    }
    if (userInp < starter->val)
    {
        savePtr = starter;
        Ptr2 = starter->childL;
    }
    else
    {
        savePtr = starter;
        Ptr2 = starter -> childR;
    }
    while( Ptr2 != NULL)
    {
        if (Ptr2 -> val == userInp)
        {
            head = Ptr2;
            ptr = savePtr;
            return;
        }
        if(userInp < Ptr2->val)
        {
            savePtr = Ptr2;
            Ptr2 = Ptr2->childL;
        }
        else
        {
            savePtr = Ptr2;
            Ptr2 = Ptr2->childR;
        }
    }
    head = NULL;
    ptr = savePtr;
    return;
}
//=========================finished====================================
