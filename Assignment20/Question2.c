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
void DispalyPrime(PNODE head)
{
    int i=0,flag=0;
    printf("prime number in LL:\n");
    while (head!=NULL)
    {
        flag=0;
        for(i=2;i<=((head->Data)/2);i++)
        {
            if((head->Data)%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("%d ",head->Data);
        } 
        head = head->next;
    }
    printf("\n");

    
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
    DispalyPrime(first);
    return 0;
}