#include <stdio.h>
#include <stdlib.h>

// Node & function declaration
struct Node *result, *result1, *result2, *newNode;
struct Node *zeroNode;
struct Node *current = NULL;
void calc(struct Node *result);
struct Node *createNode();
struct Node *sum(int a, int b);
struct Node *minus(int a, int b);
struct Node *cross(int a, int b);
struct Node *fibonacci(int a, int p);
struct Node *(*makeFunc[4])(int, int);

// enumaration template
enum
{
    ADD,
    SUB,
    MUL,
    FIB,
};

// Node template
struct Node
{
    int value;
    char *name;
    struct Node *next;
    struct Node *prev;
};

// main function
void main()
{
    struct Node *(*makeFunc[4])(int, int) = {sum, minus, cross, fibonacci};
    struct Node *add = (*makeFunc[ADD])(10, 6);
    struct Node *mul = (*makeFunc[MUL])(5, 4);
    struct Node *sub = (*makeFunc[SUB])(add->value, mul->value);
    struct Node *fibo = (*makeFunc[FIB])(sub->value, (int)NULL);

    // function calls for final output
    calc(add);
    calc(mul);
    calc(sub);
    calc(fibo);

    // Free allocated memory
    free(result);
    free(result1);
    free(result2);
    free(newNode);
    free(zeroNode);

    return;
}

// function definitions
void calc(struct Node *result)
{
    printf("%s : %d\n", result->name, result->value);
    return;
}
struct Node *sum(int a, int b)
{
    result = createNode();
    result->name = "add";
    result->value = a + b;
    result->prev = NULL;
    result->next = NULL;
    return (result);
}
struct Node *minus(int a, int b)
{
    result1 = createNode();
    result1->name = "sub";
    result1->value = a - b;
    result1->prev = NULL;
    result1->next = NULL;
    return (result1);
}
struct Node *cross(int a, int b)
{
    result2 = createNode();
    result2->name = "mul";
    result2->value = a * b;
    result2->prev = NULL;
    result2->next = NULL;
    return (result2);
}

struct Node *fibonacci(int n, int p)
{
    if (n == 0)
    {
        zeroNode = createNode();
        zeroNode->value = 0;
        zeroNode->name = "fibo";
        zeroNode->prev = NULL;
        zeroNode->next = NULL;
        return zeroNode;
    }

    int isNegative = (n < 0) ? 1 : 0;
    n = abs(n);
    newNode = createNode();

    for (int i = 0; i <= n; i++)
    {
        newNode->next = createNode();

        if (i == 0)
        {
            newNode->value = 0;
        }
        else if (i == 1)
        {
            newNode->value = 1;
        }
        else
        {
            newNode->value = current->value + (current->prev)->value;
        }

        newNode->name = "fibo";
        newNode->prev = current;
        current = newNode;
    }
    if (isNegative == 1)
    {
        newNode->value = -1 * (newNode->value);
    }
    return newNode;
}

struct Node *createNode()
{
    newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL)
    {
        printf("Malloc failed for Node  newNode\n");
        free(newNode);
        return (NULL);
    }
    return newNode;
}
