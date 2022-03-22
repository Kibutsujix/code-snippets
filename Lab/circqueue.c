#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

#define size 20
char cq_delete(int *f,char cq[],int *count);
void cq_insert(char ele,int *r,char cq[],int *count);
int main()
{
    int f=0,r=-1,count =0,ch,i;
    char ele,item_del,cq[size];
    for(;;)
    {
        printf("1.insert\n2.delete\n3.display\n4.exit\n");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1 : 
            if(count==size)
            {
                printf("queue full\n");
                break;
            }
            printf("enter element to be inserted\n");
            scanf(" %c",&ele);
            cq_insert(ele,&r,cq,&count);
            break;
            case 2 :
            if(count==0)
            {
                printf("queue empty\n");
                break;
            }
            item_del = cq_delete(&f,cq,&count);
            printf("%c came out of the queue\n",item_del);
            break;
            case 3 :
            if(count == 0)
            {
                printf("queue empty\n");
                break;
            }
            for(i=0;i<=count;i++)
            {
                printf("%c\t",cq[f]);
                f = (f+1)%size;
            }
            break;
            case 4 :
            exit(0);
            default : printf("enter valid input\n");
            break;
        }
    }
    return 0;
}

void cq_insert(char ele,int *r,char cq[],int *count)
{
    *r = ((*r)+1)%size;
    cq[*r] = ele;
    *count = *count +1;
}

char cq_delete(int *f,char cq[],int *count)
{
    char del_ele = cq[*f];
    *f = ((*f)+1)%size;
    *count = *count -1;
    return del_ele;
}

