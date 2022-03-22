#include<stdio.h>
#include <math.h>
#include <ctype.h>

int eval_postfix(char postfix[]);
int pop(int *top, int stack[]);
int push(int *top, int stack[], int token);
int compute(int op1, int op2, char symbol);

int main(){
	
	char postfix[50];
	
	printf("Enter a postfix expression: ");
	scanf("%s", postfix);
	
	printf("The result of the evaluation is: %d\n", eval_postfix(postfix));	
}

int eval_postfix(char postfix[]){

	char symbol;
	int top=-1, i=0, stack[50], token, op1, op2;
	
	while(postfix[i]!='\0'){
		
		symbol=postfix[i];
		if(isdigit(symbol)){
			
			token=symbol-'0';
			push(&top, stack, token);
		}
		else{
		
			op2=pop(&top, stack);
			op1=pop(&top, stack);
			push(&top, stack, compute(op1, op2, symbol));
		}
		
		i++;
	}
	
	return pop(&top, stack);
}
	
int pop(int *top, int stack[]){

	return stack[(*top)--];
}

int push(int *top, int stack[], int token){

	(*top)++;
	stack[*top]=token;
}

int compute(int op1, int op2, char symbol){

	switch(symbol){
	
		case '+': return(op1+op2);
		case '-': return(op1-op2);
		case '*': return(op1*op2);
		case '/': return(op1/op2);
		case '^': return pow(op1, op2);								
	}
}	

