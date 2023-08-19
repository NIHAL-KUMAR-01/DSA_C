/*Consider the array containing temperature data for a week (Sunday to Saturday)temperature_data = [25, 28, 27, 30, 
31, 29, 26]
Write a program to perform the following tasks: 
    • Find the average temperature for the week. 
    • Identify the hottest day (highest temperature) and the coldest day (lowest temperature) of the week. 
    • Calculate the temperature range (difference between the hottest and coldest d*/

#include<stdio.h>
int main(){
    int temperature_data[]={25,28,27,30,31,29,26};
    int sum=0;
    int n=sizeof(temperature_data)/sizeof(int); //size of temperature_data array
    int mintemp=temperature_data[0];
    int maxtemp=temperature_data[0];
    for (int i = 0; i < n; i++)
    {
        sum=sum+temperature_data[i];
        if (temperature_data[i]>maxtemp)
        {
            maxtemp=temperature_data[i];//the present array element is considered as the maximum temperature
        }   
        if (temperature_data[i]<mintemp)
        {
            mintemp=temperature_data[i];
        }
    }
    float average=sum/n;
    float temp_range=(maxtemp+mintemp)/2;
    printf("The average temperature for this week is %.2f\n",average);
    printf("The highest temperature in this week is %d\n",maxtemp);
    printf("The lowest temperature in this week is %d\n",mintemp);
    printf("The  temperature range in this week is %.2f\n",temp_range);  


    return 0;
}