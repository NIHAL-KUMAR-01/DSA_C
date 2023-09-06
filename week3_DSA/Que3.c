/*Write a C program to find the reverse of a string using stack*/
#include <stdio.h>

int main() {
    char data[] = "DATA_STRUCTURE";
    int len = sizeof(data) / sizeof(char) - 1;
    printf("Original String: %s\n", data);
    
    for (int i = 0; i < len / 2; i++) {
        char temp = data[i];
        data[i] = data[len - i - 1];
        data[len - i - 1] = temp;
    }
    
    printf("Reversed string: %s\n", data);  
    
    return 0;
}
