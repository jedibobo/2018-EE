#include <stdio.h>  
 
#include <string.h>  
  
int main(int argc, char const *argv[])  
  
{  
  
    char state[128] = {0};  
  
    char str[128] = {0};  
  
    char str_new[128] = {0};  
  
    scanf("%s", str);  
  
    int len = strlen(str);  
  
    int len_new = 0;  
  
    for (int i = 0; i < len; i++)  
  
        if (!state[str[i]]++)  
  
            str_new[len_new++] = str[i];  
  
  
  
    puts(str_new);  
  
    return 0;  
  
}  
