#include <stdio.h>


int main() {
    char arr[] = "something weird";
    int some[] = {1, 5, 8};
    printf("\n%d", some[6]);
    printf("Hi\n");
    printf("%s", arr);

    for (int i = 0; i < 3; i++) {
        printf("\n%p", &some[i]);
    }
    return 0;
}
