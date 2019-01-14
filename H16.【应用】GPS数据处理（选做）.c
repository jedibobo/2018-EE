#include <stdio.h>  
 
#include <stdlib.h>  
 
#include <string.h>  
  
int main(int argc, char const *argv[])  
  
{  
  
    char command[512];  
  
    char *pos;  
  
    int checksum;  
  
    int hour, minute, second;  
  
    while (~scanf("%s", command))  
  
    {  
  
        if (!strncmp(command, "$GPRMC", 6))  
  
        {  
  
            pos = command + 3;  
  
            checksum = command[1] ^ command[2];  
  
            while (*pos != '*')  
  
            {  
  
                checksum ^= *pos;  
  
                pos++;  
  
            }  
  
            checksum %= 0x10000;  
  
            if ((strtol(pos + 1, NULL, 16) == checksum) && (*(strchr(strchr(command, ',') + 1, ',') + 1) == 'A'))  
  
            {  
  
                pos = strchr(command, ',') + 1;  
  
                sscanf(pos, "%2d%2d%2d", &hour, &minute, &second);  
  
                hour += 8;  
  
                hour %= 24;  
  
            }  
  
        }  
  
    }  
  
    printf("%02d:%02d:%02d\n", hour, minute, second);  
  
    return 0;  
  
}  
