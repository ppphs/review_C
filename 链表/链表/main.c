#include <stdio.h>
#include <stdlib.h>

typedef struct _node {
    int value;
    struct _node *next;
} Node;

typedef struct _list {
    Node *head;
    Node *tail;
} List;

int main(int argc, const char * argv[]) {
    void addList(int number, List *pList);
    List list;
    list.head = NULL;
    list.tail = NULL;
    int number;
    do {
        scanf("%d", &number);
        if (number != -1) {
            addList(number, &list);
        }
    } while (number != -1);
    // 遍历链表
    for (Node *p = list.head; p; p = p->next) {
        printf("value = %d\n", p->value);
    }
    printf("\n");
    return 0;
}

void addList(int number, List *pList) {
    // 动态创建出一个结构体
    Node *p = (Node*)malloc(sizeof(Node));
    p->value = number;
    p->next = NULL;
    // 找到最后一个节点
    if (pList->tail) {
        // 把最后一个节点后面再加一个
        (pList->tail)->next = p; // 这里要括起来
    } else { // 添加第一个节点
        pList->head = p;
    }
    pList->tail = p;
}
