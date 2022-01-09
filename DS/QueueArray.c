#include <stdio.h>
#define MAX_SIZE 10
int Queue[MAX_SIZE];
int rear = -1, front = -1;
int isFull(){
	return rear >= MAX_SIZE;
}
int isEmpty(){
	return front == -1 || front > rear;
}
void enQueue(int item){
	if(isFull()){
		printf("overflow");
	}else{
		if(front == -1 && rear == -1){
			front = 0;
			rear = 0;
		}else{
			rear = rear + 1;
		}
		Queue[rear] = item;
	}
	
}
void deQueue(){
	if(isEmpty()){
		printf("underflow");
	}else{
		int x = Queue[front];
		if(front == rear){
            		front = rear = -1;
		}else{
			front = front + 1;
		}
		printf("%d\n", x);
    }
}
void display(){
	for(int i = 0; i < MAX_SIZE; i++){
		printf("%d ", Queue[i]);
	}
	printf("\n");
}
int main(){
	for( int i = 0; i < MAX_SIZE; i++){
		enQueue(i);
	}
	display();
	deQueue();
	deQueue();
	return 0;
}
