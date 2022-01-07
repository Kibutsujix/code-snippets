#include <stdio.h>
#include <stdlib.h>
typedef struct poly
{
    float co;
    int ex;
    struct poly *link;
}node;
node* get_node()
{
    node *temp=NULL;
    temp=(node*)malloc(sizeof(node));
    if(temp==NULL)
        printf("No memory\n");
    return temp;
}
node *res=NULL;
node* ins_rear(float c,int e,node *first)
{
    node *temp=get_node(),*tent=NULL;
    temp->co=c;
    temp->ex=e;
    temp->link=NULL;
    if(first==NULL)
        return temp;
    for(tent=first;tent->link!=NULL;tent=tent->link)
        1;
    tent->link=temp;
    return first;
}
int comp(int a,int b)
{
    if(a<b)
        return -1;
    else if(a>b)
        return 1;
    else
        return 0;
}
node* polyadd(node *f,node *fa,node *s,node *fb)
{
    node *tempa=f,*tempb=s,*pres=f,*prev=NULL;
    if(f==NULL)
    {
        res=s;
        return s;
    }
    if(s==NULL)
    {
        res=f;
        return f;
    }
    fa->link=s;
    while((tempa!=fa->link)&&(tempb!=fb->link))
    {
        switch(comp(tempa->ex,tempb->ex))
        {
            case -1:ins_rear(tempb->co,tempb->ex,f);
                    tempb=tempb->link;
                    break;
            case 1:ins_rear(tempa->co,tempa->ex,f);
                    tempa=tempa->link;
                    break;
            case 0:ins_rear((tempa->co)+(tempb->co),tempa->ex,f);
                    tempa=tempa->link;
                    tempb=tempb->link;
                    break;
        }
    }
    for(;tempa!=fa->link;tempa=tempa->link)
        f=ins_rear(tempa->co,tempa->ex,f);
    for(;tempb!=fb->link;tempb=tempb->link)
        f=ins_rear(tempb->co,tempb->ex,f);
    res=fb->link;
    return f;
}
void display()
{
    node *temp=NULL;
    if(res==NULL)
        printf("0.00");
    else
        for(temp=res;temp!=NULL;temp=temp->link)
            printf("+%.2fx^(%d)",temp->co,temp->ex);
    printf("\n");
}
int main()
{
    int na,nb,i,expo;
    float coef;
    node *first=NULL,*fa=NULL,*second=NULL,*fb=NULL;
    printf("Enter the no. of terms in first polynomial:");
    scanf("%d",&na);
    printf("Enter the coefficients and exponents of first polynomial\n");
    for(i=0;i<na;i++)
    {
        scanf("%f %d",&coef,&expo);
        first=ins_rear(coef,expo,first);
    }
    if(first!=NULL)
        for(fa=first;fa->link!=NULL;fa=fa->link)
            1;
    printf("Enter the no. of terms in second polynomial:");
    scanf("%d",&nb);
    printf("Enter the coefficients and exponents of second polynomial\n");
    for(i=0;i<nb;i++)
    {
        scanf("%f %d",&coef,&expo);
        second=ins_rear(coef,expo,second);
    }
    if(second!=NULL)
        for(fb=second;fb->link!=NULL;fb=fb->link)
            1;
    first=polyadd(first,fa,second,fb);
    printf("The result of polynomial addition is:");
    display();
    return 0;
}