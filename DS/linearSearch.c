#include <stdio.h>
int linearSearch(int[],int,int);

int main() {
	int n,key;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	int arr[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	printf("Enter the element to be found");
	scanf("%d", &key);
	int index = linearSearch(arr,key,n);
	if(index == -1){
		printf("Element not found: ");
	}else{
		printf("%d",index);
	}



	return 0;
}
int linearSearch(int arr[],int key,int n){
	for(int i = 0; i < n; i++){
		if(key == arr[i]){
			return (i + 1);
		}
	}
	return -1;
}
