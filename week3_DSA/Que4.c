/*Write C program to find the factorial of number using recursion*/

#include<stdio.h>
int factorial(int num){
    if (num==0)
    {
        return 1;
    }
    else{
        return num*factorial(num-1);
    }
    
}
int main(){
    int result=factorial(5);
    printf("%d",result);
    return 0;
}