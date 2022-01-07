//circular linked list with more operations

#include<stdio.h>
#include<stdlib.h>

//struct decalration
typedef struct NODE
{
    int data;
    struct NODE *link;
}node;
//function definitions
//address assigner
node *getnode()
{
    node *temp;
    temp = (node*)malloc(sizeof(node*));
    return temp;
}
//counting number of nodes
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
//displaying the data field of nodes
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
//insert functions
node *insert_front(int ele,node *last)
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
node *insert_rear(int ele,node *last)
{
    node *new = getnode();
    new->data = ele;
    if(last==NULL)
    {
        last = new;
    }
    else
    {
        new->link = last->link;
    }
    last->link = new;
    return new;
}
node *insloc(int ele,node *last)
{
    node *prev,*present,*new;
    int pos,cnt =1,totcnt;
    totcnt = countnode(last);
    new = getnode();
    new->data = ele;
    if(last==NULL)
    {
        last = insert_front(ele,last);
        return last;
    }
    else if(last->link == last)
    {
        last = insert_rear(ele,last);
        return last;
    }
    prev = NULL;
    present = last->link;
    display(last);
    printf("enter position of element to be placed :\n");
    scanf("%d",&pos);
    if(pos == 1 || pos > totcnt)
    {
        printf("insertion not possible\n");
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
//delete functions
node *delete_front(node *last)
{
    node *temp;
    if(last ==NULL)
    {
        printf("empty list\n");
        return NULL;
    }
    if(last->link == last)
    {
        printf("the deleted node is %d\n",last->data);
        free(last);
        return NULL;
    }
    temp = last->link;
    last->link = temp->link;
    printf("the deleted node is %d\n",temp->data);
    free(temp);
    return last;
}
node *delete_rear(node *last)
{
    node *prev,*present;
    if(last==NULL)
    {
        printf("empty list\n");
        return NULL;
    }
    if(last->link == last)
    {
        printf("the deleted node is %d\n",last->data);
        free(last);
        return NULL;
    }
    present = last->link;
    prev = NULL;
    while(present!=last)
    {
        prev = present;
        present = present->link;
    }
    prev->link = present->link;
    printf("the deleted node is %d\n",present->data);
    free(present);
    return prev;
}
node *delloc(node *last)
{
    node *prev,*present;
    prev = NULL;
    present = last->link;
    int totcnt,cnt=1,pos;
    totcnt = countnode(last);
    display(last);
    printf("enter position to be deleted : ");
    scanf("%d",&pos);
    if(pos == 1)
    {
        last = delete_front(last);
        return last;
    }
    else if(pos == totcnt)
    {
        last = delete_rear(last);
        return last; 
    }
    else if(pos == 0 || pos > totcnt)
    {
        printf("deletion not possible\n");
        return last;
    }
    else
    {
        while(cnt!=pos)
        {
            prev = present;
            present = present->link;
            cnt = cnt +1;
        }
        prev->link = present->link;
        present->link = NULL;
        return last;
    }
}
//concatenation code
//driver code
int main()
{
    node *last = NULL;
    int ele,count,ch;
    for(;;)
    {
        printf("1. insert front\n2. insert at certain location\n3. insert rear\n4. display\n5. delete front\n6. delete rear\n7. delete at certain location\n8. exit\n");
        printf("enter choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("enter element : ");
            scanf("%d",&ele);
            last = insert_front(ele,last);
            break;
            case 2:
            printf("enter element : ");
            scanf("%d",&ele);
            last = insloc(ele,last);
            break;
            case 3 :
            printf("enter element : ");
            scanf("%d",&ele);
            last = insert_rear(ele,last);
            case 4 :
            display(last);
            break;
            case 5 :
            last = delete_front(last);
            break;
            case 6 :
            last = delete_rear(last);
            break;
            case 7:
            last = delloc(last);
            break;    
            case 8 :
            exit(0);
            default : 
            printf("enter input from (1-7) only");
            break;
        }
    }
    return 0;
}