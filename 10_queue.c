#include<stdio.h>
#define MAX 3
int queue[MAX];
int front= -1,rear = -1;

void main()
{
    int option,val;
    do
    {
        printf("\n***** MAIN MENU *****");
        printf("\n1. Insert Element");
        printf("\n2. Delete Element");
        printf("\n3. Display Element");
        printf("\n4. Exit \n");
        printf("\nEnter your choice :");
        scanf("%d",&option);

        switch(option)
        {
        case 1:
            insert();
            break;
        case 2:
            delete_element();
            break;
        case 3:
            display();
            break;
        }
    }
    while(option !=4);
}

void insert()
{
    int val;
    printf("Enter the value :");
    scanf("%d",&val);

    if(rear == MAX-1)
        printf("\nOVERFLOW...!");

    else if(rear == -1 || front== -1)
    {
        rear = 0;
        front =0;
        queue[rear]=val;
    }
    else
    {
        rear ++;
        queue[rear]=val;
    }
}

void delete_element()
{
    int val;
    if (front == -1)
        printf("\nUnderflow...!");

    else if(front == rear)
    {
        val = queue[front];
        printf("\nDeleted value is %d",val);
        front=-1;
    }
    else
    {
        val = queue[front];
        printf("Deleted value is %d",val);
        front++;
    }
}

void display()
{
    int i;

    if(front == -1 ||  front>rear)
        printf("\n QUEUE IS EMTPY");
    else
    {
        for(i = front; i<=rear; i++)
            printf("\n %d",queue[i]);
    }
}
