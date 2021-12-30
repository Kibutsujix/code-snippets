#include<stdio.h>
#include<stdlib.h>
#define size 20

typedef struct node
{
    int data;
    struct node *link;
}NODE;
NODE *insert_front(int ele,NODE *last);
NODE *delete_front(NODE *last);
NODE *insert_rear(int ele,NODE *last);
NODE *delete_rear(NODE *last);
void display(NODE *last);
NODE *get_node();

int main()
{
    NODE *last = NULL;
    int ch,ele;
    for(;;)
    {
        printf("1.insert front\n2.insert rear\n3.delete front\n4.delete rear\n5.display\n6.exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 :
            printf("enter the element \n");
            scanf("%d",&ele);
            last = insert_front(ele,last);
            break;
            case 2 :
            printf("enter the element \n");
            scanf("%d",&ele);
            last = insert_rear(ele,last);
            break;
            case 3 :
            last = delete_front(last);
            break;
            case 4 :
            last = delete_rear(last);
            break;
            case 5 :
            display(last);
            break;
            case 6 :
            exit(0);
            default : 
            printf("enter valid input 1-6 only\n");
            break;
        }
    }
    return 0;
}

NODE *insert_front(int ele,NODE *last)
{
    NODE *new = get_node();
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
    return last;
}

NODE *insert_rear(int ele,NODE *last)
{
    NODE *new = get_node();
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

NODE *delete_front(NODE *last)
{
    NODE *temp;
    if(last =NULL)
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

NODE *delete_rear(NODE *last)
{
    NODE *prev,*present;
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

void display(NODE *last)
{
    NODE *temp;
    if(last ==NULL)
    {
        printf("list empty\n");
        return;
    }
    temp = last->link;
    while(temp!=last)
    {
        printf("%d\n",temp->data);
        temp = temp->link;
    }
    printf("%d\n",temp->data);
}

NODE *get_node()
{
    NODE *temp;
    temp = (NODE*)malloc(sizeof(NODE*));
    return temp;
}

/*
output
program starts

1.insert front
2.insert rear
3.delete front
4.delete rear
5.display
6.exit
1
enter the element
12
1.insert front
2.insert rear
3.delete front
4.delete rear
5.display
6.exit
2
enter the element
14
1.insert front
2.insert rear
3.delete front
4.delete rear
5.display
6.exit
5
12
14
1.insert front
2.insert rear
3.delete front
4.delete rear
5.display
6.exit
6

program terminates
*/