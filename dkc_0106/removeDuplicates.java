package dkc_0106;

/*
 	移除重复元素，不能开辟新空间
 */

public class removeDuplicates {
	
	
	public static void main(String[] args) {
		int[] arr = {0,0,1,1,2,3,4,4,5};
		int length = r_Duplicates(arr);
		for(int i = 0;i<length;i++) {
			System.out.print(arr[i]+" ");
		}
	}
	
	public static int r_Duplicates(int[] arr) {
		int j = 0;
		for(int i = 1;i<arr.length;i++) {
			if(arr[j] != arr[i]) {
				arr[++j] = arr[i];
			}
		}
		return j+1;
	}
}
