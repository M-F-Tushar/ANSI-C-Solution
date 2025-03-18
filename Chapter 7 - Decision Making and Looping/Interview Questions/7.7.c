
7.7 Can you print 1 to 100 without loops?
Yes, using recursion:


void printNum(int n) {
    if (n > 100) return;
    printf("%d ", n);
    printNum(n + 1);
}

int main() {
    printNum(1);
    return 0;
}
