#include <stdio.h>  
 
#include <ctype.h>  
 
#include <string.h>  
  
extern char *gets(char *);  
  
int main(int argc, char const *argv[])  
  
{  
  
    char str[20480] = {0};  
  
    char str_replace[32] = {0};  
  
    gets(str);  
  
    char *sig_pos = str;  
  
    char prev, next;  
  
    while ((sig_pos = strchr(sig_pos, '-')))  
  
    {  
  
        prev = *(sig_pos - 1);  
  
        next = *(sig_pos + 1);  
  
        if ((isupper(prev) && isupper(next)) || (islower(prev) && islower(next)) || (isdigit(prev) && isdigit(next)))  
  
        {  
  
            if (next <= prev)  
  
            {  
  
                sig_pos++;  
  
                continue;  
  
            }  
  
            sig_pos--;  
  
            memset(str_replace, 0, sizeof(str_replace));  
  
            for (int i = prev; i <= next; i++)  
  
                str_replace[i - prev] = i;  
  
            memmove(sig_pos + next - prev + 1, sig_pos + 3, strlen(sig_pos + 3) + 1);  
  
            memmove(sig_pos, str_replace, strlen(str_replace));  
  
        }  
  
        else  
  
        {  
  
            sig_pos++;  
  
        }  
  
    }  
  
    puts(str);  
  
    return 0;  
  
} 
