#include <stdio.h>
int main() {
    char str[100];
    int count = 0;
    printf("Nh?p chu?i: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            count++;
        }
    }
    printf("S? kı t? là ch? cái trong chu?i: %d\n", count);

    return 0;
}
