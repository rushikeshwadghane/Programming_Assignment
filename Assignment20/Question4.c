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
int  SecondMaximum(PNODE head)
{
    int max1=0, max2=0, max=0;
    max1 = head->Data;
    max2 = head->next->Data;
    if(max1<max2)
    {
        max = max1;
        max1 = max2;
        max2 =max;
    }
    while (head!=NULL)
    {
        if(max1 < head->Data)
        {
            max2 = max1;
            head = head->next;
        }
        else if(max2<head->Data)
        {
            max2 = head->Data;
        }
        head = head->next;
    }
    return max2;
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
    iRet = SecondMaximum(first);
    printf("%d is Second Maximum number in LL\n",iRet);
    return 0;
}