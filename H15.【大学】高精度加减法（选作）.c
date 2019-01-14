#include <stdio.h>  
 
#include <string.h>  
 
#define BUF_LEN 520  
  
char *strrev(char *str);  
  
int compare(char *, char *);  
  
char *add(char *, char *);  
  
char *sub(char *, char *);  
  
int main(void)  
  
{  
  
    int total;  
  
    scanf("%d\n", &total);  
  
    static char num1[BUF_LEN], num2[BUF_LEN];  
  
    char line_buf[1024];  
  
    char *ans, *operator;  
  
    char op;  
  
    for (int i = 0; i < total; i++)  
  
    {  
  
        memset(num1, 0, BUF_LEN);  
  
        memset(num1, 0, BUF_LEN);  
  
        fgets(line_buf, 1024, stdin);  
  
        line_buf[strlen(line_buf) - 1] = 0;  
  
        if (!(operator= strchr(line_buf, '+')))  
  
            operator= strchr(line_buf, '-');  
  
        op = *operator;  
  
        *operator= 0;  
  
        strcpy(num1, line_buf);  
  
        strcpy(num2, operator+ 1);  
  
        if (op == '+')  
  
            ans = strrev(add(num1, num2));  
  
        else  
  
            ans = strrev(sub(num1, num2));  
  
        printf("%s\n", ans);  
  
    }  
  
    return 0;  
  
}  
  
char *add(char *dst, char *src)  
  
{  
  
    strrev(dst);  
  
    strrev(src);  
  
    int src_len = strlen(src);  
  
  
  
    for (int i = 0; i < src_len; i++)  
  
    {  
  
        dst[i] = dst[i] + src[i] - '0';  
  
        if (dst[i] < '0')  
  
        {  
  
            dst[i] += '0';  
  
        }  
  
        if (dst[i] > '9')  
  
        {  
  
            dst[i] -= 10;  
  
            dst[i + 1] += 1;  
  
            if (dst[i + 1] < '0')  
  
            {  
  
                dst[i + 1] += '0';  
  
            }  
  
        }  
  
    }  
  
    int dst_len = strlen(dst);  
  
  
  
    for (int i = 0; i < dst_len; i++)  
  
    {  
  
        if (dst[i] > '9')  
  
        {  
  
            dst[i] -= 10;  
  
            dst[i + 1] += 1;  
  
            if (dst[i + 1] < '0')  
  
            {  
  
                dst[i + 1] += '0';  
  
            }  
  
        }  
  
    }  
  
  
  
    /*if (dst[2]) //what the fuck 
 
    { 
 
        dst[2]--; 
 
    }*/  
  
  
  
    return dst;  
  
}  
  
char *sub(char *dst, char *src)  
  
{  
  
    char *temp;  
  
    int cmp_flag = compare(dst, src);  
  
    if (cmp_flag < 0)  
  
    {  
  
        temp = dst;  
  
        dst = src;  
  
        src = temp;  
  
        putchar('-'); //simple but ugly solution  
  
    }  
  
    strrev(dst);  
  
    strrev(src);  
  
    int src_len = strlen(src);  
  
    for (int i = 0; i < src_len; i++)  
  
    {  
  
  
  
        if (dst[i] >= src[i])  
  
        {  
  
            dst[i] -= (src[i] - '0');  
  
        }  
  
        else  
  
        {  
  
            dst[i] -= (src[i] - '0');  
  
            dst[i] += 10;  
  
            dst[i + 1] -= 1;  
  
        }  
  
    }  
  
    int dst_len = strlen(dst);  
  
    for (int i = 0; i < dst_len; i++)  
  
    {  
  
        if (dst[i] < '0')  
  
        {  
  
            dst[i] += 10;  
  
            dst[i + 1] -= 1;  
  
        }  
  
    }  
  
    while (--dst_len && dst[dst_len] == '0')  
  
        dst[dst_len] = 0;  
  
    return dst;  
  
}  
  
char *strrev(char *str)  
  
{  
  
    char *p1, *p2;  
  
    if (!str || !*str)  
  
        return str;  
  
    for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)  
  
    {  
  
        *p1 ^= *p2;  
  
        *p2 ^= *p1;  
  
        *p1 ^= *p2;  
  
    }  
  
    return str;  
  
}  
  
int compare(char *str1, char *str2)  
  
{  
  
    int len1 = strlen(str1), len2 = strlen(str2);  
  
    if (len1 > len2)  
  
        return 1;  
  
    else if (len1 < len2)  
  
        return -1;  
  
    else  
  
        return strcmp(str1, str2);  
  
}
