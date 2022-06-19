#include<stdio.h>
#include<stdlib.h>

struct node
{
    int Data;
    struct node *next;
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertNode(PPNODE head,int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->Data=no;
    newn->next = NULL;
    PNODE temp= *head;
    if(*head==NULL)
    {
        *head= newn;
    }
    else{
        while(temp->next!=NULL)
        {
           temp = temp->next;
        }
        temp->next = newn;
        newn->next= NULL;
    }
}
void Display(PNODE head)
{
    while(head!=NULL)
    {
        printf("%d ",head->Data);
        head= head->next;
    }
    printf("\n");
}
void Reverse(PPNODE head)
{

    PNODE temp= *head;
    PNODE temp2 = NULL;
    PNODE prev = NULL;
    while (temp!=NULL)
    {
        temp2= temp->next;
         temp->next = prev;
         prev  = temp;
         temp=temp2;
    }

    *head = prev;
}

int main()
{
    PNODE first = NULL;
    int n=0,i=0,ivalue=0;
    printf("Enter number of element you want to Insert\n");
    scanf("%d",&n);
    printf("Enter value for Insert node.\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ivalue);
        InsertNode(&first,ivalue);
    }
    Display(first);
    printf("Reverse LInkedList:\n");

    Reverse(&first);
    Display(first);

    
    return 0;
}