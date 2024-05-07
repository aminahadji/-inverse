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
int Is_sorted(lt **head)
{
    lt *p,*q;
    p = *head;           q = NULL;
     while(q != NULL &&p->val <= q->val)
    {
        p = p->next;
        q = q->next;

    }
    if(q == NULL)
       return 1;
    else
 return 0;
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
     insert_begin(6,&head);
        insert_begin(7,&head);
        insert_begin(5,&head);
        insert_begin(3,&head);
        insert_begin(2,&head);
        insert_begin(1,&head);

       printf("the content of the list is :\n");
       display(head);
        
        int s = Is_sorted(&head);
       if(s == 1)
          printf("the list is sorted");
       else
          printf("the list is not sorted");
}
