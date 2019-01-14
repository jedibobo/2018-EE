#include <stdio.h>  
 
#include <stdlib.h> /* for  atoi() */  
 
#include <ctype.h>  
 
#define MAXOP 1000      /* max size of operand or operator */  
 
#define MAXVAL 1000     /* maximum depth of val stack */  
 
#define NUMBER 0x66CCFF /* signal that a number was found */  
  
int getop(char[]);  
  
void push(int);  
  
int pop(void);  
  
int sp = 0;      /* next free stack position */  
  
int val[MAXVAL]; /* value stack */  
  
/* reverse Polish calculator */  
  
int main(void)  
  
{  
  
    int type;  
  
    int op2;  
  
    char s[MAXOP];  
  
    while ((type = getop(s)) != EOF)  
  
    {  
  
        switch (type)  
  
        {  
  
        case NUMBER:  
  
            push(atoi(s));  
  
            break;  
  
        case '+':  
  
            push(pop() + pop());  
  
            break;  
  
        case '*':  
  
            push(pop() * pop());  
  
            break;  
  
        case '-':  
  
            op2 = pop();  
  
            push(pop() - op2);  
  
            break;  
  
        case '/':  
  
            op2 = pop();  
  
            if (op2 != 0)  
  
                push(pop() / op2);  
  
            else  
  
                printf("error: zero divisor\n");  
  
            break;  
  
        case '%':  
  
            op2 = pop();  
  
            if (op2 != 0)  
  
                push(pop() % op2);  
  
            else  
  
                printf("error: zero divisor\n");  
  
            break;  
  
        case '\n':  
  
            printf("%d\n", pop());  
  
            break;  
  
        default:  
  
            printf("error: unknown command %s\n", s);  
  
            break;  
  
        }  
  
    }  
  
    return 0;  
  
}  
  
  
  
/* push:  push f onto value stack */  
  
void push(int f)  
  
{  
  
    if (sp < MAXVAL)  
  
        val[sp++] = f;  
  
    else  
  
        printf("error: stack full, can't push %d\n", f);  
  
}  
  
/* pop:  pop and return top value from stack */  
  
int pop(void)  
  
{  
  
    if (sp > 0)  
  
        return val[--sp];  
  
    else  
  
    {  
  
        printf("error: stack empty\n");  
  
        return 0;  
  
    }  
  
}  
  
  
  
/* getop:  get next character or numeric operand */  
  
int getop(char s[])  
  
{  
  
    int i, c;  
  
    while ((s[0] = c = getchar()) == ' ' || c == '\t')  
  
        ;  
  
    s[1] = '\0';  
  
    i = 0;  
  
  
  
    if (!isdigit(c) && c != '-')  
  
    {  
  
        return c;  
  
    }  
  
    if (c == '-')  
  
    {  
  
        if (isdigit(c = getchar()))  
  
        {  
  
            s[++i] = c;  
  
        }  
  
        else  
  
        {  
  
            if (c != EOF)  
  
            {  
  
                ungetc(c, stdin);  
  
            }  
  
            return '-';  
  
        }  
  
    }  
  
  
  
    if (isdigit(c)) /* collect integer part */  
  
        while (isdigit(s[++i] = c = getchar()))  
  
            ;  
  
    s[i] = '\0';  
  
    if (c != EOF)  
  
        ungetc(c, stdin);  
  
    return NUMBER;  
  
} 
