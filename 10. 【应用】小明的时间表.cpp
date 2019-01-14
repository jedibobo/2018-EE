#include<stdio.h>
int main()
{
	int a;
	printf("--小明作息时间表--\n");
    printf("  1. 起床洗漱\n");
    printf("  2. 锻炼身体\n");
    printf("  3. 早餐\n");
    printf("  4. 上课\n");
    printf("  5. 午餐休息\n");
    printf("  6. 上课\n");
    printf("  7. 自由活动\n");
    printf("  8. 晚餐\n");
    printf("  9. 晚自习\n");
    printf(" 10. 上床休息\n");
    printf("请输入选项：\n");
    scanf("%d",&a);
    switch (a)
    {	
	case 1: 
    	printf("起床洗漱 6:20\n");
    	break; 
    case 2:
		printf("锻炼身体 6:30\n");
		break; 
    case 3:
		printf("早餐 7:30\n");
		break; 
    case 4:
		printf("上午上课 8:00\n");
		break; 
    case 5:
		printf("午餐休息 12:00\n");
		break; 
    case 6:
		printf("下午上课 13:20\n");
		break; 
    case 7:
		printf("自由活动 16:00\n");
		break; 
    case 8:
		printf("晚餐 17:30\n");
		break; 
    case 9:
		printf("晚自习 19:30\n");
		break; 
    case 10:
		printf("上床休息 23:00\n");
		break; 
    default:
		printf("选项错误\n"); 
		break; 
    } 
	return 0;
} 
