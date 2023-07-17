// Q1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <stdlib.h>

typedef enum {
    ADD,
    SUB,
    MUL,
    DIV,
    CONST,
    FIBO
} TypeTag;

typedef struct Node {
    TypeTag type;
    union {
        int constant;
        struct {
            struct Node* arg1;
            struct Node* arg2;
        } binary_op;
    };
} Node;

Node* makeConst(int constant) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->type = CONST;
    node->constant = constant;
    return node;
}

Node* makeBinaryOp(TypeTag type, Node* arg1, Node* arg2) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->type = type;
    node->binary_op.arg1 = arg1;
    node->binary_op.arg2 = arg2;
    return node;
}

int calc(Node* node) {
    if (node->type == CONST) {
        return node->constant;
    } else if (node->type == FIBO) {
        int n = calc(node->binary_op.arg1);
        if (n <= 1) {
            return n;
        }
        int a = 0, b = 1, fibo = 0;
        for (int i = 2; i <= n; i++) {
            fibo = a + b;
            a = b;
            b = fibo;
        }
        return fibo;
    } else {
        int arg1 = calc(node->binary_op.arg1);
        int arg2 = calc(node->binary_op.arg2);
        switch (node->type) {
            case ADD:
                return arg1 + arg2;
            case SUB:
                return arg2 - arg1;
            case MUL:
                return arg1 * arg2;
            case DIV:
                return arg1 / arg2;
            default:
                return 0;  // or handle error
        }
    }
}

int main() {
    Node* add = makeBinaryOp(ADD, makeConst(10), makeConst(6));
    Node* mul = makeBinaryOp(MUL, makeConst(5), makeConst(4));
    Node* sub = makeBinaryOp(SUB, mul, add);
    Node* fibo = makeBinaryOp(FIBO, makeConst(3), NULL);

    int result_add = calc(add);
    int result_mul = calc(mul);
    int result_sub = calc(sub);
    int result_fibo = calc(fibo);

    printf("add: %d\n", result_add);
    printf("mul: %d\n", result_mul);
    printf("sub: %d\n", result_sub);
    printf("fibo: %d\n", result_fibo);

    free(add);
    free(mul);
    free(sub);
    free(fibo);

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
