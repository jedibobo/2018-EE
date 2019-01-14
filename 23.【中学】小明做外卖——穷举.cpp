#include <stdio.h>  
  
int main(int argc, char const *argv[])  
  
{  
  
    int count, money, flag;  
  
    int temp_count;  
  
    while (~scanf("%d%d", &count, &money))  
  
    {  
  
        flag = 0;  
  
        temp_count = count * 20;  
  
        for (int j = 0; j <= count; j++)  
  
        {  
  
            for (int k = 0; k <= count - j; k++)  
  
            {  
  
                if (temp_count - 8 * j - 12 * k == money)  
  
                {  
  
                    if (!flag)  
  
                        puts("KFC  McDonald  PissaHut");  
  
                    printf("%d %d %d\n", count - j - k, j, k);  
  
                    flag = 1;  
  
                }  
  
            }  
  
        }  
  
        if (!flag)  
  
        {  
  
            puts("No Solution!");  
  
        }  
  
    }  
  
  
  
    return 0;  
  
}
