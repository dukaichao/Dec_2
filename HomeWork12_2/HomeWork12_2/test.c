#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#include <string.h>
#include <Windows.h>




//
//4.编写一个程序，可以一直接收键盘字符，
//如果是小写字符就输出对应的大写字符，
//如果接收的是大写字符，就输出对应的小写字符，
//如果是数字不输出。
void String(){
	char ch = 0;
	while (1){
		printf("请输入:>");
		fflush(stdin);
		scanf("%c", &ch);
		if (96 < ch&&ch < 123)
			printf("%c\n", (ch - 32));
		else if (64 < ch&&ch < 91)
			printf("%c\n", (ch + 32));
		else
			continue;
		
	}
}

//3.编写代码模拟三次密码输入的场景。
//最多能输入三次密码，密码正确，提示“登录成功”, 密码错误，
//可以重新输入，最多输入三次。三次均错，则提示退出程序。
void scanf_password(){
	char ch[1024] = { 0 };
	int count = 0;
	while (1){
		printf("请输入密码:>");
		scanf("%s", ch);
		if (strcmp(ch, "123456") == 0){
			printf("被你蒙对了\n");
			break;
		}
		count++;
		if (count == 5){
			printf("请30s后再次输入\n");
			count = 0;
			Sleep(30000);
		}
	}
}
//2.写代码可以在整型有序数组中查找想要的数字，
//找到了返回下标，找不到返回 - 1.（折半查找）
int binary_search(int arr[], int len,int target){
	int start = 0;
	int end = len - 1;
	while (start <= end){
		int mid = (end - start) / 2 + start;
		if (arr[mid] < target){
			start = ++mid;
		}
		else if (arr[mid]>target){
			end = --mid;
		}
		else
			return mid;
	}
	return -1;
}
//1.完成猜数字游戏。
void guessNum(){
	int m = rand()%100+1;
	int n = 0;
	while (1){
		printf("请输入数字:>");
		scanf("%d", &n);
		if (n > m){
			printf("大了\n");
		}
		else if (n < m){
			printf("小了\n");
		}
		else{
			printf("猜对了\n");
			break;
		}
	}
}
int main(){
	/*srand(time(0));
	guessNum();*/

	/*int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 ,10};
	int len = sizeof(arr) / sizeof(arr[0]);
	int target = 0;
	printf("%d\n", binary_search(arr, len, target));*/

	/*scanf_password();*/
	String();
	system("pause");
	return 0;
}