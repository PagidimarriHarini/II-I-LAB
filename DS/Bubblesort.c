#include<stdio.h>

void bubblesort(int [], int );
int main()
{
	int i, n,a[10] ;
	printf("enter the n");
	scanf("%d",&n);
	printf("enter the array of elements");

	for(i =0;i<n;i++){
		scanf("%d",&a[i]);
	}
	bubblesort(a , n);
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
	return 0;
}
void  bubblesort(int a[], int n){
	int i,j,t;
	for(i=0;i<10;i++ ) {
		for(j=0;j<10;j++){
			if(a[i] <a[j]){
			t = a[i];
			a[i] = a[j];
			a[j] = t;
		}
	}
    }
}
