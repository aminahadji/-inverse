#include<stdio.h>
#include<stdlib.h>
typedef struct list
{
    int val;
    struct list *next;
}lt;
void insert_begin(int v,lt **head)
{
    lt *new;
    new = (lt *) malloc (sizeof(lt));   
    new->val = v;
    new->next = *head;
    *head = new; 
}
void INVERSE(lt *L,lt **h)
{
    lt *p;
    p = L;
    while(p != NULL)
    {
        insert_begin(p->val,h);
        p = p->next;
    }
}
void display(lt *head)
{
    lt *p;
    if(head == NULL)
    printf("the list is empty");
else
     p = head;
       while(p != NULL)
        {
            printf("%d\n",p->val);
            p = p->next;
        }
}
int main()
{
         lt *head = NULL;
         lt *p = head;
         int x;
          int b = 1;
     do
     {
        printf("enter x:\n");
        scanf("%d",&x);
        insert_begin(x,&head);
        printf("continue or no\n");
        scanf("%d",&b);
     }while(b == 1);
         
        printf("the content of the list is :\n");
    display(head);
    INVERSE(head,&p);
    printf("the content of the list is :\n");
    display(p);
}
