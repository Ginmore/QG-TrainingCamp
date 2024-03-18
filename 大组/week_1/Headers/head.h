# include <stdio.h>
# include <stdlib.h>
# include <string.h>

typedef struct Node {
	int data;
	struct Node *next;
}Node;

Node *creat(void);
Node *input(Node *head);
Node *insert(Node *head);
Node *del(Node *head);
void print(Node* head);
void search(Node *head);


