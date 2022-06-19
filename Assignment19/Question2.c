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
int Count(PNODE head)
{
    int iCnt=0;
    while(head!=NULL)
    {
        iCnt++;
        head = head->next;
    }
    return iCnt;
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
int SearchFirstOccur(PNODE head,int iNo)
{
    int Size = Count(head);
    int i=0,index=0;
    for(i=1;i<=Size;i++)
    {
        if(iNo==(head->Data))
        {
         index=i;
        }
        else if(i==Size)
        {
            break;  
        }
        head= head->next;
    }
    if(i>Size)
    {
        return 0;
    }
    else
    {
        return i;
    }
}

int main()
{
    PNODE first = NULL;
    int n=0,i=0,ivalue=0,serch=0;
    int iret=0;
    printf("Enter number of element you want to Insert\n");
    scanf("%d",&n);
    printf("Enter value for Insert node.\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ivalue);
        InsertNode(&first,ivalue);
    }

    printf("Enter number for Searching:\n");
    scanf("%d",&serch);

    Display(first);

    iret = SearchFirstOccur(first,serch);
    if(iret==0)
    {
        printf("%d not occure in LL.\n",serch);
    }
    else
    {
        printf("%d first occurence in LL is At Position %d.\n",serch,iret);
    }
    return 0;
}