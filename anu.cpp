#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};

void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
void insertAtBeginning(struct Node** headRef, int newData) {
    // Allocate memory for new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    // Assign data to new node
    newNode->data = newData;
    // Make next of new node as head
    newNode->next = *headRef;
    // Move the head to point to the new node
    *headRef = newNode;
}

int main() {
    // Initialize an empty linked list
    struct Node* head = NULL;

    // Insert some elements into the linked list
    insertAtBeginning(&head, 5);
    insertAtBeginning(&head, 10);
    insertAtBeginning(&head, 15);

    // Print the linked list
    printf("Linked List: ");
    printList(head);

    return 0;
}
