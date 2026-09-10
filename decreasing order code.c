
#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter 3 numbers: ");
    scanf("%d%d%d", &a,&b,&c);
    if (a>b && a>c) {
        if (b>c)
            printf("Decreasing order: %d > %d > %d\n", a,b,c);
        else 
            printf("Decreasing order: %d > %d > %d\n", a,c,b);
}
    else if (b>c && b>a) {
        if (c>a)
            printf("Decreasing order: %d > %d > %d\n", b,c,a);
        else
            printf("Decreasing order: %d > %d > %d\n", b,a,c);
}
    else {
        if (b>a)
            printf("Decreasing order: %d > %d > %d\n", c,b,a);
        else 
            printf("Decreasing order: %d > %d > %d\n", c,a,b);
    }        

return 0;
}
