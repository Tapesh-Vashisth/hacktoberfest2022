
public class BinarySearch {
    public static void main(String[] args) {
        int[] arr = {2, 4, 6, 9, 11, 12, 14, 20, 36, 48};
        int target = 36;
        int ans = binarySearch(arr, target);
        System.out.println(ans);
    }
    static int binarySearch(int[] arr, int target) {
        int start = 0;
        int end = arr.length - 1;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (target < arr[mid]) {
                end = mid - 1;
            } else if (target > arr[mid]) {
                start = mid + 1;
            } else {
                return mid;
            }
        }
        return -1;
    }
}

import java.util.*;
//program to find a target element in a sorted array in ascending order using binary search.
public class Binary_Search {
	
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the length of array");
		int n=sc.nextInt();
		System.out.println("Enter the elements");
		int[] a=new int[n];
		for(int i=0;i<n;i++) {
			a[i]=sc.nextInt();
		}
    //here l is the upper bound and f is the lower bound in which search will be done.
	       int l=n-1,f=0;boolean flag=false;
	       System.out.println("Enter the target element");
	       int target =sc.nextInt();
	       while(f<=l) {
          //finding the index of middle element.
	        int mid=(l+f)/2;
          //checking if the middle element is greater than target or not and if so making the upper bound to index previous to middle element. 
	        if(a[mid]>target){
	            l=mid-1;
          }
          //checking if the middle element is less than target or not and if so making the lower bound to index next to middle element. 
	        else if(a[mid]<target){
	        	f=mid+1;
          }
          //since middle element is not greater or less , then it will be equal , so making the boolean flag true and breaking the loop.
	        else{
	        	flag=true;
	        	break;
	        }
		}
    //finally printing whether the target is present in the array or not by checking the value of the boolean flag.
	    if(flag) 
	    	System.out.println("The target is their in the array");
	    else 
	    	System.out.println("The target is not their in the array");
	}
}

