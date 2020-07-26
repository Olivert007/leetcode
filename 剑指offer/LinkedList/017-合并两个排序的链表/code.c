#include <stdio.h>

struct node
{
    int data;
    struct node * next;
};

int main()
{
    int m, n, i;

    struct node * head0, *head1;
    struct node *head, *cur, *tmp;

    while(scanf("%d %d", &n, &m) != EOF)
    {
        if(n <= 0)
        {
            head0 = NULL;
        }
        else
        {
            head0 = malloc(sizeof(struct node));
            scanf("%d", &(head0->data));
            cur = head0;

            for(i = 0 ; i < n-1; i++)
            {
                cur-> next = malloc(sizeof(struct node));
                cur = cur->next;
                scanf("%d", &(cur->data));
            }
            cur->next = NULL;

        }
        if(m <= 0)
        {
            head1 = NULL;
        }
        else
        {
            head1 = malloc(sizeof(struct node));
            scanf("%d", &(head1->data));
            cur = head1;
            for(i = 0; i < m-1; i++)
            {
                cur ->next = malloc(sizeof(struct node));
                cur = cur->next;
                scanf("%d", &(cur->data));
            }
            cur->next = NULL;

            while(head1&&head0)
            {
                if(head0->data < head1->data)
                {
                    cur->next = head0;
                    head0 = head0->next;
                }
                else
                {
                    cur->next = head1;
                    head1 = head1->next;
                }
                cur = cur->next;
            }
            if(!head0)
            {
                cur->next = head1;
            }
            if(!head1)
            {
                cur->next = head0;
            }
            cur = head->next;

            if(cur)
            {
                while(cur->next)
                {
                    printf("%d", cur->data);
                    cur = cur->next;

                }
                printf("%d", cur->data);
            }
            else{
                printf("NULL\n");
            }
            while(head)
            {
                cur = head;
                head = head->next;
                free(cur);
            }
        }
    }
    return 0;
}