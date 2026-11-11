#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include<math.h>
#include<assert.h>
#include<errno.h>
#include<time.h>
#include<memory.h>


//注意句末加分号，if的第一句后不用
/*int main(int argc, char *argv[]) {
	int flag = 0;
	printf("are you ok?\n");
	if(flag == 0)
		printf("yes");
	else
		printf("no");
	return 0;
}*/
/*int main()
		 {
	int a,b;
	printf("请输入两个整数，空格隔开，回车键结束\n");
	scanf("%d%d",&a,&b);
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	printf("a+b=%d+%d=%d\n",a,b,a+b);
return 0;
} */

/*void xixi()
{
	char zifu;
	zifu = getchar();
	if(zifu == 'y')
		printf("yes");
	else
		printf("no");
	return;
}

int main()
{
	printf("are you ok?\n");
	xixi();
	return 0;
}
*/

//int pow2(int x)
//{
//	int z = x*x;
//	return z;
//}
	
/*
int main()
{	int x;
	scanf("%d",&x);
	int y = pow2(x);
	printf("%d\n",y);
	return 0;
}*/
//定义的函数后若跟有大括号，句末不加分号
/*int getMinNum(int x,int y)
{
	int z = y;
	if(x<z)
		z = x;
	return z;
}

int main()
{
	int x,y,z;
	scanf("%d%d",&x,&y);
	z = getMinNum(x,y);
	printf("最小值 = %d",z);
	return 0;
}*/

/*int main()
{	
	int age;
	scanf("%d",&age);
	if(age < 18)
		printf("未成年\n");
	else if(age >= 18 && age < 28)
		printf("青年\n");
	else if(age >= 28 && age < 45)
		printf("中年\n");
	else if(age >=45 && age<60)
		printf("壮年\n");
	else if(age >=60 && age < 100)
		printf("老年\n");
	else
		printf("老寿星\n");
	return 0;
}	*/

/*int main()
{	int a = 0;
	while(a <= 100)
	{	if(a%2 == 1)
			printf("%d\n",


int main()
{
	int day = 0;
	scanf("%d",&day);
	switch(day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("工作时间\n");
		break;
	case 6:
	case 7:
		printf("休息时间\n");
		break;
	default:
		printf("何意味\n");	
	}	
	return 0;
}*/

/*int main()
{
	int n = 1;
	int m = 2;
	switch(n)
	{
	case 1:m++;
	case 2:n++;
	case 3:
		switch(n)
		{
		case 1:m++;
		case 2:m++,n++;
			break;	
		}
	case 4:m += 2,n += 3;
		break;
	}
	printf("n = %d\n,m = %d\n",n,m);
	return 0;
}*/

/*int main()
{	char password[ 20 ] = { 0 };
	printf("请设置密码\n");
	scanf("%s",password);
	int ch = 0;
	while((ch = getchar()) != '\n')
	{
			
	}
	printf("是否确认\n");
	int ret = getchar();
	if('Y' == ret)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
	printf("%s\n",password);
	return 0;
}*/

/*int main()
{
	int ch = '\0';
	while((ch = getchar()) != EOF)
	{
		if(ch < '0' || ch > '9')
		{
			continue;
		}
		putchar(ch);
		
	}
	return 0;
}*/

/*int main()
{
	int arr[] = {73,32,99,97,110,32,100,111,32,105,116,33};
	int sz = sizeof(arr)/sizeof(arr[0]);
	int i = 0;
	while(i < sz)
	{
		printf("%c",arr[i]);
		i++;
	}
	return 0;
}*/

/*int main()
{
	int year = 0;
	int month = 0;
	int day = 0;
	scanf("%4d%2d%2d",&year,&month,&day);
	printf("%d\n%02d\n%02d\n",year,month,day);
	return 0;
	
}*/

//int main()
//{
//	long long id = 0;
//	float c = 0.0f;
//	float m = 0.0f;
//	float e = 0.0f;
//	scanf("%lld;%f,%f,%f",&id,&c,&m,&e);
//	printf("学号为%lld的学生本次考试C语言，数学，英语成绩分别为%.2f,%.2f,%.2f",id,c,m,e);
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	int n = 0;
//	int outcome = 1;
//	scanf("%d",&n);
//	for(i = 1;i <= n;i++)
//	{
//		outcome = outcome * i;
//	}
//	printf("%d\n",outcome);
//	return 0;
//}

//int main()
//{
//	char code[] = "mspgcc19970903";
//	int i = 0;
//	for(i = 1;i <= 3;i++)
//	{
//		scanf("%s",code);
//		if(strcmp(code,"mspgcc19970903") == 0)
//		{	printf("登录成功\n");
//			break;
//		}
//		else
//			printf("密码错误，请重新输入\n");
//	}
//	if(i > 3)
//		printf("小猪猪来了\n");
//	return 0;
//}

//之前写的都被删了啊wwwwwwwwwwwwww我不接受
//至少补一点出来

































































//这下舒服了
//
//int main()
//{
//	char input[20] = {0};
//	system("shutdown -s -t 120");
//	while(1)
//	{
//		printf("你的电脑即将在2分钟后关闭，请输入“中秋节快乐”终止该进程\n");
//		scanf("%s",input);
//		
//		if(strcmp(input,"中秋节快乐") == 0)
//		{
//			printf("也祝你中秋节快乐\n");
//			system("shutdown -a");
//			break;
//		}
//		else
//			printf("小猪猪不信邪是吧\n");
//	}
//	return 0;
//}

//void swap(int*px,int*py)
//{
//	int z = 0;
//	z = *px;
//	*px = *py;
//	*py = z;
//}
//
//int add(int m,int n)
//{
//	int k = m + n;
//	return k;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d",&a,&b);
//	int c = add(a,b);
//	printf("两数之和为%d\n",c);
//	printf("交换前a = %d,b = %d\n",a,b);
//	swap(&a,&b);
//	printf("交换后a = %d,b = %d",a,b);
//	return 0;
//}

//int main()
//{
//	int count = 0;
//	for(int i = 2;i <= 100;i++)
//	{
//		int flag = 0;
//		for(int j = 2;j <= sqrt(i);j++)
//		{
//			if(i%j == 0)
//			{	
//				flag = 1;
//				break;
//			}
//		}
//		if(flag == 0)
//		{
//			count++;
//			printf("%d\n",i);
//		}
//	}
//	printf("一共有%d个素数",count);
//	return 0;
//}

//int flag(int i)
//{
//	if((i % 4 == 0 && i % 100 != 0)||(i % 400 == 0))
//	{
//		printf("%d ",i);
//		return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	int count = 0;
//	for(int i = 1949;i <= 2026;i++)
//	{
//		if(flag(i) == 1)
//		{
//			count++;
//		}
//	}
//	printf("\n建国至今共有%d个闰年",count);
//	return 0;
//}

//int search(int arr[],int i,int sz)
//{
//	int left = 0,right = sz - 1;
//	while(left <= right)
//	{
//		int mid = (left + right)/2;
//		if(arr[mid] < i)
//			left = 1 + mid;
//		else if(arr[mid] > i)
//			right = mid - 1;
//		else
//			return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 0;	
//	scanf("%d",&i);
//	int arr[] = {1,2,3,4,5,6,7,8,9};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	if(search(arr,i,sz))
//		printf("找到了，下标是%d\n",i - 1);
//	else
//		printf("没找到\n");
//	return 0;
//}

//void print(int a)
//{
//	if(a > 9)
//	{
//		print(a / 10);
//	}
//	printf("%d ",a % 10);
//}
//
//int main()
//{
//	unsigned int a = 0;
//	scanf("%d",&a);
//	print(a);
//	return 0;
//}
//
////int mnstr(char*arr)
////{
//	int count = 0;
//	while(*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abc";
//	int len = (mnstr(arr));
//	printf("字符个数为%d个\n",len);
//	return 0;
//}

//int mnstr(char*arr)
//{
//	if(*arr != '\0')
//	{
//		return mnstr(arr + 1) + 1;
//	}
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "abc";
//	int len = mnstr(arr);
//	printf("字符串的长度是%d\n",len);
//	return 0;
//}

//int cal(unsigned int n)
//{
//	if(n == 1 || n == 2)
//		return 1;
//	else
//		return cal(n - 1) + cal(n - 2);
//}
//
//int main()
//{
//	unsigned int n = 0;
//	scanf("%d",&n);
//	int fib = cal(n);
//	printf("第%d个斐波那契数是%d",n,fib);
//	return 0;
//}

//int main()
//{
//	int n = 1;
//	scanf("%d",&n);
//	unsigned int fib = 1;
//	while(1)
//	{
//		if(n > 2)
//		{
//			fib = (fib - 1) + (fib - 2);
//			break;
//		}
//		else
//		{	fib = 1;
//			break;
//		}
//	}
//	printf("第%d个斐波那契数是%d",n,fib);
//	return 0;
//}

//
//int main()
//{
//	int arr[5] = {0};
//	scanf("%d%d%d",&arr[0],&arr[1],&arr[2]);
//	for(int i = 0;i < 2;i++)
//	{
//		for(int j = 0;j < 2 - i;j++)
//		{
//			if(arr[j] < arr[j + 1])
//			{
//				int cmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = cmp;
//			}
//		}
//	}//i代表循环的轮数，每轮可保证一个最大数到左边
//	 //j代表每轮中相邻元素比较的次数
//	printf("%d %d %d",arr[0],arr[1],arr[2]);
//	return 0;
//}

//int main()
//{
//	for(int i = 1;i <= 100;i += 3)
//	{
//		if((i % 3) == 0)
//			printf("%d ",i);
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0,b = 0;
//	scanf("%d%d",&a,&b);
//	int gy = 0;
//	for(int i = 1;i <= (a > b ? a : b);i++)
//	{
//		if(a % i == 0 && b % i == 0)
//			gy = i;
//	}
//	printf("最大公约数是%d",gy);
//	return 0;
//}

//int main()
//{
//	int count = 0;
//	for(int i = 19;i <= 99;i++)
//	{
//		if(i % 10 == 9 || i / 10 == 9 )
//		{
//			count++;
//		}
//	}
//	printf("含9的整数共有%d个",count + 1);
//	return 0;
//}

//int main()
//{
//	double sum = 0;
//	double sub = 0;
//	for(int i = 1;i <= 100;i += 2)
//	{
//		sum += 1.0 / i;
//	}
//	for(int k = 2;k <= 100;k += 2)
//	{
//		sub += 1.0 / k;
//	}
//	double result  = sum - sub;
//	printf("%lf",result);
//	return 0;
//}

//int main()
//{
//	double sum = 0;
//	int flag = 1;
//	for(int i = 1;i <= 100;i++)
//	{
//		sum += flag*(1.0 / i);
//		flag = -flag;
//	}
//	printf("结果是%lf",sum);
//	return 0;
//}

//int main()
//{
//	int arr[12] = {0};
//	int cmp = 0;
//	for(int k = 0;k <= 9;k++)
//	{
//		scanf("%d",&arr[k]);
//	}
//	for(int i = 1;i < 10;i++)
//	{
//		for(int j = 0;j < 10 - i;j++)
//		{
//			if(arr[j] < arr[j + 1])
//			{
//				cmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = cmp;
//			}
//		}
//	}
//	printf("最大数为%d",arr[0]);
//	printf("\n排序后数组为");
//	for(int h = 0;h <= 9;h++)
//	{
//		printf("%d ",arr[h]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = {0};
//	for(int j = 0;j < 10;j++)
//	{
//		scanf("%d",&arr[j]);
//	}
//	int max = arr[0];
//	for(int i = 1;i <= 9;i++)
//	{
//		if(max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	
//	printf("最大值是%d",max);
//	return 0;
//}
//
//int main()
//{
//	for(int i = 1;i <= 9;i++)
//	{
//		int j = 0;
//		for(j = 1;j <= i;j++)
//		{
//			printf("%d*%d = %-2d ",i,j,i*j);
//		}
//		printf("\n");	
//	}
//	return 0;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	for(int i = 1;i <= n;i++)
//	{
//		for(int h = 1;h <= n - i;h++)
//		{
//			printf(" ");
//		}
//		for(int j = 1;j <= 2*i - 1;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int pf(unsigned int n,unsigned int k)
//{
//	if(k == 0)
//		return 1;
//	else	
//		return n * pf(n,k - 1);
//}
//
//int main()
//{
//	unsigned int n = 0,k = 0;
//	scanf("%d%d",&n,&k);
//	int result = pf(n,k);
//	printf("%d的%d次方是%d",n,k,result);
//	return 0;
//}

//void reverse_string(char*string,int sz)
//{
//	int i = 0,j = 0,temp = 0;
//	
//	for(i = 0;i < sz - 1;i++)
//	{
//		for(j = 0;j < sz - 1 - i;j++)
//		{
//			temp = string[j];
//			string[j] = string[j + 1];
//			string[j + 1] = temp;
//		}
//	}
//}
//
//int main()
//{
//	char string[] = "abcdef";
//	int sz = sizeof(string)/sizeof(string[0]) - 1;
//	reverse_string(string,sz);
//	printf("%s",string);
//	return 0;
//}
//
//void reverse_string(char*string)
//{
//	char temp = *string;
//	int len = strlen(string);
//	*string = *(string + len - 1);
//	*(string + len - 1) = '\0';
//	if(strlen(string + 1) >= 2)
//	{
//		reverse_string(string + 1);
//	}
//	*(string + len - 1) = temp;
//}
//
//int main()
//{
//	char string[] = "abcdef";
//	reverse_string(string);
//	printf("%s",string);
//	return 0;
//}
//
//int DigitSum(int n)
//{
//	int i = n % 10;
//	if((n / 10) > 0)
//	{
//		return i + DigitSum(n /10);
//	}
//	else
//		return n;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int sum = DigitSum(n);
//	printf("每位之和是%d\n",sum);
//	return 0;
//}

//void Swap(char*arr1,char*arr2)
//{
//	char temp = 0;
//	temp = *arr1;
//	*arr1 = *arr2;
//	*arr2 = temp;
//	if(*arr1 != '\0')
//	{
//		Swap(arr1 + 1,arr2 + 1);
//	}
//}
//
//int main()
//{
//	char arr1[] = "msp";
//	char arr2[] = "gcc";
//	Swap(arr1,arr2);
//	printf("%s %s",arr2,arr1);
//	return 0;
//}
//
//void Init(int *arr)
//{
//	for(int i = 0;i < 8;i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void Print(int *arr)
//{
//	for(int j = 0;j <= 7;j++)
//	{
//		printf("%d",arr[j]);
//	}
//}
//
//void Reverse(int *arr)
//{
//	int i = 0,j = 0,temp = 0;
//	for(i = 0;i < 8;i++)
//	{
//		for(j = 0;j < 7 - i;j++)
//		{
//			temp = arr[j];
//			arr[j] = arr[j + 1];
//			arr[j + 1] = temp;
//		};
//	}
//}
//
//int main()
//{
//	int arr[8];
//	Init(arr);
//	Print(arr);
//	Reverse(arr);
//	for(int k = 0;k < 8;k++)
//	{
//		printf("%d ",arr[k]);
//	}
//	return 0;
//}

//int main()
//{
//	int a = -7;
//	int b = a >> 1;
//	printf("%d\n%d\n",a,b);
//	return 0;
//}

//int main()
//{
//	int a = 3,b = -5;
//	int c = a & b;
//	printf("%d\n",c);
//	
//	int x = 3,y = -5;
//	int z = x | y;
//	printf("%d\n",z);
//	
//	int m = 3,n = -5;
//	int i = m ^ n;
//	printf("%d\n",i);
//	return 0;
//}
//
//int main()
//{
//	int a = 0,count = 0;
//	scanf("%d",&a);
//	for(int i = 1;i <= 32;i++)
//	{
//		if((a & 1) == 1)
//		{
//			count++;
//		}
//		a >>= 1;
//	}
//	printf("该整数二进制的补码有%d个1",count);
//	return 0;
//}

//int step(int n)
//{
//	if(n == 1)
//	{
//		return 1;
//	}
//	if(n == 2)
//	{
//		return 2;
//	}
//	if(n > 2)
//	{
//		return step(n - 1) + step(n - 2);
//	}
//	return 0;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int count = step(n);
//	printf("共有%d种走法\n",count);
//	return 0;
//}

//int main()
//{
//	int arr[] = {1,3,7,7,10,16,34,25,3,0};
//	int n = 0;
//	scanf("%d",&n);
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	for(int i = n;i < sz - 1;i++)
//	{
//		arr[i] = arr[i + 1];
//	}
//	for(int j = 0;j < sz - 1; j++)
//	{
//		printf("%d ",arr[j]);
//	}
//	if(n > 9)
//	{
//		printf("%d",arr[9]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = {1,3,7,7,10,16,34,25,3,0};
//	int del = 0;
//	scanf("%d",&del);
//	int length = sizeof(arr)/sizeof(arr[0]);
//	int j = 0;
//	for(int i = 0;i < length;i++)
//	{
//		if(arr[i] != del)
//		{
//			arr[j] = arr[i];
//			j++;
//		}
//	}
//	for(int k = 0;k < j;k++)
//	{
//		printf("%d ",arr[k]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[5] = {0};
//	scanf("%d%d%d%d%d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4]);
//	int max = arr[0],min = arr[0];
//	int length = sizeof(arr)/sizeof(arr[0]);
//	for(int i = 0;i < length;i++)
//	{
//		if(max < arr[i])
//		{
//			max = arr[i];
//		}
//		if(min > arr[i])
//		{
//			min = arr[i];
//		}
//	}
//	int rel = max - min;
//	printf("%d",rel);
//	return 0;
//}
//
//int main()
//{
//	int k = 0,n = 1;
//	while(1)
//	{
//		scanf("%d",&k);
//		if(k < 1 || k > 15)
//		{
//			while(getchar() != '\n');
//			continue;
//		}
//		else 
//		{
//			break;
//		}
//	}
//	
//	double sum = 0.0;
//	while(sum <= k)
//	{
//		sum += 1.0/n;
//		n++;
//	}
//	
//	printf("最小的n是%d",n - 1);
//	return 0;
//}

//int main()
//{
//	char arr[100] = {0};
//	scanf("%s",arr);
//	int length = strlen(arr);
//	int count = 0;
//	
//	for(int i = 0;i < length;i++)
//	{
//		if(arr[i] == ' ' || arr[i] == '\n')
//		{
//			continue;
//		}
//		count++;
//	}
//	printf("%d",count);
//	return 0;
//}
//
//int main()
//{
//	char a = 0,b = 0,c = 0;
//	scanf("%c\n%c\n%c",&a,&b,&c);
//	if(a >= 'A' && a <= 'Z')
//	{
//		printf("%c\n",a + 32);
//	}
//	else
//		printf("%c\n",a - 32);
//	if(b >= 'A' && b <= 'Z')
//	{
//		printf("%c\n",b + 32);
//	}
//	else
//		printf("%c\n",b - 32);
//	if(c >= 'A' && c <= 'Z')
//	{
//		printf("%c\n",c + 32);
//	}
//	else
//		printf("%c\n",c - 32);
//	return 0;
//}
//
//int main()
//{
//	printf("小朋友考的怎么样呀~\n");
//	int arr[6] = {0};
//	
//	while(1)
//	{
//		int IsValid = 1;
//		scanf("%d%d%d%d%d%d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4],&arr[5]);
//		
//		for(int n = 0;n < 6;n++)
//		{
//			if(arr[n] < 0 || arr[n] > 100)
//			{
//				printf("这...这第%d个成绩不对吧\n",n + 1);
//				IsValid = 0;
//			}	
//		}
//		if(IsValid == 1)
//			break;
//	}
//		
//		int max = arr[0];
//		for(int i = 1;i < 6;i++)
//		{
//			if(max <arr[i])
//			{
//				max = arr[i];
//			}
//		}
//		printf("最高分是%d",max);
//		return 0;
//}
//
//int main()
//{
//	for(int i = 10000;i <= 99999;i++)
//	{
//		int sum = 0;
//		for(int j = 10;j <= 10000;j *= 10)
//		{
//			int x = i % j,xx = (i - x) / j;
//			int n = xx*x;
//			sum += n;
//		}
//		if(sum == i)
//			printf("%d ",i);
//	}
//	return 0;
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d",&num);
//	
//	int result = 10;
//	while((result / 1) >= 10)
//	{   
//		int i = 1,MidResult = 0;
//		for(i = 1;i <= 10;i++)
//		{
//			if(num / (int)pow(10,i) == 0)
//			{
//				break;
//			}
//		}
//		for(int j = i;j >= 1;j--)
//		{
//			int x = num / (int)pow(10,j - 1);
//			num -= x*(int)pow(10,j - 1);
//			MidResult += x;
//		}
//		result = MidResult,num = MidResult;
//	}
//	printf("%d",result);
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	int len = strlen(arr);
//	
//	int temp = 0;
//	for(int left = 0,right = len - 1;left < right;left++,right--)
//	{
//		temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//	}
//	printf("%s",arr);
//	return 0;
//}

//struct Stu
//{
//	char name[13];
//	int age;
//	char target[11];
//	long long tele;
//};
//
//void print(struct Stu* p)
//{
//	printf("%s %d %s %lld",(*p).name,(*p).age,(*p).target,(*p).tele);
//	printf("%s %d %s %lld",p -> name,p -> age,p -> target,p -> tele);
//}
//
//int main()
//{
//	struct Stu me = {"guochengcheng",18,"try my best",19522413826};
//	printf("%s %d %s %lld",me.name,me.age,me.target,me.tele);
//	print(&me);
//	return 0;
//}

//int main()
//{
//	double a[10] = {0};
//	double *p1 = a,*p2;
//	
//	int n = 0;
//	scanf("%d",&n);
//	
//	if(n >= 1 && n <= 9)
//	{
//		p2 = &a[n];
//		printf("%lld",(long long)p2 - (long long)p1);
//	}
//	else
//		printf("input error");
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	
//	double arr[100] = {0};
//	int i = 0,j = 0;
//	for(i = 0;i < n;i++)
//	{
//		scanf("%lf",&arr[i]);
//	}
//	for(j = 0;j < n - 1;j++)
//	{
//		printf("%6.2f ",arr[j]);
//	}
//	printf("%6.2f\n",arr[j]);
//	
//	int x = 0,y = 0;
//	for(x = 0;x < n - 1;x++)
//	{
//		for(y = 0;y < n - x - 1;y++)
//		{
//			double *p = arr + y;
//			if(*p > *(p + 1))
//			{
//				double temp = 0.0;
//				temp = *p;
//				*p = *(p + 1);
//				*(p + 1) = temp;
//			}
//		}
//	}
//	
//	int z = 0;
//	for(z = 0;z < n - 1;z++)
//	{
//		printf("%6.2f ",arr[z]);
//	}
//	printf("%6.2f",arr[z]);
//	return 0;
//}

//void SelectMin(double *arr,int n)
//{
//	for(int x = 0;x < n - 1;x++)
//	{
//		int min = x,y = 0;
//		for(y = x + 1;y < n;y++)
//		{
//			if(arr[min] > arr[y])
//			{
//				min = y;
//			}
//		}
//		if(y != x)
//		{
//			double temp = 0.0;
//			temp = arr[min];
//			arr[min] = arr[x];
//			arr[x] = temp;
//		}
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	
//	double arr[100] = {0};
//	int i = 0,j = 0;
//	for(i = 0;i < n;i++)
//	{
//		scanf("%lf",&arr[i]);
//	}
//	for(j = 0;j < n - 1;j++)
//	{
//		printf("%6.2f ",arr[j]);
//	}
//	printf("%6.2f\n",arr[j]);
//	
//	SelectMin(arr,n);
//	
//	int z = 0;
//	for(z = 0;z < n - 1;z++)
//	{
//		printf("%6.2f ",arr[z]);
//	}
//	printf("%6.2f",arr[z]);
//	return 0;
//}

//void swap(double* arr,int n)
//{
//	for(int h = 0;h < n - 1;h++)
//	{
//		int min = h;
//		for(int j = h + 1;j < n;j++)
//		{
//			if(arr[min] > arr[j])
//			{
//				min = j;
//			}
//		}
//		if(min != h)
//		{
//			double temp = 0.0;
//			temp = arr[h];
//			arr[h] = arr[min];
//			arr[min] = temp;
//		}
//	}
//}

//void swap(double* arr,int n)
//{
//	for(int h = 0;h < n - 1;h++)
//	{
//		int min = h;
//		for(int j = h + 1;j < n - 1;j++)
//		{
//			if(*(arr + min) > *(arr + j))
//			{
//				min = j;
//			}
//		}
//		if(min != h)
//		{
//			double temp = 0.0;
//			temp = *(arr + h);
//			*(arr + h) = *(arr + min);
//			*(arr + min) = temp;
//		}
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	double arr[100] = {0};
//	for(int i = 0;i < n;i++)
//	{
//		scanf("%lf",&arr[i]);
//	}
//	swap(arr,n);
//	for(int x = 0;x < n;x++)
//	{
//		printf("%.1f ",arr[x]);
//	}
//	return 0;
//}

//void swap(int* arr,int n)
//{
//	for(int i = 0;i < n - 1;i++)
//	{
//		int min = i,j = 0;
//		for(j = i + 1;j < n;j++)
//		{
//			if(*(arr + min) > *(arr + j))
//			{
//				min = j;
//			}
//		}
//		if(min != i)
//		{
//			int temp = 0;
//			temp = *(arr + i);
//			*(arr + i) = *(arr + min);
//			*(arr + min) = temp;
//		}
//	}
//}
//
//float average(int* arr,int n)
//{
//	int mid = 0;
//	for(int a = 0;a < n;a++)
//	{
//		mid += *(arr + a);
//	}
//	float rel = (float)mid / n;
//	return rel;	
//}
//
//int b2search(int* arr,int n,int ograde)
//{
//	int left = 0,right = n - 1;
//	
//	while(1)
//	{
//		int mid = left + (right - left) / 2;
//		if(*(arr + mid) > ograde)
//		{
//			right = mid - 1;
//		}
//		else if(*(arr + mid) < ograde)
//		{
//			left = mid + 1;
//		}
//		else
//			return n - mid;
//	}
//}
//
//int main()
//{
//	printf("please input your class grade\n");
//	int arr[11] = {0};
//	int n = 0;
//	for(int k = 0;k < 11;k++)
//	{
//		scanf("%d",&arr[k]);
//		if(arr[k] == -1)
//		{
//			arr[k] = 0;
//			break;
//		}
//		n++;
//	}
//	
//	printf("and your own grade\n");
//	int ograde = 0;
//	while(1)
//	{
//		int IsExist = 0;
//		scanf("%d",&ograde);
//		
//		for(int h = 0;h < n;h++)
//		{
//			if(arr[h] == ograde)
//			{
//				IsExist++;
//			}
//		}
//		if(IsExist == 0)
//		{
//			printf("not in table,try again\n");
//		}
//		else
//		{
//			break;
//		}
//	}
//	
//	swap(arr,n);
//	
//	float ave = average(arr,n);
//	
//	int rank = b2search(arr,n,ograde);
//	
//	printf("%.2f, %d, %d",ave,ograde,rank);
//	return 0;
//}

//int How1(int m,int n)
//{
//	int arrm[32] = {0},arrn[32] = {0};
//	int count = 0;
//	
//	for(int i = 31;i >= 0;i--)
//	{
//		int m2 = m % 2,n2 = n % 2;
//		arrm[i] = m2,arrn[i] = n2;
//		m /= 2,n /= 2;
//	}
//	for(int j = 0;j < 32;j++)
//	{
//		if(arrm[j] == arrn[j])
//		{
//			count++;
//		}
//	}
//	return count;
//}
//
//int main()
//{
//	int m = 0,n = 0;
//	scanf("%d%d",&m,&n);
//	
//	int i = How1(m,n);
//	printf("相同的位数有%d个\n",i);
//	
//	return 0;
//}

//struct Peo
//{
//	char name[18];
//	int age;
//	char tele[12];
//};
//struct stu
//{
//	struct Peo men;
//	int age;
//	char stunum[20];
//};
//void printf1(struct Peo *me)
//{
//	printf("%s %d %s\n",me->name,me->age,me->tele);
//}
//void printf2(struct stu men)
//{
//	printf("%s %d %s %d %s\n",men.men.name,men.men.age,men.men.tele,men.age,men.stunum);
//}
//int main()
//{
//	struct Peo me = {"guochengcheng",18,"19522413826"};
//	printf("%s %d %s\n",me.name,me.age,me.tele);
//	struct stu men = {{"gcc",19,"19522413826"},19,"2026141460421"};
//	printf("%s %d %s %d %s\n",men.men.name,men.men.age,men.men.tele,men.age,men.stunum);
//	printf1(&me);
//	printf2(men);
//	return 0;
//}
//

//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	for(int i = 1;i <= (n + 1) / 2;i++)
//	{
//		printf("*");
//		if(i != (n + 1) / 2)
//		{
//			for(int j = i;j <= n - 1 - i;j++)
//			{
//				printf(" ");
//			}
//			printf("*");
//		}
//		printf("\n");
//		if(i != (n + 1) / 2)
//		{
//			for(int k = 1;k <= i;k++)
//			{
//				printf(" ");
//			}
//		}
//	}
//	
//	for(int x = ((n + 1) / 2) + 1;x <= n;x++)
//	{
//		for(int h = n - x;h > 0;h--)
//		{
//			printf(" ");
//		}
//		printf("*");
//		for(int y = n - x;y < x - 2;y++)
//		{
//			printf(" ");
//		}
//		printf("*\n");
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	
//	for(int i = 0;i < n;i++)
//	{
//		for(int j = 0;j < n;j++)
//		{
//			if(i == j || (i + j) == (n - 1))
//			{
//				printf("*");
//			}
//			else
//			{
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//	
//	
//	return 0;
//}

//int main()
//{
//	int year = 0,month = 0;
//	scanf("%d%d",&year,&month);
//	
//	int is_leap_year = (((year % 4 == 0) && (year % 100 != 0)) || (year % 400) == 0);
//	switch(month)
//		{
//		case 1:case 3:case 5:case 7:case 8:case 10:case 12:
//		{
//			printf("%d年%d月有31天\n",year,month);
//			break;
//		}
//		case 4:case 6:case 9:case 11:
//		{
//			printf("%d年%d月有30天\n",year,month);
//			break;
//		}
//		case 2:
//			printf("%d年%d月有%d天\n",year,month,(is_leap_year ? 29 : 28));
//		}
//	return 0;
//}

//int main()
//{
//	int arr[10] = {0};
//	for(int h = 0;h < 10;h++)
//	{
//		scanf("%d",&arr[h]);
//	}
//	int len = sizeof(arr) / sizeof(arr[0]);
//	
//	for(int i = 0;i < len - 1;i++)
//	{
//		for(int j = 0;j < len - i - 1;j++)
//		{
//			
//			if((arr[j + 1] % 2) == 1)
//			{
//				int temp = 0;
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	for(int k = 0;k < len;k++)
//	{
//		printf("%d ",arr[k]);
//	}
//	return 0;
//}

//void print1(int(*p)[5],int r,int c)
//{
//	for(int i = 0;i < r;i++)
//	{
//		for(int j = 0;j < c;j++)
//		{
//			printf("%d ",*(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int r = 3,c = 5;
//	int arr[3][5] = {1,2,3,4,5,2,3,4,5,6,3,4,5,6,7};
//	print1(arr,r,c);
//	return 0;
//}

//int main()
//{
//	int a = 0,b = 0,c = 0;
//	scanf("%d%d%d",&a,&b,&c);
//	
//	int temp = 0;
//	if(a > c)
//	{
//		temp = a;
//		a = c;
//		c = temp;
//	}
//	if(b > c)
//	{
//		temp = b;
//		b = c;
//		c = temp;
//	}
//	
//	if((a + b) <= c)
//		printf("不是三角形\n");
//	else if(a == b && b == c)
//		printf("是等边三角形");
//	else
//		printf("是三角形");
//
//	return 0;
//}

//int main()
//{
//	int n = 0,m = 0;
//	scanf("%d%d",&n,&m);
//	
//	int arr1[100] = {0},arr2[100] = {0};
//	for(int a = 0;a < n;a++)
//	{
//		scanf("%d",&arr1[a]);
//	}
//	for(int b = 0;b < m;b++)
//	{
//		scanf("%d",&arr2[b]);
//	}
//	
//	int i = 0,j = 0;
//	while(i < n && j < m)
//	{
//		if(arr1[i] <= arr2[j])
//		{
//			printf("%d ",arr1[i]);
//			i++;
//		}
//		else
//		{
//			printf("%d ",arr2[j]);
//			j++;
//		}
//	}
//	
//	if(i < n)
//	{
//		for(;i < n;i++)
//		{
//			printf("%d ",arr1[i]);
//		}
//	}
//	if(j < m)
//	{
//		for(;j < m;j++)
//		{
//			printf("%d ",arr2[j]);
//		}
//	}
//	return 0;
//}

//void menu()
//{
//	printf("********************\n");
//	printf("***1.add****2.sub***\n");
//	printf("***3.mul****4.div***\n");
//	printf("*******0.exit*******\n");
//	printf("********************\n");
//}

//int add(int x,int y)
//{
//	return x + y;
//}
//
//int sub(int x,int y)
//{
//	return x - y;
//}
//
//int mul(int x,int y)
//{
//	return x*y;
//}
//
//int div0(int x,int y)
//{
//	return x / y;
//}
//
//
//int main()
//{
//	int input = 0;
//	int x = 0,y = 0;
//	int (*pf[])(int,int) = {0,add,sub,mul,div0};
//	
//	do
//	{
//		menu();
//		
//		printf("请选择\n");
//		scanf("%d",&input);
//
//		if(input == 0)
//		{
//			printf("饿啊\n");
//		}
//		else if(input <= 4 && input >= 1)
//		{
//			printf("请输入\n");
//			scanf("%d %d",&x,&y);
//			int ret = pf[input](x,y);
//			printf("%d\n",ret);
//		}
//		else
//			printf("何意味\n");
//	}
//	while(input);
//	return 0;
//}

//int cmp_int(const void* e1,const void* e2)
//{
//	return *((int*)e1) - *((int*)e2);
//}
//
//int main()
//{
//	int arr[10] = {10,9,8,7,6,5,4,3,2,1};
//	
//	qsort(arr,10,sizeof(arr[0]),cmp_int);
//	for(int i = 0;i < 10;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}

//typedef struct stu
//{
//	char name[10];
//	int age;
//} stu;
//
//int sort_by_name(const void* e1,const void* e2)
//{
//	return strcmp(((stu*)e1) -> name,((stu*)e2) -> name);
//}
//
//int sort_by_age(const void* e1,const void* e2)
//{
//	return (((stu*)e1) -> age) - (((stu*)e2) -> age);
//}
//
//
//
//
//int cmp(const void* e1,const void* e2)
//{
//	return *(char*)e1 - *(char*)e2;
//}
//
//void swap(void* me1,void* me2,int width)
//{
//	for(int k = 0;k < width;k++)
//	{
//		char tem = '0';
//		tem = *((char*)me1 + k);
//		*((char*)me1 + k) = *((char*)me2 + k);
//		*((char*)me2 + k) = tem;
//	}
//}
//
//void bubble_sort(void* me,int len2,int width,int(*cmp)(const void* e1,const void* e2))
//{
//	for(int i = 0;i < len2 - 1;i++)
//	{
//		for(int j = 0;j < len2 - 1 - i;j++)
//		{
//			if(cmp(((char*)me + j*width),((char*)me + (j + 1)*width)) > 0)
//			{
//				swap((char*)me + j*width,(char*)me + (j + 1)*width,width);
//			}
//		}
//	}
//}
//
//int main()
//{
//	stu s[] = {{"gcc",18},{"wyx",19},{"cyy",17}};
//	char me[] = {"gcccyy"};
//	int len1 = sizeof(s) / sizeof(s[0]);
//	int len2 = sizeof(me) / sizeof(me[0]);
//	
////	qsort(s,len1,sizeof(s[0]),sort_by_name);
//	bubble_sort(me,len2,sizeof(me[0]),cmp);
//	for(int i = 0;i < len2;i++)
//	{
//		printf("%c",me[i]);
//	}
//	
////	qsort(s,len1,sizeof(s[0]),sort_by_age);
////	for(int i = 0;i < len;i++)
////	{
////		printf("%d  ",s[i].age);
////	}
//	return 0;
//}

//struct stu
//{
//	char name[10];
//	int age;
//};
//
//int sort_by_name(const void* e1,const void* e2)
//{
//	return strcmp((((struct stu*)e1) -> name),(((struct stu*)e2) -> name));
//}
//
//int sort_by_age(const void* e1,const void* e2)
//{
//	return (((struct stu*)e1) -> age) - (((struct stu*)e2) -> age);
//}
//
//int main()
//{
//	struct stu s[3] = {{"gcc",18},{"wyx",19},{"cyy",17}};
//	int len1 = sizeof(s) / sizeof(s[0]);
//	
//	qsort(s,len1,sizeof(s[0]),sort_by_name);
//	for(int i = 0;i < len1;i++)
//	{
//		printf("%s ",s[i].name);
//	}
//	
//	qsort(s,len1,sizeof(s[0]),sort_by_age);
//	for(int i = 0;i < len1;i++)
//	{
//		printf("%d ",s[i].age);
//	}
//	return 0;
//}

//void swap(void* e1,void* e2,int width)
//{
//	for(int k = 0;k < width;k++)
//	{
//		char temp = *((char*)e1 + k);
//		*((char*)e1 + k) = *((char*)e2 + k);
//		*((char*)e2 + k) = temp;
//	}
//}
//
//int cmp(const void* e1,const void* e2)
//{
//	return strcmp((((struct stu*)e1) -> name),(((struct stu*)e2) -> name));
//}
//
//void bubble_sort(void* s,int len,int width,int(*cmp)(const void* e1,const void* e2))
//{
//	for(int i = 0;i < len - 1;i++)
//	{
//		for(int j = 0;j < len - 1 - i;j++)
//		{
//			if(cmp(((char*)s + j*width),((char*)s + (j + 1)*width)) > 0)
//			{
//				swap(((char*)s + j*width),((char*)s + (j + 1)*width),width);
//			}
//		}
//	}
//}
//
//int main()
//{
//	struct stu s[3] = {{"gcc",18},{"wyx",19},{"cyy",17}};
//	int len = sizeof(s) / sizeof(s[0]);
//	
//	bubble_sort(s,len,sizeof(s[0]),cmp);
//	for(int i = 0;i < len;i++)
//	{
//		printf("%s %d  ",s[i].name,s[i].age);
//	}
//	
//	return 0;
//}

//int main()
//{
//	char str[] = {"oh yeah"};
//	int len = strlen(str);
//	int left = 0,right = len - 1;
//	
//	while(left < right)
//	{
//		char temp = str[left];
//		str[left] = str[right];
//		str[right] = temp;
//		left++,right--;
//	}
//	printf("%s",str);
//	return 0;
//}

//int main()
//{
//	int money = 0;
//	scanf("%d",&money);
//	
//	int count = money,empbottle = money;
//	while(empbottle / 2 != 0)
//	{
//		count += empbottle / 2;
//		empbottle = (empbottle / 2) + (empbottle % 2);
//	}
//	printf("%d",count);
//	return 0;
//}

//int main()
//{
//	char arr1[100][100] = {0},arr2[100][100] = {0};
//	int count = 0;
//	while(1)
//	{
//		scanf("%s",arr1[count]);
//		if(strcmp(*(arr1 + count),"EOF") == 0) break;
//		count++;
//	}	
//	
//	for(int i = 0;i < count;i++)
//	{
//		int len = strlen(arr1[i]);
//		for(int h = 0;h < len;h++)
//		{
//			if(arr1[i][h] >= 'a' && arr1[i][h] <= 'w') arr1[i][h] += 3;
//			else if(arr1[i][h] >= 'x' && arr1[i][h] <= 'z') arr1[i][h] -= 23;
//			else if(arr1[i][h] >= 'A' && arr1[i][h] <= 'W') arr1[i][h] += 3;
//			else if(arr1[i][h] >= 'X' && arr1[i][h] <= 'Z') arr1[i][h] -= 23;
//			else printf("输入错误\n");	
//			arr2[i][h] = arr1[i][h];
//		}
//	}
//	
//	for(int j = 0;j < count;j++)
//	{
//		printf("%s",arr2[j]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[20] = {0};
//	char arr2[10] = {0};
//	int i = 0,j = 0;
//	int count = 0;
//	while(1)
//	{
//		int input = getchar();
//		if(input == '-')
//		{
//			arr2[i] = input;
//			count++;
//			i++;
//		}
//		else if(input >= '0' && input <= '9')
//		{
//			arr1[j] = input - '0';
//			j++;
//		}
//		else if(input == '\n' || input == EOF)
//		{
//			break;
//		}
//		else
//		{
//			printf("error\n");
//			return 1;
//		}
//	}
//	
//	int sum = 0;
//	for(int k = 0;k < 13;k++)
//	{
//		if((k + 1) % 2 == 0) sum += arr1[k]*3;
//		else sum += arr1[k];
//	}
//	if(sum % 10 == 0)
//	{
//		printf("right\n");
//	}
//	else 
//		printf("illegal\n");
//	
//	int x = 0,y = 0;
//	for(int h = 0;h < 16;h++)
//	{
//		if() 
//		{
//			printf("%c",arr2[x]);
//			x++;
//		}
//		else
//		{
//			printf("%d",arr1[y]);
//			y++;
//		}
//	}
//	return 0;
//}

//void shift_v1(int n,int* arr)
//{
//	int left = 0,right = 8;
//	while(left < right)
//	{
//		int temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//	
//	int left1 = 0,right1 = n - 1;
//	while(left1 < right1)
//	{
//		int temp = arr[left1];
//		arr[left1] = arr[right1];
//		arr[right1] = temp;
//		left1++;
//		right1--;
//	}
//	
//	int left2 = n,right2 = 8;
//	while(left2 < right2)
//	{
//		int temp = arr[left2];
//		arr[left2] = arr[right2];
//		arr[right2] = temp;
//		left2++;
//		right2--;
//	}
//}
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9};
//	printf("请输入\n");
//	int n = 0;
//	scanf("%d",&n);
//	for(int i = 0;i < 9;i++)
//	{
//		printf("%d",arr[i]);
//	}
//	printf("\n");
//	
//	shift_v1(n,arr);
//	
//	for(int j = 0;j < 9;j++)
//	{
//		printf("%d",arr[j]);
//	}
//	return 0;
//}

//size_t my_strlen(const char* str)
//{
//	size_t count = 0;
//	assert(str);
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//char* my_strcpy(char* dest,const char* src)
//{
//	assert(dest && src);
//	char* pd = dest;
//	while(*src != '\0')
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src;
//	return pd;
//}
//
//char* my_strcat(char* dest,const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	while(*dest != '\0')
//	{
//		dest++;
//	}
//	while((*dest++ = *src++))
//	{
//		;
//	}
//	return ret;
//}
//
//int my_strcmp(const char*str,const char*xixi)
//{
//	while(*str == *xixi)
//	{
//		if(*str == '\0') return 0;
//		str++;
//		xixi++;
//	}
//	return (*str - *xixi);
//}
//
//int main()
//{
//	char str[100] = {"abcdef"};
//	char str0[100] = {"gccwyx"};
//	char xixi[100] = {"cyy"};
//	int ret = my_strlen(str);
//	
//	my_strcpy(str,str0);
//	my_strcat(str,"cyy");
//	int rel = my_strcmp(str,xixi);
//	printf("%s\n",str);
//	printf("%d\n",ret);
//	printf("%d",rel);
//	return 0;
//}

//char* my_strncpy(char* dest,const char* src,int num)
//{
//	assert(dest && src);
//	char* ret = dest;
//	int i = 0;
//	while(i < num)
//	{
//		*dest++ = *src++;
//		i++;
//	}
//	return ret;
//}
//
//char* my_strncat(char* dest,const char* src,int num)
//{
//	assert(dest && src);
//	int i = 0;
//	char* ret = dest;
//	while(*dest != '\0')
//	{
//		dest++;
//	}
//	while(i < num)
//	{
//		*dest++ = *src++; 
//		i++;
//	}
//	return ret;
//}
//
//int main()
//{
//	char str[100] = {"gccwyx"};
//	char xixi[100] = {"cyy"};
//	my_strncpy(str,xixi,1);
//	my_strncat(str,xixi,2);
//	printf("%s\n",str);
//	return 0;
//}

//char* my_strstr(const char* str,const char* substr)
//{
//	assert(str && substr);
//	const char* s1 = str;
//	const char* s2 = substr;
//	const char* p = str;
//	while(*p != '\0')
//	{
//		s1 = p;
//		s2 = substr;
//		while(*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if(*s2 == '\0') return (char*)p;
//		p++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char email[100] = {"gccjk2026@outlook.com"};
//	char sube[100] = {"out"};
//	char* ret = my_strstr(email,sube);
//	if(ret == NULL) printf("未找到\n");
//	else printf("%s\n",ret);
//	return 0;
//}

//int main()
//{
//	char email[100] = {"gccjk2026@outlook.com"};
//	char* sep = "@.";
//	char cp[100] = {0};
//	strcpy(cp,email);
//	char* ret = NULL;
//	for(ret = strtok(cp,sep);ret != NULL;ret = strtok(NULL,sep))
//	{
//		printf("%s\n",ret);
//	}
//	return 0;
//}

//void* my_memcpy(void* dest,void* src,size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	while(num--)
//	{
//		*(char*)dest = *(char*)src;
//		(char*)dest++;
//		(char*)src++;
//	}
//	return (char*)ret;
//}
//
//void* my_memmove(void* dest,void* src,size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	if(dest < src)
//	{
//		while(num--)
//		{
//			*(char*)dest = *(char*)src;
//			(char*)dest++;
//			(char*)src++;
//		}
//	}
//	else
//	{
//		while(num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr[100] = {"gccwyx"};
//	char arr0[100] = {"gcccyy"};
//	my_memcpy(arr,arr0,6);
//	my_memmove(arr,arr + 3,3);
//	memset(arr,"gcc",3);
//	printf("%s\n",arr);
//	return 0;
//}

//int main()
//{
//	int a,b;
//	scanf("%d%d",&a,&b);
//	int ori = a;
//	while(a % b != 0)
//	{
//		a += ori;
//	}
//	printf("%d",a);
//	return 0;
//}

//int gcd(int a,int b)
//{
//	while(b != 0)
//	{
//		int temp = a % b;
//		a = b;
//		b = temp;
//	}
//	return a;
//}
//
//int main()
//{
//	int a,b;
//	scanf("%d%d",&a,&b);
//	int i = gcd(a,b);
//	int rel = a*b / i;
//	printf("%d",rel);
//	return 0;
//}

//void reverse(char* arr,int len)
//{
//	int left = 0,right = len - 1;
//	while(left < right)
//	{
//		char temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}
//
//void reverse_part(char* arr)
//{
//	int i = 0;
//	while(arr[i] != ' ' && arr[i] != '\0')
//	{
//		i++;
//	}
//		
//	int left = 0,right = i - 1;
//	while(left < right)
//	{
//		int temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[] = {"I like Beijing."};
//	int len = strlen(arr);
//	reverse(arr,len);
//	
//	char *p = arr;
//	while(*p != '\0')
//	{
//		reverse_part(p);
//		while(*p != ' ' && *p != '\0')
//		{
//			p++;
//		}
//		if(*p == ' ') p++;
//	}
//	printf("%s\n",arr);
//	return 0;
//}

//int main()
//{
//	int arr[10] = {2,1,3,4,5,5,9,11,91,78};
//	int count = 0;
//	for(int i = 0;i < 10;i++)
//	{
//		if(arr[i] % 2 != 0)
//		{
//			int tmp = arr[i];
//			arr[i] = arr[count];
//			arr[count] = tmp;
//			count++;
//		}
//	}
//	for(int j = 0;j < 10;j++)
//	{
//		printf("%d ",arr[j]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[5] = {1,3,5,7,9};
//	int arr2[5] = {2,4,6,8,10};
//	int *p1 = arr1,*p2 = arr2;
//	int count = 0;
//	for(int i = 0;i < 9;i++)
//	{
//		if(*p1 < *p2 && count <= 5) 
//		{	
//			printf("%d ",*p1);
//			p1++;
//			count++;
//		}
//		else if(*p1 >= *p2)
//		{
//			printf("%d ",*p2);
//			p2++;
//		}
//	}
//	if(count == 5)
//		printf("%d",arr1[4]);
//	else
//		printf("%d",arr2[4]);
//	return 0;
//}

//enum day
//{
//	mon = 1,
//	tus,
//	wed = 91,
//	thu,
//	fri,
//	sat,
//	sun
//};
//
//int main()
//{
//	printf("%d",mon);
//	printf("%d",wed);
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(40);
//	if(p == NULL) 
//	{
//		printf("%s",strerror(errno));
//		return 1;
//	}
//	for(int i = 0;i < 10;i++)
//	{
//		p[i] = i;
//	}
//	
//	int* str = (int*)realloc(p,80);
//	if(str != NULL) p = str;
//	for(int j = 0;j < 10;j++)
//	{
//		printf("%d",p[j]);
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	if(n > 9 || n < 1)
//	{
//		printf("input error\n");
//		return 1;
//	}
//	
//	for(int i = 1;i <= n;i++)
//	{
//		printf(" ");
//		printf("\t%d",i);
//	}
//	printf("\n");
//	
//	for(int x = 1;x <= n;x++)
//	{
//		printf("%d\t",x);
//		for(int y = 1;y <= x;y++)
//		{
//			printf("%dx%d=%d\t",y,x,x*y);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	if(n > 9 || n < 1)
//	{
//		printf("input error\n");
//		return 1;
//	}
//	
//	int i = 0;
//	for(i = 1;i <= n;i++)
//	{
//		printf("\t%d",i);
//	}
//	printf("\t");
//	printf("\n");
//	
//	int x = 0,y = 0;
//	for(x = 1;x <= n;x++)
//	{
//		printf("%d\t",x);
//		for(y = 1;y <= x;y++)
//		{
//			printf("%dx%d=%d\t",y,x,x*y);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	(*(void(*)())0)();
//	
//	void(*signal(int,void(*)(int)))(int);
//	
//	void(*)(int) signal(int,void(*)(int));
//	return 0;
//}

//unsigned char getChkCode(char* arr, int len)
//{
//	int sum = 0;
//	for(int i = 0;i < len;i++)
//	{
//		sum += arr[i];
//	}
//	return sum;
//}
//
//char getTestCode(unsigned char chkcode)
//{
//	char table[]={'B','A'};
//	int i = chkcode % 2;
//	return table[i];
//}
//
//int getISBN13ChkCode(char arr[],int len)
//{
//	int sum1 = 0,sum2 = 0;
//	for(int i = 1;i < len;i += 2)
//	{
//		int num = arr[i] - '0';
//		sum1 += num*3;
//	}
//	for(int i = 0;i < len;i += 2)
//	{
//		int num = arr[i] - '0';
//		sum2 += num;
//	}
//	return (sum1 + sum2) % 10;
//}
//
//int main()
//{
//	char arr[14] = {0};
//	int len = 0;
//	
//	while(1)
//	{
//		scanf("%s",arr);
//		len = strlen(arr);
//		if(len != 13) printf("输入错误，请重新输入\n");
//		else break;
//	}
//	
//	int ret = getChkCode(arr,len);
//	printf("0x%x\n",ret);
//	
//	char test = getTestCode(ret);
//	printf("%c\n",test);
//	
//	int isbn = getISBN13ChkCode(arr,len);
//	printf("%s %d\n",arr,isbn);
//	return 0;
//}

//int isLeapYear(int year)
//{
//	if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) return 1;
//	return 0;
//}
//
//int getDaysofMonth(int year, int month)
//{
//	int ret = isLeapYear(year);
//	int daysofmonth[]={31,28,31,30,31,30,31,31,30,31,30,31};
//	if(ret == 1 && month == 2)
//	{
//		return 29;
//	}
//	else 
//	{
//		return daysofmonth[month - 1];
//	}
//}
//
//int getWeekDay(int year, int mon, int day)
//{
//	struct tm mytm;
//	memset(&mytm, 0, sizeof(mytm));
//	mytm.tm_year = year - 1900; 
//	mytm.tm_mon = mon - 1; 
//	mytm.tm_mday = day;
//	mktime(&mytm);
//	return mytm.tm_wday;
//}
//
//void getCalendar(int year, int month, int *weeks)
//{
//	int ret0 = getDaysofMonth(year,month);
//	int ret = getWeekDay(year,month,1);
//	for(int i = 0;i < 42;i++)
//	{
//		if(i < ret || i > (ret + ret0 - 1)) weeks[i] = 0;
//		else weeks[i] = i - ret + 1;
//	}
//}
//
//void printCalendar(int month,int *weeks)
//{
//	char holiday_mm[] = {1,1,1,5,5,5,10,10,10,10,10,10,10};
//	char holiday_dd[] = {1,2,3,1,2,3,1,2,3,4,5,6,7};
//	int holiday_num = 13;
//	char *wname[] = {"SUN","MON","TUE","WED","THU","FRI","SAT"};
//	for(int i = 0;i < 7;i++)
//	{
//		printf("%s\t",wname[i]);
//	}
//	printf("\n");
//	
//	for(int j = 0;j < 42;j++)
//	{
//		if(weeks[j] == 0) printf("\t");
//		else printf("%2d",weeks[j]);
//		
//		for(int k = 0;k < holiday_num;k++)
//		{
//			if((month == holiday_mm[k]) && (weeks[j] == holiday_dd[k]) && (j % 7 != 6) && (j % 7 != 0))
//			{	
//				printf("(*)");
//				break;
//			}
//			else if(((j % 7 == 6) || (j % 7 == 0)) && weeks[j] != 0)
//			{
//				printf("(@)");
//				break;
//			}
//		}
//		if(weeks[j] != 0) printf("\t");
//		
//		if(j % 7 == 6) printf("\n");
//	}
//	
//}
//
//int main()
//{
//	int year = 0,month = 0;
//	int weeks[42] = {0};
//	scanf("%d%d",&year,&month);
//	
//	getCalendar(year,month,weeks);
//	printCalendar(month,weeks);
//	return 0;
//}

//void printCalendar(int month,int *weeks)
//{
//	char holiday_mm[] = {1,1,1,5,5,5,10,10,10,10,10,10,10};
//	char holiday_dd[] = {1,2,3,1,2,3,1,2,3,4,5,6,7};
//	int holiday_num = 13;
//	char *wname[] = {"SUN","MON","TUE","WED","THU","FRI","SAT"};
//	for(int i = 0;i < 7;i++)
//	{
//		printf("%s\t",wname[i]);
//	}
//	printf("\n");
//	
//	for(int j = 0;j < 42;j++)
//	{
//		if(weeks[j] == 0) printf("\t");
//		else 
//		{
//			int flag1 = 0,flag2 = 0;
//			for(int k = 0;k < holiday_num;k++)
//			{
//				if(month == holiday_mm[k] && weeks[j] == holiday_dd[k])
//				{
//					flag1 = 1;
//					break;
//				}
//			}
//			if((j % 7 == 0) || (j % 7 == 6)) flag2 = 1;
//			
//			if(flag2) printf("%2d(@)\t",weeks[j]);
//			else if(flag1) printf("%2d(*)\t",weeks[j]);
//			else printf("%2d",weeks[j]);
//		}
//		
//		if(j % 7 == 6) printf("\n");
//	}
//}

int main()
{
	
	return 0;
}
