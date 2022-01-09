#include <stdio.h>
#include <stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
void insert(struct Node **, int, int);
void delete(struct Node **, int);
void display(struct Node *);
int main(){
	struct Node *head = NULL;
	int ch, want_continue, pos, data, key;
	do{
		printf("Enter your choice: 1.insert, 2.delete, 3. traversal ");
		scanf("%d", &ch);
		switch(ch){
			case 1: 
				printf("Enter the data:");
				scanf("%d", &data);
				printf("Enter the position:");
				scanf("%d", &pos);
				insert(&head, data, pos);
				break;
			case 2:
				printf("Enter the position:");
				scanf("%d", &pos);
				delete(&head, pos);
				break;
			case 3:
				display(head);
				break;
			default:
				printf("Enter the correct choice");
				break;
			}
	printf("want to continue? Enter 1 ");
	scanf("%d", &want_continue);
	}
	while(want_continue == 1);

	return 0;
}

void insert(struct Node **head, int data, int pos){
	struct Node *p, *q;
	struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
	new_node -> data = data;
	p = *head;
	int k = 1;
	if(pos == 1){
		new_node -> next = *head;
		*head = new_node;
	}else{
		while((p!= NULL) && (k < pos)){
			q = p;
			p = p -> next;
			k++;
		}
		q ->next = new_node;
		new_node -> next = p;

	}
}
void delete(struct Node **head, int pos){
	struct Node *p, *q;
	int k = 1;
	p = *head;
	if(pos == 1){
		*head = (*head) -> next;
		free(p);
	}else{
		while((p != NULL) && (k < pos)){
			q = p;
			p = p -> next;
			k++;
		}
		if(p == NULL){
			printf("element not found");
		}else{
			q -> next = p -> next;
			free(p);
		}
	}
}
void display(struct Node *head){
	while(head != NULL){
		printf("%d \n", head->data);
		head = head -> next;
	}
}

