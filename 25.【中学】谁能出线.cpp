#include <stdio.h>  
  
int main(int argc, char const *argv[])  
  
{  
  
    int scores[10];  
  
    int out[10] = {0};  
  
    int count = 0, max = 0, flag = 0;  
  
    for (int i = 0; i < 10; i++)  
  
        scanf("%d", scores + i);  
  
    for (int i = 0; i < 10; i++)  
  
    {  
  
        flag = 0;  
  
        if (scores[i] > max)  
  
        {  
  
            max = scores[i];  
  
            count = 0;  
  
            flag = 1;  
  
        }  
  
        else if (scores[i] == max)  
  
            flag = 1;  
  
        if (flag)  
  
            out[count++] = i + 1;  
  
    }  
  
    for (int i = 0; i < count; i++)  
  
        printf("%d\n", out[i]);  
  
    return 0;  
  
}
