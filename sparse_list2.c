#include <stdio.h>
#include <stdlib.h>

// Define a structure for a node in the linked list
struct NonZeroElement {
    int data;           // Value of the non-zero element
    int row, col;       // Row and column indices of the element
    struct NonZeroElement* next;  // Pointer to the next non-zero element
};

// Function to create a new node for a non-zero element
struct NonZeroElement* createNonZeroElement(int data, int row, int col) {
    struct NonZeroElement* newNode = (struct NonZeroElement*)malloc(sizeof(struct NonZeroElement));
    newNode->data = data;
    newNode->row = row;
    newNode->col = col;
    newNode->next = NULL;
    return newNode;
}

// Function to add a new non-zero element to the linked list
struct NonZeroElement* insertNonZeroElement(struct NonZeroElement* head, int data, int row, int col) {
    struct NonZeroElement* newNode = createNonZeroElement(data, row, col);
    if (head == NULL) {
        return newNode;
    } else {
        struct NonZeroElement* current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
        return head;
    }
}

// Function to display the sparse matrix represented by the linked list of non-zero elements
void displaySparseMatrix(struct NonZeroElement* head) {
    if (head == NULL) {
        printf("Sparse matrix is empty.\n");
        return;
    }

    struct NonZeroElement* current = head;
    while (current != NULL) {
        printf("(%d, %d, %d)\t", current->row, current->col, current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    int sparseMatrix[4][5] = {
        {0, 0, 3, 0, 4},
        {0, 0, 5, 7, 0},
        {0, 0, 0, 0, 0},
        {0, 2, 6, 0, 0}
    };

    struct NonZeroElement* head = NULL;

    int numRows = 4;
    int numCols = 5;
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            if (sparseMatrix[i][j] != 0) {
                head = insertNonZeroElement(head, sparseMatrix[i][j], i, j);
            }
        }
    }

    displaySparseMatrix(head);

    while (head != NULL) {
        struct NonZeroElement* temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}