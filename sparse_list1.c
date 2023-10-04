#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;          
    int row, col;      
    struct Node* next; 
};

struct Node* createNode(int data, int row, int col) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->row = row;
    newNode->col = col;
    newNode->next = NULL;
    return newNode;
}

struct Node* insertNode(struct Node* head, int data, int row, int col) {
    struct Node* newNode = createNode(data, row, col);
    if (head == NULL) {
        return newNode;
    } else {
        struct Node* current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
        return head;
    }
}

void displaySparseMatrix(struct Node* head) {
    if (head == NULL) {
        printf("Sparse matrix is empty.\n");
        return;
    }

    struct Node* current = head;
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

    struct Node* head = NULL;

    int numRows = 4;
    int numCols = 5;
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            if (sparseMatrix[i][j] != 0) {
                head = insertNode(head, sparseMatrix[i][j], i, j);
            }
        }
    }

    displaySparseMatrix(head);

    while (head != NULL) {
        struct Node* temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
