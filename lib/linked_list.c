#include <linked_list.h>
#include <stdlib.h>
#include <stdio.h>

Node *create_new_node(int value) {
	Node *new_node = malloc(sizeof(Node));
	new_node->value = value;
	new_node->next = NULL;
	return new_node;
}

Node *find_node(Node *head, int value) {
	while(head != NULL) {
		if(head->value == value) {
			return head;
		}
		head = head->next;
	}
	return NULL;
}

void insert_at_head(Node **head, Node *new_node) {
	new_node->next = *head;
	*head = new_node;
}

void insert_node(Node *insert_after_node, Node *new_node) {
	new_node->next = insert_after_node->next;
	insert_after_node->next = new_node;
}

void print_linked_list(Node *head) {
	do {
		printf("%d - ", head->value);
		head = head->next;
	} while(head != NULL);
	printf("\n");
}

