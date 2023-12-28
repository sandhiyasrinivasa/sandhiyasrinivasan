#include <stdio.h>
#include<string.h>
#include <stdlib.h>
#define MAX 100
struct stack {
  char stack [MAX];
  int top;
}s;
void push(char item) {
  if (s.top == (MAX - 1))
    printf("Stack is Full\n");
  else {
    s.top = s.top + 1;
    s.stack[s.top] = item;
  }
}
void pop() {
  if (s.top == -1)
    printf("Stack is Empty\n");

  else
    s.top = s.top - 1;
}

int checkPair(char val1,char val2){
    return (( val1=='(' && val2==')' )||( val1=='[' && val2==']' )||( val1=='{' && val2=='}' ));
}

int checkBalanced(char expr[], int len){
      
    for (int i = 0; i < len; i++)  
    { 
        if (expr[i] == '(' || expr[i] == '[' || expr[i] == '{')  
        {  
          push(expr[i]); 
        } 
        else
        {
        if (s.top == -1) 
            return 0;
        else if(checkPair(s.stack[s.top],expr[i]))
        {
            pop();
            continue;
        }
        return 0;
        }
    }    
    return 1; 
}
int main() {
  char exp[MAX] = "({})[]{}";
  int i = 0;
  s.top = -1;

  int len = strlen(exp);
  checkBalanced(exp, len)?printf("Balanced"): printf("Not Balanced"); 

  return 0;
}
