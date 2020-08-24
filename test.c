#include <stdio.h>
#include <stdlib.h>
void getNum(int *num);
void getNum1(int num);
typedef struct student
{
    int score;
    struct student *next;
} LinkedList;
LinkedList *init(int n);
void show(LinkedList *head);
void modify(LinkedList *head, int n);
void ptrmod(int *ptr);
int main()
{
    typedef enum
    {
        mon = 1,
        tue,
        wed,
        thu,
        fri
    } day;
    day day1 = mon;
    printf("%d", day1);
    puts("----------");
    int *ptr = (int *)malloc(sizeof(int));
    *ptr = 10;
    printf("%p", ptr);
    ptrmod(ptr);
    printf("%p", ptr);
}
void getNum(int *num)
{
    *num = 5;
}
void getNum1(int num)
{
    num = 5;
}
LinkedList *init(int n)
{
    LinkedList *head, *node, *tail;
    head = (LinkedList *)malloc(sizeof(LinkedList));
    tail = head;
    for (int i = 0; i < n; i++)
    {
        node = (LinkedList *)malloc(sizeof(LinkedList));
        puts("input your score\n");
        scanf("%d", &node->score);
        tail->next = node;
        tail = node;
    }
    tail->next = NULL;
    return head;
}
void show(LinkedList *head)
{
    while (head->next != NULL)
    {
        head = head->next;
        printf("%d", head->score);
    }
}
void modify(LinkedList *head, int n)
{
    LinkedList *temp = head;
    int i = 0;
    while (i < n)
    {
        temp = temp->next;
        i++;
    }
    puts("input your modified value");
    scanf("%d", &temp->score);
}
void ptrmod(int *ptr)
{
    ptr = 0x7f98f3c006349;
    printf("%p", ptr);
}