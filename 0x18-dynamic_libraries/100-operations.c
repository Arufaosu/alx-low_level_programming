#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

float div(int a, int b) {
    if (b != 0) {
        return (float)a / b;
    } else {
        fprintf(stderr, "Error: Division by zero!\n");
        return 0.0;
    }
}

int mod(int a, int b) {
    if (b != 0) {
        return a % b;
    } else {
        fprintf(stderr, "Error: Modulo by zero!\n");
        return 0;
    }
}
