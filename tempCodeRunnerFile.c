#include <stdio.h>
#include <stdlib.h>

// Forward declaration of struct node
struct node;

// Define a structure for a doubly linked list node
struct node {
    int data;
    struct node *next;
    struct node *prev;
};

/* Insert a new node at the beginning of the doubly linked list */
struct node *insert_at_beginning(struct node *head, int data) {
    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = head;
    new_node->prev = NULL;

    if (head != NULL) {
        head->prev = new_node;
    }

    return new_node;
}

/* Insert a new node after a given node in the doubly linked list */
struct node *insert_after_node(struct node *prev_node, int data) {
    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = prev_node->next;
    new_node->prev = prev_node;

    if (prev_node->next != NULL) {
        prev_node->next->prev = new_node;
    }

    prev_node->next = new_node;

    return new_node;
}

/* Insert a new node at the end of the doubly linked list */
struct node *insert_at_end(struct node *head, int data) {
    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;
    new_node->prev = NULL;

    if (head == NULL) {
        head = new_node;
    } else {
        struct node *temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = new_node;
        new_node->prev = temp;
    }

    return new_node;
}

/* Display the doubly linked list */
void displayList(struct node *head) {
    printf("Doubly Linked List: ");
    struct node *current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    struct node *head = NULL;

    // Insert nodes at the beginning, after a node, and at the end
    head = insert_at_beginning(head, 10);
    head = insert_after_node(head, 20);
    head = insert_after_node(head->next, 30);
    head = insert_at_end(head, 40);

    // Display the doubly linked list
    displayList(head);

    return 0;
}
