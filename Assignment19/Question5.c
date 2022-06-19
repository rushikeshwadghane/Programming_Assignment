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
    PNODE temp = *head;
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->next = NULL;
    newn->Data = no;
    if(*head ==NULL)
    {
        *head= newn;
    }
    else{
        while (temp->next!=NULL)
        {
            temp =  temp->next;
        }
        temp->next = newn;
        newn->next = NULL;
    }
}
int MinNode(PNODE head)
{
    int digit=0,imin=0;
    imin=head->Data;
   while(head!=NULL)
   {
       if(imin>head->Data)
       {
           imin = head->Data;
       }
       head=head->next;
   }
   return imin;
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
int main()
{
    PNODE first= NULL;
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
    iRet = MinNode(first);
    printf("%d is Minimum Node of LinkedList.\n",iRet);
    return 0;
}