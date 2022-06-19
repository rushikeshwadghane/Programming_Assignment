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
void DisplayPalindrome(PNODE Head)
{
    printf("Palindrome node of LL:\n");
    int temp=0,digit=0,rev=0;
   while (Head!=NULL)
   {
       temp = Head->Data;
       rev=0;
       while(temp!=0)
       {
           digit = temp%10;
           rev = (rev*10)+digit;
           temp = temp/10;
       }
       if(rev== Head->Data)
       {
           printf("%d  ",rev);
       }
       
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
    
    DisplayPalindrome(first);

    
    return 0;
}