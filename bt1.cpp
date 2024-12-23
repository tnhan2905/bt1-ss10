#include <stdio.h>

int main() {
    int array[] = {5, 3, 8, 1, 2, 7, 4, 9, 6};
    int size = sizeof(array) / sizeof(array[0]);
    int element, found = -1;

    printf("Mang: ");
    for (int i = 0; i < size; i++) printf("%d ", array[i]);
    printf("\nNhap phan tu can tim: ");
    scanf("%d", &element);

    for (int i = 0; i < size; i++) {
        if (array[i] == element) {
            found = i;
            break;
        }
}
    if (found != -1)
        printf("Phan tu %d ton tai tai vi tri: %d\n", element, found);
    else
        printf("Phan tu %d khong ton tai trong m?ng.\n", element);

    return 0;
}
