#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct linked_list {
    struct node *head;
    struct node *tail;
    int size;
};

void print_list(struct linked_list *l) {
    printf("Here is the data hold in the list:\n");
    struct node *temp;
    temp = l->head;
    while (temp->next != 0) {
        printf("%d ", temp->data);
        temp = (temp->next);
    }
    printf("%d \n", l->tail->data);
}

void insert_node(struct linked_list *list) {
    int command;
    if (list->size == 0) {
        printf("This is our first node. What data you want to have in it?\n");
        scanf("%d", &command);
        struct node *new;
        new = malloc(sizeof(struct node));
        new->data = command;
        new->next = 0;
        list->tail = new;
        list->head = new;
        list->size = 1;
    } else {
        printf("Enter 1 if you want to insert to the beginning or 2 for inserting to the end:)\n");
        int is_stupid;
        is_stupid = 1;
        scanf("%d", &command);
        while (is_stupid) {
            if (command == 1) {
                struct node *new;
                new = malloc(sizeof(struct node));
                is_stupid = 0;
                printf("Enter the data you want to have in the node\n");
                scanf("%d", &command);
                new->data = command;
                new->next = list->head;
                list->head = new;
                list->size++;
            } else if (command == 2) {
                struct node *new;
                new = malloc(sizeof(struct node));
                is_stupid = 0;
                printf("Enter the data you want to have in the node\n");
                scanf("%d", &command);
                new->data = command;
                new->next = 0;
                list->tail->next = new;
                list->tail = new;
                list->size++;
            } else {
                printf("Enter only 1 or 2, please\n");
                scanf("%d", &command);
            }
        }
    }
    printf("The node is successfully added:)\n");
}

void delete_node(struct linked_list *list) {
    printf("which node do you want to delete?\n");
    int command;
    int is_stupid;
    scanf("%d", &command);

    if (command < 1 || command > list->size) {
        is_stupid = 1;
    } else { is_stupid = 0; }

    while (is_stupid) {
        printf("Please, enter the number of the node between %d and %d\n", 1, list->size);
        scanf("%d", &command);
        if (command < 1 || command > list->size) {
            is_stupid = 1;
        } else { is_stupid = 0; }
    }

    struct node *temp;s
    temp = list->head;
    if (command == 1) {
        list->head = list->head->next;
    } else if (command == list->size) {
        while (temp->next->next != 0) {
            temp = temp->next;
        }
        temp->next = 0;
        list->tail = temp;
    } else {
        for (int i = 1; i < command -1; i++) {
            temp = temp->next;
        }
        temp->next = temp->next->next;
    }
    printf("The node was successfully deleted:)\n");
}

int main() {
    struct linked_list list;
    list.size = 0;
    insert_node(&list);
    insert_node(&list);
    insert_node(&list);
    print_list(&list);
    delete_node(&list);
    print_list(&list);
    return 0;
}