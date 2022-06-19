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
void LargestDigit(PNODE Head)
{
    printf("Largest  Digit of each node in LL:\n");
    int temp=0,digit1=0,iMax=0,digit=0;
   while (Head!=NULL)
   {

       temp = Head->Data;
       digit1 = temp%10;
       iMax = digit1;
       while(temp!=0)
       {
           digit  = temp%10;
           if(digit>iMax)
           {
               iMax = digit;
           }
           temp = temp/10;
       }
        printf("%d ",iMax);
        Head = Head->next;
   }
   printf("\n");
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
    
    LargestDigit(first);


    
    return 0;
}