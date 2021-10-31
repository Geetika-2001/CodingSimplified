#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;

NODE * create(NODE *start)
{
    NODE *newnode,*prev;
    int c=1;
    while (c!=0)
    {
        newnode=(NODE *)malloc(sizeof(NODE));
        printf("\nEnter Information");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if (start==NULL)
            start=newnode;
        else
            prev->next=newnode;
        prev=newnode;
        printf("\nWish to Continue");
        scanf("%d",&c);

    }
    return start;
}

void display(NODE *start)
{
    printf("\nFinal Linked List :   ");
    while (start!=NULL)
    {
        printf("%d-->",start->data);
        start=start->next;
    }
}

int count(NODE *start)
{
    int n=0;

    while (start!=NULL)
    {
           start=start->next;
           n++;
    }
    return n;
}

NODE * insert_beg(NODE *start)
{
    NODE *newnode;
    newnode=(NODE *)malloc(sizeof(NODE));
    printf("\nEnter Information");
    scanf("%d",&newnode->data);
    newnode->next=start;
    return newnode;

}

void insert_end(NODE *start)
{
    NODE *newnode;
    newnode=(NODE *)malloc(sizeof(NODE));
    printf("\nEnter Information");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    while (start->next!=NULL)
        start=start->next;
    start->next=newnode;
}

void insert_bet(NODE *start, int pos)
{
    NODE *newnode,*prev=NULL;
    int i=1;
    while (start!=NULL && i<pos)
    {
        prev=start;
        start=start->next;
        i++;
    }


    newnode=(NODE *)malloc(sizeof(NODE));
    printf("\nEnter Information");
    scanf("%d",&newnode->data);
    newnode->next=start->next;
    start->next=newnode;
}

NODE *delete_first(NODE *start)
{
    NODE *temp;
    temp=start->next;
    free(start);
    return temp;
}

void delete_last(NODE *start)
{
    NODE *prev;
    while (start->next!=NULL)
    {
        prev=start;
        start=start->next;
    }
    prev->next=NULL;
    free(start);

}
NODE * delete_bet(NODE *start,int pos)
{
    NODE *head,*temp,*prev=NULL;
    int i=1;
    head=start;
    while (start!=NULL && i<pos)
    {
        prev=start;
        start=start->next;
        i++;
    }
    if (prev==NULL)
    {
        temp=start->next;
        free(start);
        head=temp;
    }
    else
    {
        prev->next=start->next;
        free(start);
    }

    return head;
}

int search(NODE *start,int val)
{
    int i=1;
    while (start!=NULL && start->data!=val)
    {
            start=start->next;
            i++;
    }

    if (start==NULL)
        return -1;
    else
        return i;
}


void main()
{
    NODE *start=NULL;
    int p,n,pos,c=1,choice,val;
    start=create(start);
    display(start);
    do
    {
        printf("\n\n1.Insert a Node at Start\n2.Insert a Node at the end\n3. Insert a Node in Between\n");
        printf("4.Delete First Node \n5. Delete Last Node\n6. Delete Any Other Node\n");
        printf("7.Display\n8. Count Number of Nodes\n9.Search a Node");
        printf("\nEnter Your Choice :");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 :    start=insert_beg(start);
                        display(start);
                        break;
            case 2 :    insert_end(start);
                        display(start);
                        break;
            case 3 :    printf("\nEnter Node Number After Which the Newnode is to be Inserted");
                        scanf("%d",&pos);
                        insert_bet(start,pos);
                        display(start);
                        break;

            case 4 :    start=delete_first(start);
                        display(start);
                        break;
            case 5 :    delete_last(start);
                        display(start);
                        break;
            case 6 :    printf("\nEnter Node Number After Which the Newnode is to be Inserted");
                        scanf("%d",&pos);
                        start=delete_bet(start,pos);
                        display(start);
                        break;
            case 7 :    display(start);
                        break;

            case 8 :    n=count(start);
                        printf("\n\nNumber of Nodes : %d",n);
                        break;
            case 9 :    printf("\nEnter Value You Want to Search :");
                        scanf("%d",&val);
                        p=search(start,val);
                        if (p>0)
                            printf("\nValue Found at Node : %d",p);
                        else
                            printf("\nValue Not Found");
                        break;
            default :   printf("\nInvalid Choice");


        }
        printf("\nWish to Continue");
        scanf("%d",&c);

    }while (c!=0);
}
