#include<stdio.h>
#include<stdlib.h>





typedef struct student {
    int val;
    struct student *next;
} node;

void printer(node *head){
    node *temp = head;
    while (temp!=NULL)
    {
        printf("%d ", temp->val);
        temp=temp->next;
    }
    
}



int main(){

//creating three nodes

node node1, node2, node3, node4;
//introducing a head pointer to keep track of the head of linkedlist
node *head;


//filling these nodes up with data
node1.val =5;
node2.val =6;
node3.val=7;
node4.val = 20;

//linking these nodes

head=&node1;//storing the address of the first node in the head pointer
node1.next=&node2;
node2.next = &node4;
node4.next=&node3;
node3.next=NULL; //the end of the linked list

//5 -> 6 -> 7

//wait I need to insert 20 after 6 and before 7 so that it looks:
//5->6->20->7




printer(head);




    

    return 0;
}
//function definitions
