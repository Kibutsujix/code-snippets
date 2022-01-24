/*
schematic representation of linked lists
        ________________                ________________               ________________
FIRST-->| 11 | CAT |   | ----- SECOND-->| 22 | BAT |   | ----- THIRD-->| 33 | HAT |   | ----- NULL/
        ----------------                ----------------               ----------------
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    int idata;
    char cdata[3];
    struct node *link;
};
typedef struct node NODE;
NODE *get_node();
void display(NODE *first);

int main()
{
    NODE *first,*second,*third;
    first = NULL;
    first = get_node();
    second = get_node();
    third = get_node();
    first->idata = 11;
    strcpy(first->cdata,"CAT");
    first->link = NULL;
    second->idata = 22;
    strcpy(second->cdata,"BAT");
    first->link = second;
    third->idata = 33;
    strcpy(third->cdata,"HAT");
    third->link = NULL;
    second->link = third;
    display(first);
    return 0;
}

NODE *get_node()
{
    NODE *temp;
    temp = (NODE*)malloc(sizeof(NODE*));
    if(temp == NULL)
    {
        printf("No memory");
        return NULL;
    }
    return temp;
}

void display(NODE *first)
{
    NODE *temp;
    for(temp = first;temp!='\0';temp = temp->link)
    {
        printf("%s\t%d\n",temp->cdata,temp->idata);
    }
    return ;
}
/*
output
CAT     11
BAT     22
HAT     33
*/