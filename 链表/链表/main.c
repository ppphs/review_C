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
    void print(List *pList);
    void delete(int number, List *list);
    void clearAll(List *list);
    List list;
    list.head = NULL;
    list.tail = NULL;
    int number;
    int deleteNum;
    printf("输入值然后回车继续下一个值直到输入-1结束~\n");
    do {
        scanf("%d", &number);
        if (number != -1) {
            addList(number, &list);
        }
    } while (number != -1);
    print(&list);
    printf("输入你要删除的数字吧~\n");
    scanf("%d", &deleteNum);
    delete(deleteNum, &list);
    print(&list);
    printf("正在清除所有的值~\n");
    clearAll(&list);
    printf("清除完毕~\n");
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

void print(List *pList) {
    // 遍历链表
    for (Node *p = pList->head; p; p = p->next) {
        printf("value = %d\n", p->value);
    }
    printf("\n");
}

void delete(int number, List *list) {
    // 搜索并删除
    Node *head = list->head;
    Node *pre = head;
    int isFinded = 0;
    if (!pre) {
        printf("结构体必须要有值哟~");
        return;
    }
    for (Node *p = head; p; p = p->next) {
        if (p->value == number) {
            printf("找到啦！\n马上进行删除！！\n");
            if (pre == p) { // 删除的值是第一个值
                list->head = p->next;
            } else {
                pre->next = p->next;
            }
            free(p);
            isFinded = 1;
            break;
        }
        pre = p;
    }
    if (!isFinded) {
        printf("没找的呢(=@__@=)~\n");
    }
}

void clearAll(List *list) {
    // 删除所有值
    Node *head = list->head;
    Node *next = head;
    if (!head) {
        printf("结构体本来就为空哟~");
        return;
    }
    for (Node *p = head; next;) {
        next = p->next;
        free(p);
        p = next;
    }
}
