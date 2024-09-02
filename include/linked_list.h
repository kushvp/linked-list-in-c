
typedef struct Node Node;

struct Node {
	int value;
	struct Node *next;
};

/* Function declaration */
Node *create_new_node(int value);
Node *find_node(Node *head, int value);

void insert_at_head(Node **head, Node *new_node);
void insert_node(Node *insert_after_node, Node *new_node);
void print_linked_list(Node *head);

