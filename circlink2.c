//circular linked list with more operations

#include<stdio.h>
#include<stdlib.h>

//struct decalration
typedef struct NODE
{
    int data;
    struct NODE *link;
}node;
//functions declaration
node *getnode()
{
    node *temp;
    temp = (node*)malloc(sizeof(node*));
    return temp;
}
int countnode(node *last)
{
    node *temp;
    int count=0;
    if(last == NULL)
    {
        count = 0;
        return count;
    }
    temp = last->link;
    while(temp != last)
    {
        count =count+1;
        temp = temp->link;
    }
    count = count+1;
    return count;
}
void display(node *last)
{
    node *temp;
    if(last == NULL)
    {
        printf("no node to print\n");
        return;
    }
    temp = last->link;

    while(temp != last)
    {
        printf("%d-->",temp->data);
        temp = temp->link;
    }
    printf("%d\n",temp->data);
}
node *insert_front(node *last,int ele)
{
    node *new;
    new = getnode();
    new->data = ele;
    if(last == NULL)
    {
        last = new;
    }
    else
    {
        new->link = last->link;
    }
    last->link = new;
    return last;
}

node *insloc(int ele,node *last)
{
    node *prev,*present,*new;
    int pos,cnt =1;
    new = getnode();
    new->data = ele;
    if(last==NULL || last->link == last)
    {
        printf("inserting at certain location not possible\n");
        return NULL;
    }
    prev = NULL;
    present = last->link;
    display(last);
    printf("enter position of element to be placed :\n");
    scanf("%d",&pos);
    if(pos == 1)
    {
        printf("insertion not possin=ble\n");
        return last;
    }
    while(cnt!=pos)
    {
        prev = present;
        present = present->link;
        cnt = cnt+1;
    }
    prev->link = new;
    new->link = present;
    return present;
}
//driver code
int main()
{
    node *last = NULL;
    int ele,count,ch;
    for(;;)
    {
        printf("enter choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("enter element : ");
            scanf("%d",&ele);
            last = insert_front(last,ele);
            break;
            case 2:
            printf("enter element : ");
            scanf("%d",&ele);
            last = insloc(ele,last);
            break;
            case 3 :
            display(last);
            break;
            case 4 :
            exit(0);
            default : 
            printf("enter input from (1-4) only");
            break;
        }
    }
    return 0;
}