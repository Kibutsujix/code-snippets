// binary search tree
#include<stdio.h>
#include<stdlib.h>
#define size 100

typedef struct BST
{
    int key;
    struct BST *leftlink;
    struct BST *rightlink;
}bst;


//function to check dupes in the key entries
int remove_duplicate(int arr[], int n)
{
    if (n == 0 || n == 1)
        return n;

    int temp[n];

    int j = 0;
    int i;
    for (i = 0; i < n - 1; i++)
        if (arr[i] != arr[i + 1])
        temp[j++] = arr[i];
    temp[j++] = arr[n - 1];

    for (i = 0; i < j; i++)
        arr[i] = temp[i];
    
    return j;
}
bst *getnode()
{
    bst *temp;
    temp = (bst*)malloc(sizeof(bst));
    return temp;
}
//insert
bst *insert(int ele,bst *root)
{
      
    if(root == NULL)
    {
        bst *new = getnode();
        new->key = ele;
        new->leftlink = new->rightlink = NULL;
        return new;
    }
    if(ele > root->key)
    {
        root->rightlink = insert(ele,root->rightlink);
    }
    else if(ele < root->key)
    {
        root->leftlink = insert(ele,root->leftlink);
    }
    return root;
}
// the recursive definition of the binary search tree
bst* define_bst(int n,int arr[],bst *root)
{
    int i=0,ele;
    while(i!=n)
    {
        ele = arr[i];
        root = insert(ele,root);
        i++;
    }
    return root;
}

void inorder(bst* root)
{
    if (root != NULL) {
        inorder(root->leftlink);
        printf("%d \n", root->key);
        inorder(root->rightlink);
    }
}

//driver code
void main()
{
    bst *root = NULL;
    int arr[size],i,n;
    printf("enter number of elements : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    n = remove_duplicate(arr,n);
    root = define_bst(n,arr,root);
    printf("The inorder traversal of BST is : \n");
    inorder(root);
}

/*
output
enter number of elements : 15
14
15
4
9
7
18
3
5
16
4
20
17
29
14
5
The inorder traversal of BST is :
3
4
5
7
9
14
15
16
17
18
20
29
*/