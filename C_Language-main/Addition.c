#include <stdio.h>
int add(int a, int b) {
    return a + b;
}

int main() {
    int num1=4,num2=5;
    int sum = add(num1,num2);
    printf("Sum = %d", sum);
    return 0;
}
