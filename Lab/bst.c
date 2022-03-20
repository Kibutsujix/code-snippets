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
    int i,j,k;
    for (i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                for(k = j; k < n; k++)
                {
                    arr[k] = arr[k + 1];
                }
                n--;
                j--;
            }
        }
    }
    return n;
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

void preorder(bst *root)
{
    if(root!=NULL)
    {
        printf("%d\n",root->key);
        preorder(root->leftlink);
        preorder(root->rightlink);
    }
}

void postorder(bst *root)
{
    if(root!=NULL)
    {
        postorder(root->leftlink);
        postorder(root->rightlink);
        printf("%d\n",root->key);
    }
}
//driver code
void main()
{
    bst *root = NULL;
    int arr[size],i,n,ch;
    printf("enter number of elements : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    n = remove_duplicate(arr,n);
    root = define_bst(n,arr,root);
    for(;;){
        printf("Enter\n1. inorder traversal\n2. preorder traversal\n3. postorder travesal\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 :
            inorder(root);
            break;
            case 2 :
            preorder(root);
            break;
            case 3 :
            postorder(root);
            break;
            default : printf("Enter values from (1-3) only \n");
            break;
        }
    }
    free(root);
    
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