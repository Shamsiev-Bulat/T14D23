#include "state_sort.h"

#include <stdio.h>

void read(struct date line);
void sort(struct date line, int length);

int main() {
    int a = 0, c = 0;
    struct date line;
    while (a != -1) {
        int b = scanf("%d.%d", &a, &c);
        if (b == 1) {
            if (a == 0) {
                read(line);
            }
        } else if (a == 0 || a > 1 || a < -1) {
            printf("n/a\n");
        } else {
            printf("n/a\n");
            rewind(stdin);
        }
    }
    return 0;
}

void read(struct date line) {
    char a[] = "../datasets/door_state_1";
    FILE *file;
    file = fopen(a, "rb");
    if (file == NULL)
        printf("n/a\n");
    else {
        while (fread(&line, sizeof(struct date), 1, file)) {
            printf("%d %d %d %d %d %d %d %d\n", line.year, line.month, line.day, line.hour, line.minute,
                   line.second, line.status, line.code);
        }
    }
    fclose(file);
}