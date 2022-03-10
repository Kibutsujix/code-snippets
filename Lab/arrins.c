// array insertion and deletion 

#include<stdio.h>
#include<stdlib.h>

void read_arr(int n,int arr[]);
void insert_arr(int *n,int arr[]);
void delete_arr(int *n,int arr[]);
void traverse(int n,int arr[]);

#define Size 25

int main()
{
	int arr[Size],n,i,choice;
	printf("enter number of elements : \n");
	scanf("%d",&n);
	printf("enter array elements : \n");
	read_arr(n,arr);
	for(;;)
	{
		printf("enter your choice from \n1. insertion\n2. deletion\n3. traverse\n4. quit\n");
		scanf("%d",&choice);
		{
			switch(choice)
			{
				case 1 : 
				insert_arr(&n,arr);				// &n because n value will change due to insertion or deletion
				break;
				case 2 :
				delete_arr(&n,arr);
				break;
				case 3 :
				traverse(n,arr);
				break;
				case 4 :
				exit(0);
				default : printf("enter proper input (1-4) ! \n");
			}
		}
	}
	return 0;
}

void read_arr(int n,int arr[])
{
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	return;
}

void insert_arr(int *n,int arr[])
{
    
	int ele,pos,i; 
	printf("Enter the element to be inserted: ");
    scanf("%d", &ele);
    printf("Enter the position where the element has to be inserted: ");
    scanf("%d", &pos);

    if(pos>*n && pos<1)
    {
        printf("Cannot insert at position %d.\n", pos);
        return;
    }

    printf("The array after inserting %d at position %d: \n", ele, pos);
    for(i=(*n+1); i>pos-1; i--)
        arr[i]=arr[i-1];

    arr[pos-1]=ele;

    for(i=0; i<(*n+1); i++)
        printf("%d\t", arr[i]);
    
	printf("\n");

    return;
}

void delete_arr(int *n,int arr[])
{
	int pos,i,j;
	printf("enter the position ");
	scanf("%d",&pos);
	if((pos >=1) && (pos <= *n))
	{
		for(j=pos;j<*n;j++)
		{
			arr[j-1] = arr[j];
		}
		*n = (*n-1);
		traverse(*n,arr);
		printf("\n");
	}
	else
		printf("invalid position entered\n");
	return;
}

void traverse(int n,int arr[])
{
	int i;
	for(i=0;i<n;i++)
		printf("%d\t",arr[i]);
	return;
}
