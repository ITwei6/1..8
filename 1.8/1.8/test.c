#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	int i = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						//���Ƕ�װ����п��ܶ��г���
//						//Ȼ�������˵�Ķ�����Ļ�����ȷ��������
//						if (((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1))
//						{
//							if(a*b*c*d*e==120)
//							printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}
//int main()
//{
//	//4����������˵�滰��һ����˵�ٻ�����ô�ô�������ʾ�أ�
//	//(���ʽ1)+(���ʽ2)+(���ʽ3)+(���ʽ4)==3
//	char killer;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("killer��%c", killer);
//		}
//	}
//	return 0;
//}
//�������
//int main()
//{ 
//	
//	int arr[10][10];
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		int j;
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0|| i == j)
//			{
//				arr[i][j] = 1;
//			}
//			else
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//		
//	}
//	for (i = 0; i < 10; i++)
//	{
//		int j;
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//��ʽ����
//int find_check(int arr[3][3], int* px, int* py, int k)
//{
//	//�����Ͻǻ������½��ң��ص㣺һ�������ֵ��һ������Сֵ
//	int x = 0;
//	int y = *py - 1;
//	while (x<=*px-1&&y>=0)
//	{
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//		
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 5;
//	int x = 3;
//	int y = 3;
//	int ret=find_check(arr,&x,&y,k);
//	if (ret == 1)
//	{
//		printf("�ҵ����±��ǣ�%d %d\n", x, y);
//	}
//	else
//		printf("�Ҳ�������\n");
//	return 0;
//}
//�ַ�������k���ַ�
//��һ�ַ�����
//#include <string.h>
//void left_move(char arr[20], int k)
//{
//	int len = strlen(arr);
//	//����k���ַ��������ѭ������
//	int i;
//	for (i = 0; i < k; i++)
//	{
//		//ÿ��ѭ���Ĺ��̣�
//		//1.����ǰ����ַ�����
//		char tmp = arr[0];
//		//2.��������ַ���ǰλ��---λ��-1��
//		int j;
//		for (j = 0; j < len - 1; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		//3.����ǰ����ַ����������
//		arr[len- 1] = tmp;
//	}
//}
//�ڶ��ַ�����
//1.�����ַ���
//2.�����ַ���
//3.���������ַ���
//void reverse(char* left, char* right)
//{
//	char tmp;
//	while (left < right)
//	{
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//#include <string.h>
//void left_move(char arr[20], int k)
//{
//	int len = strlen(arr);
//	//1.�����ַ���
//	reverse(arr, arr + k - 1);
//	//2.�����ַ���
//	reverse(arr + k, arr + len - 1);
//	//3.��ת�����ַ���
//	reverse(arr, arr + len - 1);
//}
////int main()
////{
////	char arr[20] = "aabbcc";
////	int k = 4;
////	left_move(arr, k);
////	printf("%s", arr);
////	return 0;
////}
////˼·��
////�ж�arr2�Ƿ���arr1��ת���������뷨������arr1ÿ����תһ���ַ�Ȼ���ٸ�arr2�Ƚ��Ƿ���ֱͬ��arr1��ת������������Ϊֹ
//int check_move(char arr1[], char arr2[])
//{
//	int len1 = strlen(arr1);
//	int len2 = strlen(arr2);
//	if (len1 != len2)
//	{
//		return 0;
//	}
//	else
//	{
//		//ÿ������һ�� �ַ���
//		int i;
//		for (i = 0; i < len1; i++)
//		{
//			left_move(arr1, 1);
//			if (strcmp(arr1, arr2) == 0)
//			{
//				return 1;
//			}
//		}
//		return 0;
//	}
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret=check_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("YES\n");
//	}
//	else
//	{
//		printf("NO\n");
//	}
//	return 0;
//}qsort��ʹ��
///qsort(������ʼ��ַ��Ԫ�ظ�����Ԫ���ֽڴ�С���ȽϺ���)
//1.����������
#include <stdlib.h>
//int com_int(const int *e1,const int *e2)
//{
//	return *e1 - *e2;
//}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), com_int);
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//2.���ṹ������
struct Stu
{
	char name[20];
	int age;
};
int com_s_age(const void* e1, const void* e2)
{
	return   
}
int main()
{
	struct Stu s[3] = { {"zhangsan",20},{"lisi",66},{"wangwu",25} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), com_s_age);
	return 0;
}