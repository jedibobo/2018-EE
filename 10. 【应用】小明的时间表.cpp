#include<stdio.h>
int main()
{
	int a;
	printf("--С����Ϣʱ���--\n");
    printf("  1. ��ϴ��\n");
    printf("  2. ��������\n");
    printf("  3. ���\n");
    printf("  4. �Ͽ�\n");
    printf("  5. �����Ϣ\n");
    printf("  6. �Ͽ�\n");
    printf("  7. ���ɻ\n");
    printf("  8. ���\n");
    printf("  9. ����ϰ\n");
    printf(" 10. �ϴ���Ϣ\n");
    printf("������ѡ�\n");
    scanf("%d",&a);
    switch (a)
    {	
	case 1: 
    	printf("��ϴ�� 6:20\n");
    	break; 
    case 2:
		printf("�������� 6:30\n");
		break; 
    case 3:
		printf("��� 7:30\n");
		break; 
    case 4:
		printf("�����Ͽ� 8:00\n");
		break; 
    case 5:
		printf("�����Ϣ 12:00\n");
		break; 
    case 6:
		printf("�����Ͽ� 13:20\n");
		break; 
    case 7:
		printf("���ɻ 16:00\n");
		break; 
    case 8:
		printf("��� 17:30\n");
		break; 
    case 9:
		printf("����ϰ 19:30\n");
		break; 
    case 10:
		printf("�ϴ���Ϣ 23:00\n");
		break; 
    default:
		printf("ѡ�����\n"); 
		break; 
    } 
	return 0;
} 
