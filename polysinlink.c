// polynomial addition using singly linked lists

#include<stdio.h>
#include<stdlib.h>

typedef struct NODE
{
    int expo;
    float coef;
    struct NODE *link;
}node;

node *getnode()
{
    node *temp;
    temp = (node*)malloc(sizeof(node*));
    return temp;
}

int compare(int x,int y)
{
    if(x>y)
        return 1;
    else if(x<y)
        return -1;
    else 
        return 0;
}

node *polyadd(node *p1,node*p2);

node *insert_rear(int exp,float coeff,node *p1)
{
    node *temp;
    node *new = getnode();
    new->expo = exp;
    new->coef = coeff;
    new->link = NULL;
    if(p1 == NULL)
    {
        return new;
    }
    temp = p1;
    while(temp->link != NULL)
    {
        temp = temp->link;
    }
    temp->link = new;
    return p1;
}

void display(node *p1)
{
    node *temp = p1;
    printf("the sum is : ");
    while(temp!=NULL)
    {
        printf("%.2f x^%d + ",temp->coef,temp->expo);
        temp = temp->link;
    }
}

// driver code
int main()
{
    int exp,n1,n2,i;
    float coeff;
    node *p1=NULL,*p2=NULL,*sum=NULL;
    printf("enter number of terms in polynoial 1 : ");
    scanf("%d",&n1);
    printf("enter polynomial 1 : \n");
    for(i=0;i<n1;i++)
    {
        scanf("%f%d",&coeff,&exp);
        p1 = insert_rear(exp,coeff,p1);
    }
    printf("enter number of terms in polynomial 2 : ");
    scanf("%d",&n2);
    printf("enter polynomial 2 : \n");
    for(i=0;i<n2;i++)
    {
        scanf("%f%d",&coeff,&exp);
        p2 = insert_rear(exp,coeff,p2);
    }
    sum = polyadd(p1,p2);
    display(sum);
    printf("\n");
    return 0;
}

//polynomial addition function
node *polyadd(node *p1,node *p2)
{
    node *sum = NULL;
    node *t1,*t2;
    t1 = p1;
    t2 = p2;
    while(t1!=NULL && t2!=NULL)
    {
        switch(compare(t1->expo,t2->expo))
        {
            case -1 :
            sum = insert_rear(t2->expo,t2->coef,sum);
            t2 = t2->link;
            break;
            case 0 :
            sum = insert_rear(t1->expo,(t1->coef + t2->coef),sum);
            t1 = t1->link;
            t2 = t2->link;
            break;
            case 1 :
            sum = insert_rear(t1->expo,t1->coef,sum);
            t1 = t1->link;
            break;
        }
    }  
    return sum;
}
/*
output
enter number of terms in polynoial 1 : 3
enter polynomial 1 :
1 2
1 1
13 0
enter number of terms in polynomial 2 : 4
enter polynomial 2 :
12 4
23 3
1 1
4 0
the sum is : 12.00 x^4 + 23.00 x^3 + 1.00 x^2 + 2.00 x^1 + 17.00 x^0 +

*/