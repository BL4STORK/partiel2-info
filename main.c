#include <stdio.h>


int main() {
    int var1 = 1;
    int var2 = 2;
    int *Var1 = &var1;
    int *Var2 = &var2;

    var1 = *Var2;

    printf("%d\n", var1);

    return 0;
}
