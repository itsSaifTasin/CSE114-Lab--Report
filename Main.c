#include <stdio.h>

int main() {
    int n = 5;

   ** Experiment 1- Right-Angled Triangle
    printf("Experiment 1:\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    ** Experiment 2- Inverted Right-Angled Triangle
    printf("Experiment 2:\n");
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    ** Experiment 3- Pyramid
    printf("Experiment 3:\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    ** Experiment 4- Inverted Pyramid
    printf("Experiment 4:\n");
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    ** Experiment 5- Diamond Pattern
    printf("Experiment 5:\n");
    int d = 4;
    for (int i = 1; i <= d; i++) {
        for (int j = 1; j <= d - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = d - 1; i >= 1; i--) {
        for (int j = 1; j <= d - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    **Experiment 6- Pascal's Triangle
    printf("Experiment 6:\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf("  ");
        }
        int val = 1;
        for (int k = 1; k <= i; k++) {
            printf("%4d", val);
            Val= val* (i - k) / k;
        }
        printf("\n");
    }
    printf("\n");

    ** Experiment 7- Floyd's Triangle
    printf("Experiment 7:\n");
    int num = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
    printf("\n");

    **Experiment 8- Number Pyramid (1 to j)
    printf("Experiment 8:\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    printf("\n");

    ** Experiment 9- Number Triangle (Row Repeated)
    printf("Experiment 9:\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
    printf("\n");

    ** Experiment 10- Hollow Square
    printf("Experiment 10:\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n");

    ** Experiment 11- Butterfly Pattern
    printf("Experiment 11:\n");
    int b = 4;
    for (int i = 1; i <= b; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        for (int j = 1; j <= 2 * (b - i); j++) {
            printf("  ");
        }
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = b; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        for (int j = 1; j <= 2 * (b - i); j++) {
            printf("  ");
        }
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    ** Experiment 12- Zigzag (W) Pattern
    printf("Experiment 12:\n");
    for (int r = 1; r <= 3; r++) {
        for (int c = 1; c <= 13; c++) {
            if (((r + c) % 4 == 0) || (r == 2 && c % 4 == 0)) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
