/* 2_ioDemo.c: Examples for C-Standard I/O Functions: getchar(), putchar(), printf(), scanf() */

# include <stdio.h>

main() {
    char f,m,l;
    int age;
    scanf("%c %c %c %d", &f, &m, &l, &age);
    printf("My initials are %c%c%c and my age is %d.\n", f,m,l,32);
    return 0;
}
