/*Write a C program to find the reverse of a string using stack*/
#include <stdio.h>

int main() {
    char data[] = "12345";
    int len = sizeof(data) / sizeof(char) - 1;
    
    for (int i = 0; i < len / 2; i++) {
        char temp = data[i];
        data[i] = data[len - i - 1];
        data[len - i - 1] = temp;
    }
    
    printf("Reversed string: %s\n", data);  
    
    return 0;
}
