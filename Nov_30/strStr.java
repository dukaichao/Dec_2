package cn.dkc.Nov_30;

import java.util.Scanner;

/*给定一个 haystack 字符串和一个 needle 字符串，在 haystack 字符串中找出 needle 字符串出现的第一个位置 (从0开始)。如果不存在，则返回  -1。

示例 1:

输入: haystack = "hello", needle = "ll"
输出: 2
示例 2:

输入: haystack = "aaaaa", needle = "bba"
输出: -1
类似于kmp算法
*/
public class strStr{
	public int mystrStr(String s,String str) {
		int len = s.length();
		int length = str.length();
		if(length == 0)
			return -1;
		for(int i = 0;i<len;i++) {
			if(s.substring(i, i+1).equals(str.substring(0, 1))&&i+length<len&&
					s.substring(i, i+length).equals(str))
				return i;
		}
		return -1;
	}
	public static void main(String[] args) {
		System.out.println("请输入:>");
		Scanner s = new Scanner(System.in);
		System.out.println(new strStr().mystrStr(s.nextLine(), s.nextLine()));
		
	}
}
