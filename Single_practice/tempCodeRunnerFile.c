void linked_display(struct node* current) {
    while (current != NULL) {
        printf("%d || Address: %p || Next: %p\n", current->data, current, current->next);
        current = current->next;
    }
}