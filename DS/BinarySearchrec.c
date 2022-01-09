#include<stdio.h>
int binarysearch(int[], int,int);
int main(){
       int n,key,i;
       printf("enter the number of elements:");
       scanf("%d",&n);
       int arr[n];
       printf("enter the elements;");
       for(i=0; i<n; i++){
              scanf("%d",&arr[i]);
       }
       printf("enter the element to be found:");
       scanf("%d", &key);
       int index = binarysearch(arr, key, n);
       if(index == -1){
               printf("element not found");
       }else{
               printf("%d", index);
       }
       
       return 0;
}
int binarysearch(int arr[],int key,int n){
        int start = 0;
        int end = n-1;
        while(start <= end){
                 int mid = (start + end)/2;
                 if(arr[mid] == key){
                          return mid;
                 }
                 else if(arr[mid] < key){
                         start = mid + 1;
                 }else{
                         end = mid -1;
                 }
       }
                 return -1;
}
