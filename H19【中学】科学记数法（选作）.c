#include <stdio.h>  
 
#include <string.h>  
  
int main(int argc, char const *argv[])  
  
{  
  
    char mem[1024] = {0};  
  
    char *buffer = mem;  
  
    char temp[512];  
  
    int power;  
  
    scanf("%s %*c%d", buffer, &power);  
  
    char *dot = strchr(buffer, '.');  
  
    int temp_len, len_after_dot;  
  
    if (power >= 0) // positive power start  
  
    {  
  
        if (dot) // a float  
  
        {  
  
            strcpy(temp, dot + 1);  
  
            temp_len = strlen(temp);  
  
            if (temp_len <= power)  
  
            {  
  
                strcpy(dot, temp);  
  
                for (int i = 0; i < power - temp_len; i++)  
  
                    strcat(buffer, "0");  
  
                strcat(buffer, ".00000000");  
  
            }  
  
            else  
  
            {  
  
                strncpy(dot, temp, power);  
  
                *(dot + power) = 0;  
  
                strcat(dot, ".");  
  
                strcat(dot, &temp[power]);  
  
                len_after_dot = strlen(&temp[power]);  
  
                for (int i = 0; i < 8 - len_after_dot; i++)  
  
                    strcat(buffer, "0");  
  
            }  
  
            // bug fix  
  
            char *pos = mem;  
  
            if (*pos == '-')  
  
            {  
  
                pos++;  
  
                while (*pos++ == '0')  
  
                    ;  
  
                memmove(mem+1, pos - 1, strlen(pos - 1) + 1);  
  
            }  
  
            else  
  
            {  
  
                while (*pos++ == '0')  
  
                    ;  
  
                memmove(mem, pos - 1, strlen(pos - 1) + 1);  
  
            }  
  
  
  
            // bug fix  
  
        }  
  
        else // an integer  
  
        {  
  
            for (int i = 0; i < power; i++)  
  
                strcat(buffer, "0");  
  
            strcat(buffer, ".00000000");  
  
        }  
  
    }    // positive power end  
  
    else // negative power start  
  
    {  
  
        if (!dot) // not a float  
  
        {  
  
            strcat(buffer, ".0"); //hey!It't a float now  
  
            dot = strchr(buffer, '.');  
  
        }  
  
        *dot = 0;  
  
        int len = strlen(buffer);  
  
        if (len > -power)  
  
        {  
  
            memmove(buffer + len + power + 1, buffer + len + power, strlen(buffer + len + power));  
  
            buffer[len + power] = '.';  
  
            len_after_dot = strlen(dot);  
  
            for (int i = 0; i < 8 - len_after_dot; i++)  
  
                strcat(buffer, "0");  
  
        }  
  
        else  
  
        {  
  
            if (*buffer == '-')  
  
            {  
  
                buffer++;  
  
                len--;  
  
            }  
  
            memmove(buffer + 1, buffer, len);  
  
            int len_all_digit = strlen(buffer + 1);  
  
            memmove(buffer + 2 - len - power, buffer + 1, len_all_digit);  
  
            *buffer = '0';  
  
            *(buffer + 1) = '.';  
  
            for (int i = 2; i < 2 - len - power; i++)  
  
                buffer[i] = '0';  
  
            memset(buffer + strlen(buffer), '0', 8);  
  
        }  
  
    } // negative power end  
  
  
  
    dot = strchr(mem, '.');  
  
    if (dot) //throw away digits after 8  
  
        dot[9] = 0;  
  
    puts(mem);  
  
    return 0;  
  
}  
