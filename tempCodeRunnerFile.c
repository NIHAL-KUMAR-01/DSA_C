#include<stdio.h>

int main()

{

    int n1 = 0, n2 = 0;

    int *const ptr = &n1;

    *ptr = 100;//valid

    // ptr = &n2;//Invalid

    printf(“%d\n”, *ptr);
return 0;
}