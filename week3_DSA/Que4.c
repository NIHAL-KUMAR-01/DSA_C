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
    int num;
    printf("Enter a Number to find factorial: ");
    scanf("%d",&num);
    int result=factorial(num);
    printf("The factorial of %d is %d",num,result);
    return 0;
}