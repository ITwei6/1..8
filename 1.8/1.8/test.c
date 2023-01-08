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
//						//五层嵌套把所有可能都列出来
//						//然后五个人说的都是真的话就能确定出名次
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
//	//4个人三个人说真话，一个人说假话，怎么用代码来表示呢？
//	//(表达式1)+(表达式2)+(表达式3)+(表达式4)==3
//	char killer;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("killer是%c", killer);
//		}
//	}
//	return 0;
//}
//杨辉三角
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
//杨式矩阵
//int find_check(int arr[3][3], int* px, int* py, int k)
//{
//	//从右上角或者左下角找，特点：一行中最大值，一列中最小值
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
//		printf("找到了下标是：%d %d\n", x, y);
//	}
//	else
//		printf("找不到算了\n");
//	return 0;
//}
//字符串左旋k个字符
//第一种方法：
//#include <string.h>
//void left_move(char arr[20], int k)
//{
//	int len = strlen(arr);
//	//左旋k个字符这决定了循环几次
//	int i;
//	for (i = 0; i < k; i++)
//	{
//		//每次循环的过程：
//		//1.将最前面的字符拿走
//		char tmp = arr[0];
//		//2.将后面的字符往前位移---位移-1次
//		int j;
//		for (j = 0; j < len - 1; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		//3.将最前面的字符放在最后面
//		arr[len- 1] = tmp;
//	}
//}
//第二种方法：
//1.左旋字符串
//2.右旋字符串
//3.逆序整个字符串
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
//	//1.左旋字符串
//	reverse(arr, arr + k - 1);
//	//2.右旋字符串
//	reverse(arr + k, arr + len - 1);
//	//3.旋转整个字符串
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
////思路：
////判断arr2是否是arr1旋转而来，简单想法就是让arr1每次旋转一个字符然后再跟arr2比较是否相同直到arr1旋转到本来的样子为止
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
//		//每次逆序一个 字符串
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
//}qsort的使用
///qsort(数组起始地址，元素个数，元素字节大小，比较函数)
//1.给整形排序
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
//2.给结构体排序
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