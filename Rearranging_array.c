//Rearrange the Array
#include <stdio.h>

int main() {
    int a[] = {5, 2, 8, 1, 4};
    int n = 5;
    int i, j, temp;

    for(i = 0; i < n-1; i++) {
        for(j = i+1; j < n; j++) {
            if(a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // Display sorted array
    printf("Sorted Array: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
