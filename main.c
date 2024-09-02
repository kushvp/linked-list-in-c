#include <linked_list.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
	Node *head = NULL, *temp;
	
	for(int i = 0; i < 15; i++) {
		temp = create_new_node(i);
		insert_at_head(&head, temp);
	}
	
	print_linked_list(head);
	Node *found = find_node(head, 13);
	printf("The value to founded node is %d\n", found->value);

	insert_node(found, create_new_node(75));
	print_linked_list(head);
  temp = head;
  while(temp != NULL) {
    Node *next = temp->next;
    free(temp);
    temp = next;
  }
	return 0;
}

