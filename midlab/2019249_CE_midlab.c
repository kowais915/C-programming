#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>


//defining a structure

struct booklib
{
    int id;
    char name[30];
    char author[30];
    int edition;
    char publisher[30];
    char dateOfissue[30];
    
}libra,bookco;


//file pointer
FILE *bookpointer;

//prototypes

void menu(void);
void user(void);
void quit(void);
void bookadder(void);
void display(void);
void booksearchfunc(void);
int  bookidchecker(int);
void dateOfDue(void);
void bookdeleter(int);

// typedef struct dated
// {
//     int dd,mm,yy;
// }due;



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
            case 1: bookadder();break;
            case 2: display();break;
            case 3: booksearchfunc();break;
            case 4: bookdeleter(0);break;
            case 5: quit();break;
            default: printf("\n\n\t\t Invalid Choice");
                 getch();
        }
    }while(1);
}

void bookadder(void)
{
    bookpointer=fopen("Books.txt","a");
    char ch;
    do
    {
        label:
        system("cls");
        printf("\n\n\t\t\t Add Book");
        printf("\n\n\t\t Please Enter the following details");
        printf("\n\n\t Book ID : ");
        scanf("%d",&libra.id);
        if(bookidchecker(libra.id)==0)
        {
            printf("\n\t Book Name : ");
            scanf(" %[^\n]s",libra.name);
            printf("\n\t Author : ");
            scanf(" %[^\n]s",libra.author);
            printf("\n\tEdition :");
            scanf("%d",&libra.edition);
            printf("\n\t Publisher : ");
            scanf(" %[^\n]s",libra.publisher);
             printf("\n\t Date of Issue: ");
            scanf(" %[^\n]s",libra.dateOfissue);
            fwrite(&libra,sizeof(struct booklib),1,bookpointer);
            printf("\n\t Book Successfully added");
            printf("\n\t Do you want to enter details of another book? (Y/N)");
            scanf(" %c",&ch);
        }
        else
        {
            printf("\n\t BookId already exists ");
            printf("\n\t Press any key to continue ");
            getch();
            goto label;
        }
    }while(ch=='Y'||ch=='y');
    fclose(bookpointer);
    return;
}
int bookidchecker(int id)
{
    FILE *libra;
    int i=0;
    libra=fopen("Books.txt","r");
    while(!feof(libra))
    {
        if(fread(&bookco,sizeof(struct booklib),1,libra)==1)
            if(bookco.id==id)
        {
            i=1;
            break;
        }
    }
    fclose(libra);
    return i;
}



void display(void)
{
    bookpointer=fopen("Books.txt","r");
    system("cls");
    printf("\n\n\t\t Book Record");
    printf("\n %5s %20s %20s %12s %11s %5s %20s %20s","Id","Book Name","Author Name","Edition","Publisher","Date of Issue");
    while(!feof(bookpointer))
    {
        if(fread(&libra,sizeof(struct booklib),1,bookpointer)==1)
        printf("\n %5d %20s %20s %12d %11d",libra.id,libra.name,libra.author,libra.edition,libra.publisher,libra.dateOfissue);
    }
    fclose(bookpointer);
    printf("\n\n\t Press any key to continue");
    getch();
    return;
}


void booksearchfunc(void)
{
    bookpointer=fopen("Books.txt","r");
    char ch,name[20];int i;
    do
    {
        system("cls");
        i=0;
        rewind(bookpointer);
        printf("\n\n\t\t\t\t Book Search ");
        printf("\n\t Enter the name of the book to search : ");
        scanf(" %[^\n]s",name);
        while(!feof(bookpointer))
        {
            if(fread(&libra,sizeof(struct booklib),1,bookpointer)==1)
            if(strcmpi(libra.name,name)==0)
            {
                i++;
                printf("\n\t Search Result : %d",i);
                printf("\n\t BookId : %d \n\t Book Name : %s \n\t Author : %s \n\t Edition : %d \n\t Publisher : %s \n\t Date of Issue(ddmmyy) : %s",libra.id,libra.name,libra.author,libra.edition,libra.publisher);
            }
        }
    if(i==0)
        printf("\n\t No such book found");
    printf("\n Do you want to search for any other book ? (Y/N)");
    scanf(" %c",&ch);
    }while(ch=='Y'||ch=='y');
    fclose(bookpointer);
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
    bookpointer=fopen("Books.txt","r");
    while(!feof(bookpointer))
    {
        if(fread(&libra,sizeof(struct booklib),1,bookpointer)==1)
            if(libra.id!=id)
                fwrite(&libra,sizeof(struct booklib),1,temp);
    }
    fclose(bookpointer);
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