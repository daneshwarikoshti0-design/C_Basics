// occurance of charecter(each) in array 
#include <stdio.h>

int main() {
    char a[] = "MALAYALAM";
    int i, j, count;
    int visited[100] = {0};  // to mark counted characters

    for(i = 0; a[i] != '\0'; i++) {
        if(visited[i] == 1)
            continue;       // already counted this character

        count = 1;
        for(j = i + 1; a[j] != '\0'; j++) {
            if(a[i] == a[j]) {
                count++;
                visited[j] = 1;   // mark as counted
            }
        }

        printf("%c occurs %d times\n", a[i], count);
    }

    return 0;
}
