#include <stdio.h>  
int main(void)  
{  
    int n;  
    int ans = 0;  
    scanf("%d", &n);  
    while (n >= 5)  
    {  
        n /= 5;  
        ans += n;  
    }  
    printf("%d\n", ans);  
    return 0;  
}  
