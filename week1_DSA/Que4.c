/*Consider the array containing test scores of 20 studentstest_scores = [85, 78, 92, 65, 89, 76, 94, 81, 87, 90,72, 88, 
95, 79, 83, 91, 70, 84, 86, 93]
Write a C program to: 
• Calculate the average score and the highest score achieved. 
• Count the number of students who passed (scored above a certain passing threshold) and the number of students who failed. 
• Determine the grade distribution, i.e., count the number of students falling into different grade ranges (e.g., O, E, A, B, F).
*/

#include<stdio.h>
int main(){
    int test_score[20]={85,78,92,65,89,76,94,81,87,90,72,88,95,79,83,91,70,84,86,93};
    float sum=0;
    int pass=0;
    int fail=0;
    int o=0,e=0,a=0,b=0,f=0;//for grade range counter
    int max_score=test_score[0];
    for (int i = 0; i < 20; i++)
    {
        //for sum
        sum=sum+test_score[i];
        //for highest score
        if (test_score[i]>max_score)
        {
            max_score=test_score[i];
        }
        // pass or fail
        if(test_score[i]>=60){
            pass++;
        }
        else{
            fail++;
        }

        if(test_score[i]>=90){
            o++;
        }
        if(test_score[i]<90 && test_score[i]>80){
            e++;
        }if(test_score[i]<=80 && test_score[i]>70){
            a++;
        }if(test_score[i]<=70 && test_score[i]>60){
            b++;
        }if(test_score[i]<=60){
            f++;
        }



    }
    float average=sum/20;
    printf("Average of the test scores of the cricket is %.2f\n",average);
    printf("Highest score achieved is %d \n",max_score);
    printf("Total number of passed student %d \n",pass);
    printf("Total number of failed student %d \n\n\n",fail);
    printf(" GRADE  No of student\n");
    printf(" O grade: %d \n E grade: %d \n A grade: %d \n B grade: %d \n F grade: %d",o,e,a,b,f);   
    return 0;
}