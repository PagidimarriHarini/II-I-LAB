#include <stdio.h>
#define MAX_SIZE 10
int stack[MAX_SIZE];
int top = -1;
int isFull(){
	return top == MAX_SIZE - 1;

}
int isEmpty(){
	return top == -1;
}

void push(int item){
	if(isFull()){
		printf("overflow of stack\n");
	}else{
		top++;
		stack[top] = item;
	}
}
int pop(){
	if(isEmpty()){
		printf("underflow\n");
	}else{
		int x = stack[top];
		top--;
		printf("%d\n", x);
		
	}
	return 0;
}
int display(){
	for(int i = 0; i < MAX_SIZE; i++){
		printf("%d ", stack[i]);
	}
	printf("\n");
	return 0;
}


int main(){
	for(int i = 0; i < 10; i++){
		push(i);
	}
	push(3);
	display();
	pop();
	pop();
	pop();
	return 0;
}
