// polynomial addition using circular linked lists

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef struct polynode
{
    float coef;
    int expon;
    struct polynode *link;
}poly;

poly *read_poly(poly *head,int n);
void print_poly(poly *head);
poly *add_poly(poly *h1,poly *h2);
poly *getnode();
void attach(float cf,int expon,poly **ptr);
int compare(int x,int y);

void main()
{
    int n1,n2;
    poly *head1 = getnode();
    poly *head2,*res;
    head1->expon = -1;
    head1->link = head1;
    printf("\nenter the number of terms in first and second polynomial :\n");
    scanf("%d%d",&n1,&n2);
    printf("enter the first polynomial : ");
    head1 = read_poly(head1,n1);
    head2 = getnode();
    head2->expon = -1;
    head2->link = head2;
    printf("enter the second polynomial : ");
    head2 = read_poly(head2,n2);
    printf("the first polynomial is : \n");
    print_poly(head1);
    printf("the second polynomial is : \n");
    print_poly(head2);
    res = add_poly(head1,head2);
    printf("\nthe resultant polynomial is :\n");
    print_poly(res);
}

poly *read_poly(poly *head,int n)
{
    int i;
    poly *newnode,*temp;
    temp = head;
    for(i=0;i<n;i++)
    {
        printf("\nenter the coefficient and exponent :\n");
        newnode = getnode();
        scanf("%f%d",&(newnode->coef),&(newnode->expon));
        temp->link = newnode;
        temp = temp->link;
    }
    temp->link = head;
    return head;
}

void print_poly(poly *head)
{
    int i;
    poly *temp;
    temp = head->link;
    while(temp!=head)
    {
        printf("%fx^%d+\t",temp->coef,temp->expon);
        temp = temp->link;
    }
    free(temp);
}

poly *add_poly(poly *h1,poly *h2)
{
    poly *sta,*c,*lastc;
    float sum;
    int done = FALSE;
    sta = h1;
    h1 = h1->link;
    h2 = h2->link;
    c= getnode();
    c->expon = -1;
    lastc = c;
    do
    {
        switch(compare(h1->expon,h2->expon))
        {
            case -1 :
            attach(h2->coef,h2->expon,&lastc);
            h2 = h2->link;
            break;
            case 0:
            if(sta == h1)
            done = TRUE;
            else
            {
                sum = (h1->coef) + (h2->coef);
                if(sum)
                    attach(sum,h1->expon,&lastc);
                h1 = h1->link;
                h2 = h2->link;
            }
            break;
            case 1 :
            attach(h1->coef,h1->expon,&lastc);
            h1= h1->link;
            break;
        }
    }while(!done);
    lastc->link = c;
    return c;
}

void attach(float cf,int expon,poly **ptr)
{
    poly *newc = getnode();
    newc->coef = cf;
    newc->expon = expon;
    (*ptr)->link = newc;
    *ptr = newc;
}

poly *getnode()
{
    poly *temp;
    temp = (poly*)malloc(sizeof(poly*));
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