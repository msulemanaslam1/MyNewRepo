/* This programme is prepared by Muhammad Suleman on 22/10/2023.This programme can give the grade and credit points when you enter the marks.*/

#include<stdio.h>

int main()
{
    int sub1, sub2, sub3, sub4, sub5, sum;
    float percentage, credit_points1, credit_points2, credit_points3, credit_points4, credit_points5;
    char grade1, grade2, grade3, grade4, grade5;


    printf("\nEnter the marks of subject 1(out of 100):");
    scanf("%d",&sub1);
    printf("\nEnter the marks of subject 2(out of 100):");
    scanf("%d",&sub2);
    printf("\nEnter the marks of subject 3(out of 100):");
    scanf("%d",&sub3);
    printf("\nEnter the marks of subject 4(out of 100):");
    scanf("%d",&sub4);
    printf("\nEnter the marks of subject 5(out of 100):");
    scanf("%d",&sub5);

    sum = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = ((float)sum / 500) * 100;


    if(percentage >= 90){
        grade1 = 'A';
        credit_points1 = 4.00;
        }else if(percentage >= 85){
        grade1 = 'A-';
        credit_points1 = 3.7;
        }else if(percentage >= 80){
            grade1 = 'B+';
            credit_points1 = 3.3;
        }else if(percentage >= 75){
        grade1 = 'B';
        credit_points1 = 3.0;
        }else if(percentage >= 70){
            grade1 = 'B-';
            credit_points1 = 2.7;
        }else if(percentage >= 65){
        grade1 = 'C+';
        credit_points1 = 2.3;
        }else if(percentage >= 60){
            grade1 = 'C';
            credit_points1 = 2.0;
        }else if(percentage >= 55){
        grade1 = 'C-';
        credit_points1 = 1.7;
        }else if(percentage >= 50){
            grade1 = 'D';
            credit_points1 = 1.3;
        }else {grade1 = 'F';
              credit_points1 = 0.0;}



    printf("\n");
    printf("                                                           \n");
    printf("  Subject | Marks (out of 100) | Percentage | Grade | Credit Points |\n");
    printf("                                                           \n");
    printf("    1              %3d               %.2f       %c          %.1f       \n", sub1, (float)sub1, grade1, credit_points1);
    printf("    2              %3d               %.2f       %c          %.1f       \n", sub2, (float)sub2, grade2, credit_points2);
    printf("    3              %3d               %.2f       %c          %.1f       \n", sub3, (float)sub3, grade3, credit_points3);
    printf("    4              %3d               %.2f       %c          %.1f       \n", sub4, (float)sub4, grade4, credit_points4);
    printf("    5              %3d               %.2f       %c          %.1f       \n", sub5, (float)sub5, grade5, credit_points5);
    printf("                                                            \n");
    printf("Total Marks: %d \n", sum);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;

}
