//string reversal

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define size 20

void strrev(char *str,int len)
{
    if(len == -1)
    {
        printf("\n");
        return;
    }
    printf("%c",str[len--]);
    strrev(str,len);
}

//driver code

void main()
{
    char str[size];
    int len;
    printf("enter string : ");
    fgets(str,size,stdin);
    str[strlen(str)-1] = '\0';
    len = strlen(str);
    strrev(str,len-1); 
}