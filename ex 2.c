#include <stdio.h>

int main() {
    int arr[10]; 
    int i;
    printf("Nhap 10 so:\n");
    for (i = 0; i < 10; i++) {
        printf("So thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\n");
    printf("Cac so theo theo tu dao nguoc:\n");
    for (i = 9; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
   return 0;
}
