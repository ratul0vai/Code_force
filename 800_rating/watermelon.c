#include <stdio.h>

int main() {
    int w = 0;
    scanf("%d", &w);

    if (w > 2) { 
        
        int remainder = w - 2 * (w / 2);
        if (remainder == 0) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    } else {
        printf("No\n");
    }

    return 0;
}
