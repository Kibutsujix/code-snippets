// operations on singly linked lists

#include<stdio.h>
#include<stdlib.h>

typedef struct NODE
{
    int data;
    struct NODE *link;
}node;

node *getnode()
{
    node *temp;
    temp = (node*)malloc(sizeof(node));
    return temp;
}
node *insert_rear(int ele,node *first)
{
    node *new = getnode();
    new->data = ele;
    if(first == NULL)
    {
        new->link = NULL;
        return new;
    }
    node *temp;
    temp = first;
    while(temp->link != NULL)
    {
        temp = temp->link;
    }
    temp->link = new;
    new->link = NULL;
    return first;
}

node* insert_front(int ele,node *first)
{
    if(first == NULL)
    {
        return insert_rear(ele,first);
    }
    node *new;
    new = getnode();
    new->data = ele;
    new->link = first;
    return new;
}

node *delete_rear(node *first)
{
    if(first == NULL)
    {
        printf("deletion not possible\n");
        return NULL;
    }
    if(first->link == NULL)
    {
        printf("%d has been deleted\n",first->data);
        first = NULL;
        return first;
    }
    node *prev,*present;
    present = first;
    while(present->link != NULL)
    {
        prev = present;
        present = present->link;
    }
    printf("%d has been deleted\n",present->data);
    prev->link = NULL;
    free(present);
    return first;
}

node *delete_front(node *first)
{
    if(first == NULL)
    {
        printf("deletion not possible\n");
        return NULL;
    }
    if(first->link == NULL)
    {
        first = delete_rear(first);
        return first;
    }
    node *temp;
    temp = first;
    printf("%d has been deleted\n",temp->data);
    temp = first->link;
    return temp;
}

void display(node *first)
{
    node *temp;
    if(first == NULL)
    {
        printf("no node to display\n");
        return;
    }
    temp = first;
    while(temp->link!=NULL)
    {
        printf("%d==>",temp->data);
        temp = temp->link;
    }
    printf("%d",temp->data);
    printf("\n");
}

void main()
{
    node *first = NULL;
    int ch,ele;
    for(;;)
    {
        printf("enter\n1.insert rear\n2.insert front\n3.delete rear\n4.delete front\n5.display\n6.exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 : 
            printf("enter the element to be inserted : ");
            scanf("%d",&ele);
            first = insert_rear(ele,first);
            break;
            case 2 :
            printf("enter the element to be inserted : ");
            scanf("%d",&ele);
            first = insert_front(ele,first);
            break;
            case 3:
            first = delete_rear(first);
            break;
            case 4:
            first = delete_front(first);
            break;
            case 5 :
            display(first);
            break;
            case 6:
            exit(0);
            default : 
            printf("enter proper input\n");
            break;
        }
    }
}
