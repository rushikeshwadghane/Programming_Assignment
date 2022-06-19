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
    PNODE newn=NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->Data = no;
    newn->next =NULL;
    PNODE temp = *head;
    if(*head==NULL)
    {
        *head = newn;
    }
    else{
        while (temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
        newn->next=NULL;
    }    
}

void Display(PNODE head)
{
    printf("Element of LinkedList:\n");
    while (head!=NULL)
    {
         printf(" %d ",head->Data);
         head= head->next;
    }
    printf("\n");
}
int  SumEven(PNODE head)
{
    int sum=0;
    while (head!=NULL)
    {
            if((head->Data)%2==0)
            {
               sum = sum+(head->Data);
            }
        head = head->next;
    }
    return sum;
}
int main()
{
    PNODE first = NULL;
    int n=0,i=0,ivalue=0;
    int iRet=0;
    printf("Enter number of element you want to Insert\n");
    scanf("%d",&n);
    printf("Enter value for Insert node.\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ivalue);
        InsertNode(&first,ivalue);
    }

    Display(first);
     iRet = SumEven(first);

    printf("%d is sum of Even number in LL\n",iRet);
    return 0;
}