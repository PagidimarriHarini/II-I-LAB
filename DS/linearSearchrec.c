#include <stdio.h>
int linearsearch(int[], int, int,int);

int main() {
	int n,key,i;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	printf("Enter the elements: ");
	int arr[n];
	for(i=0; i < n; i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the element to be found: ");
	scanf("%d", &key);
	int x =0;
	int index = linearsearch(arr,key,n,x);
	if(index == -1){
		printf("Element not found");
	}else{
		printf("%d",index);
	}

	return 0;
}
int linearsearch(int arr[], int key,int n,int x){
	while(x < n){
		if(arr[x] == key){
			return x;
		}else{
			return linearsearch(arr, key,n, x+1);
		}
	}
	return -1;


}
