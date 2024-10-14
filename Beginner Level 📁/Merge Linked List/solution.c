#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode* next;
};

struct ListNode* createNode(int data) {
    struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

struct ListNode* mergeLists(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode dummy;
    struct ListNode* tail = &dummy;
    dummy.next = NULL;

    while (l1 != NULL && l2 != NULL) {
        if (l1->data < l2->data) {
            tail->next = l1;
            l1 = l1->next;
        } else {
            tail->next = l2;
            l2 = l2->next;
        }
        tail = tail->next;
    }

    if (l1 != NULL) tail->next = l1;
    if (l2 != NULL) tail->next = l2;

    return dummy.next;
}

void printList(struct ListNode* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct ListNode* l1 = createNode(1);
    l1->next = createNode(3);
    l1->next->next = createNode(5);

    struct ListNode* l2 = createNode(2);
    l2->next = createNode(4);
    l2->next->next = createNode(6);

    printf("List 1: ");
    printList(l1);

    printf("List 2: ");
    printList(l2);

    struct ListNode* mergedList = mergeLists(l1, l2);
    printf("Merged List: ");
    printList(mergedList);

    return 0;
}
