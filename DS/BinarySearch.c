#include <stdio.h>
int binarysearch(int[], int , int,int, int);
int main() {
	int n,key,i;
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	int arr[n];
	printf("Enter the elements: ");
	for(i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	printf("Enter the element to be found: ");
	scanf("%d", &key);
	int start = 0;
	int end = n -1;
	int index = binarysearch(arr, key, n,start,end);
	if(index == -1){
		printf("Element not found");
	}else{
		printf("%d", index);
	}

	return 0;
}
int binarysearch(int arr[],int  key, int n, int start, int end){
	int mid;
	if(start <= end){
		mid = (start + end)/2;
		if(arr[mid] == key){
			return mid;
		}
		else if(arr[mid] < key){
			return binarysearch(arr, key, n,mid + 1, end);
		}else{
			return binarysearch(arr, key, n, start, mid -1);
		}
	}
		return -1;
}
