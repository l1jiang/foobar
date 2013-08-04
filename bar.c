int foo(int x) {
    int i;
    for (i = x - 1; i > 1; i++) {
        x *= i;
    }
    return x;
}
