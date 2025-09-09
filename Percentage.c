/*
Q:08
ASK THE USER FOR THEIR MARKS IN THREE SUBJECTS AND CALCULATE THE PERCENTAGE.
*/

#include <stdio.h>

int main(void)
{
    float subj1, subj2, subj3;
    float obtainedmarks;
    float percentage;
    
    printf("Enter the marks of subj1: ");
    scanf("%f", &subj1);

    printf("Enter the marks of subj2: ");
    scanf("%f", &subj2);

    printf("Enter the marks of subj3: ");
    scanf("%f", &subj3);

    obtainedmarks = subj1+subj2+subj3;
    percentage = (obtainedmarks/300)*100;
    printf("The percentage is = %f", percentage);

    return 0;

}
