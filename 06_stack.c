#include<stdio.h>
#define MAX 3

int st[MAX],top =-1;
void push(int st[],int val);
void pop(int st[]);
void peep(int st[],int idx);
void update(int st[],int val,int idx);
void display(int st[]);


void main()
{
    int val,option,idx;
    do
    {
        printf("\n *-- Main Menu --*");
        printf("\n 1. Push Operation");
        printf("\n 2. Pop Operation");
        printf("\n 3. Peep Operation");
        printf("\n 4. Update Operation");
        printf("\n 5. Display Operation");
        printf("\n 6. Exit Operation");
        printf("\n\n Enter Your choice : ");
        scanf("%d",&option);

        switch(option)
        {
        case 1:
            printf("\n Enter the Number to be push on stack: ");
            scanf("%d",&val);
            push(st,val);
            break;

        case 2:
            pop(st);
            break;

        case 3:
            printf("\n Enter the Index to be search in stack: ");
            scanf("%d",&idx);
            peep(st,idx);
            break;

        case 4:
            printf("\n Enter the Number to be Update: ");
            scanf("%d",&val);

            printf("\n Enter the Index to be update :");
            scanf("%d",&idx);
            update(st,val,idx);
            break;

        case 5:
            display(st);
            break;
        }
    }
    while(option!=6);
}
//Push function
push(int st[],int val)
{
    if(top == MAX-1)
    {
        printf("\n Stack overflow \n");
    }
    else
    {
        top++;
        st[top] = val;
    }
}
//Pop function
pop(int st[])
{
    int val;
    if(top == -1)
    {
        printf("\n Stack overflow \n");
    }
    else
    {
        val = st[top];
        top--;
        printf("\n the value deleted from the stack %d",val);
    }


}
//Peep function
peep(int st[], int idx)
{
    int val;
    if(top-idx+1 <= -1)
    {
        printf("\n Stack Underflow \n");
    }
    else
    {
        val= st[top-idx+1];
        printf("\n the value stored at the top of stack :%d",val);
    }
}
//Update function
update(int  st[],int  val, int idx)
{
    if(top-idx+1<=-1)
    {
        printf("\n Stack UnderFlow \n");
    }
    else
    {
        st[top-idx+1] =1;
    }
}
//Display function
display( int st[])
{
    int i;
    if(top == -1)
    {
        printf("\n stack is Empty \n");
    }
    else
    {
        for(int i=top; i>=0; i--)
        {
            printf("\n%d ",st[i]);
        }
    }
}
