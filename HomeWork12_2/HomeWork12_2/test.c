#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#include <string.h>
#include <Windows.h>




//
//4.��дһ�����򣬿���һֱ���ռ����ַ���
//�����Сд�ַ��������Ӧ�Ĵ�д�ַ���
//������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ���
//��������ֲ������
void String(){
	char ch = 0;
	while (1){
		printf("������:>");
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

//3.��д����ģ��������������ĳ�����
//����������������룬������ȷ����ʾ����¼�ɹ���, �������
//�����������룬����������Ρ����ξ�������ʾ�˳�����
void scanf_password(){
	char ch[1024] = { 0 };
	int count = 0;
	while (1){
		printf("����������:>");
		scanf("%s", ch);
		if (strcmp(ch, "123456") == 0){
			printf("�����ɶ���\n");
			break;
		}
		count++;
		if (count == 5){
			printf("��30s���ٴ�����\n");
			count = 0;
			Sleep(30000);
		}
	}
}
//2.д����������������������в�����Ҫ�����֣�
//�ҵ��˷����±꣬�Ҳ������� - 1.���۰���ң�
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
//1.��ɲ�������Ϸ��
void guessNum(){
	int m = rand()%100+1;
	int n = 0;
	while (1){
		printf("����������:>");
		scanf("%d", &n);
		if (n > m){
			printf("����\n");
		}
		else if (n < m){
			printf("С��\n");
		}
		else{
			printf("�¶���\n");
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