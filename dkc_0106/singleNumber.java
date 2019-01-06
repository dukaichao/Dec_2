package dkc_0106;

public class singleNumber {
	
	public static void main(String[] args) {
		int arr[] = {1,2,3,4,5,6,1,23,4,6,2,3,23};
		System.out.println(s_Number(arr));
	}
	
	public static int s_Number(int arr[]) {
		outer:for(int i = 0;i<arr.length;i++) {
			for(int j = 0;j<arr.length;j++) {
				if(arr[i] == arr[j] && i != j) {
					continue outer;
				}
			}
			return arr[i];
		}
		
		return Integer.MAX_VALUE;
	}
}
