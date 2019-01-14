#include <stdio.h>  
 
#include <stdlib.h>  
 
#include <string.h>  
 
#include <ctype.h>  
  
int main(int argc, char const *argv[])  
  
{  
  
    char str_num1[128] = {0};  
  
    char str_num2[128] = {0};  
  
    int base1, base2;  
  
    int char_max1, char_max2;  
  
    scanf("%s %s", str_num1, str_num2);  
  
    int len1 = strlen(str_num1);  
  
    int len2 = strlen(str_num2);  
  
    char_max1 = char_max2 = 0;  
  
    while (len1--)  
  
        if (str_num1[len1] > char_max1)  
  
            char_max1 = str_num1[len1];  
  
    while (len2--)  
  
        if (str_num2[len2] > char_max2)  
  
            char_max2 = str_num2[len2];  
  
    base1 = isdigit(char_max1) ? (char_max1 - '0' + 1) : (char_max1 - 'A' + 11);  
  
    base2 = isdigit(char_max2) ? (char_max2 - '0' + 1) : (char_max2 - 'A' + 11);  
  
    for (int i = base1; i <= 36; i++)  
  
        for (int j = base2; j <= 36; j++)  
  
            if (strtoll(str_num1, NULL, i) == strtoll(str_num2, NULL, j))  
  
            {  
  
                printf("%s (base %d) = %s (base %d)\n", str_num1, i, str_num2, j);  
  
                return 0;  
  
            }  
  
    printf("%s is not equal to %s in any base 2..36\n", str_num1, str_num2);  
  
    return 0;  
  
}
