#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>


//defining a structure

struct booklib
{
    // int id;
    // char name[30];
    // char author[30];
    int phonenumber;
    char ownerName[30]; //pub
    char email[20];//dateOfIssue
    
}newContact,bookco;


//file pointer
FILE *phonePointer;

//prototypes

void menu(void);
void user(void);
void quit(void);
void contactAdder(void);
void display(void);
void booksearchfunc(void);
int  bookidchecker(int);
void dateOfDue(void);
void bookdeleter(int);



//user menu
void menu(void)
{
    
    int choice;
    do
    {
    system("cls");
    printf("===============================================================================================================\n");
    printf("===============================================================================================================\n");
    printf("\n\n\t\t\t\t Welcome to the library database\n\n");
    printf("===============================================================================================================\n");
    printf("===============================================================================================================\n");
    

    printf("\n\n\t\t 1. Add Book \n\t\t 2. List Books \n\t\t 3. Search Book \n\t\t 4. Delete Book\n\t\t 5. Exit  \n");
    printf("==============================================================================================================\n");
    printf("==============================================================================================================\n");
     printf("\n\n\t\t Please Enter the choice : ");
    scanf("%d",&choice);
    //using the switch statement
    switch(choice)
        {
            case 1: contactAdder();break;
            case 2: display();break;
            case 3: booksearchfunc();break;
            case 4: bookdeleter(0);break;
            case 5: quit();break;
            default: printf("\n\n\t\t Invalid Choice");
                 getch();
        }
    }while(1);
}

void contactAdder(void)
{
    phonePointer=fopen("phonedirectory.txt","a");
    char ch;
    do
    {
        label:
        system("cls");
        printf("\n\n\t\t\t Add New Contact");
        printf("\n\n\t\t Please Enter the following details");
        printf("\n\n\t Book ID : ");
        scanf("%d",&newContact.phonenumber);
        if(bookidchecker(newContact.phonenumber)==0)
        {
            printf("\n\t Name : ");
            scanf(" %[^\n]s",newContact.ownerName);
            printf("\n\t Email : ");
            scanf(" %[^\n]s",newContact.email);
            
            fwrite(&newContact,sizeof(struct booklib),1,phonePointer);
            printf("\n\t Contact Successfully added");
            printf("\n\t Do you want to enter details of another person? (Y/N)");
            scanf(" %c",&ch);
        }
        else
        {
            printf("\n\t Contact already exists ");
            printf("\n\t Press any key to continue ");
            getch();
            goto label;
        }
    }while(ch=='Y'||ch=='y');
    fclose(phonePointer);
    return;
}
int bookidchecker(int id)
{
    FILE *newContact;
    int i=0;
    newContact=fopen("Books.txt","r");
    while(!feof(newContact))
    {
        if(fread(&bookco,sizeof(struct booklib),1,newContact)==1)
            if(bookco.id==id)
        {
            i=1;
            break;
        }
    }
    fclose(newContact);
    return i;
}



void display(void)
{
    phonePointer=fopen("phoneDirectory.txt","r");
    system("cls");
    printf("\n\n\t\t Phone Directory Record");
    printf("\n %5s %20s %20s %12s %11s %5s %20s %20s","Phone Number","Name","Email");
    while(!feof(phonePointer))
    {
        if(fread(&newContact,sizeof(struct booklib),1,phonePointer)==1)
        printf("\n %5d %20s %20s %12d %11d",newContact.phonenumber,newContact.ownerName,newContact.email);
    }
    fclose(phonePointer);
    printf("\n\n\t Press any key to continue");
    getch();
    return;
}


void booksearchfunc(void)
{
    phonePointer=fopen("Books.txt","r");
    char ch,name[20];int i;
    do
    {
        system("cls");
        i=0;
        rewind(phonePointer);
        printf("\n\n\t\t\t\t Book Search ");
        printf("\n\t Enter the name of the book to search : ");
        scanf(" %[^\n]s",name);
        while(!feof(phonePointer))
        {
            if(fread(&newContact,sizeof(struct booklib),1,phonePointer)==1)
            if(strcmpi(newContact.name,name)==0)
            {
                i++;
                printf("\n\t Search Result : %d",i);
                printf("\n\t BookId : %d \n\t Book Name : %s \n\t Author : %s \n\t Edition : %d \n\t Publisher : %s \n\t Date of Issue(ddmmyy) : %s",newContact.id,newContact.name,newContact.author,newContact.edition,newContact.publisher);
            }
        }
    if(i==0)
        printf("\n\t No such book found");
    printf("\n Do you want to search for any other book ? (Y/N)");
    scanf(" %c",&ch);
    }while(ch=='Y'||ch=='y');
    fclose(phonePointer);
    return;
}

void bookdeleter(int id)
{
    FILE *temp;
    int flag=0;
    temp=fopen("temp.txt","w");
    if(id==0)
    {
        flag=1;
        label:
        system("cls");
        printf("\n\n\t\t Delete Book");
        printf("\n\t Enter the BookId to be deleted : ");
        scanf("%d",&id);
        if(bookidchecker(id)==0)
        {
            printf("\n\t BookId does not exist");
            printf("\n\t Press any key to continue");
            getch();
            goto label;
        }
    }
    phonePointer=fopen("Books.txt","r");
    while(!feof(phonePointer))
    {
        if(fread(&newContact,sizeof(struct booklib),1,phonePointer)==1)
            if(newContact.id!=id)
                fwrite(&newContact,sizeof(struct booklib),1,temp);
    }
    fclose(phonePointer);
    fclose(temp);
    remove("Books.txt");
    rename("temp.txt","Books.txt");
    if(flag)
    {
        printf("\n\t Successfully deleted");
        printf("\n\t Press Enter to continue");
        getch();
    }
    return;
}
void quit(void)
{
    system("cls");
    printf("\n\n\t\t Are you sure?(Y/N) : ");
    char ch;
    scanf(" %c",&ch);
    if(ch=='Y'||ch=='y')
        exit(1);
    return;
}
//main function
int main(void)
{
  
   //calling the user function
    menu();
    return 0;
}