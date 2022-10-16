#include <stdio.h>
#include <stdlib.h>
int account, microprocessor, c, math, english, roll,class;
char name[100], fname[100], mname[100], sname[100], dob[100];


//result generate template and all starts
void generatesheet(){
    char sname[30]= "ABCD school";
    int total;
    float percentage;
    total = c+math+english+microprocessor+account;
    percentage= total/5;
    printf("\n------------------------------------------------------------------------------------|\n");
    printf("|                  ASDF HIGH SCHOOL CERTIFICATE EXAMINATION                     |\n");
    printf("|------------------------------------------------------------------------------------|\n");
    printf("|Your name: %s\tclass: %dth\tRoll Number: %d\n", name, class, roll);
    printf("|Father name: %s\n", fname);
    printf("|Mother name: %s\n", mname);
    printf("|Date of birth: %s\n", dob);
    printf("|School name: %s\n", sname);
    printf("|------------------------------------------------------------------------------------|\n");
    printf("|\tSUBJECTS      \tMAX MARKS\tMIN MARKS\tTHEORY MARKS\n");
    printf("|------------------------------------------------------------------------------------|\n");
    printf("|\tAccount              \t  100      \t   33       \t    %d\n", account);
    printf("|\tMicroprocessor       \t  100      \t   33       \t    %d\n", microprocessor);
    printf("|\tC                    \t  100      \t   33       \t    %d\n", c);
    printf("|\tMath                 \t  100      \t   33       \t    %d\n", math);
    printf("|\tEnglish              \t  100      \t   33       \t    %d\n", english);
    printf("|------------------------------------------------------------------------------------|\n");
    printf("|\t              \t  500    |    GRAND TOTAL\t    %d\n", total);
    printf("|------------------------------------------------------------------------------------|\n");
    if (percentage >= 81 && percentage <= 100)
    {
        printf("|RESULT : PASS IN FIRST DIVISION\n");
        printf("|GRADE  : A+\n");
    }
    if (percentage >= 60 && percentage <= 80)
    {
        printf("|RESULT : PASS IN FIRST DIVISION\n");
        printf("|GRADE  : A\n");
    }
    else if (percentage >= 41 && percentage <= 59)
    {
        printf("|RESULT : PASS IN SECOND DIVISION\n");
        printf("|GRADE  : B\n");
    }
    else if (percentage >= 31 && percentage <= 40)
    {
        printf("|RESULT : PASS IN THIRD DIVISION\n");
        printf("|GRADE  : C\n");
    }
    else if (percentage >= 1 && percentage <= 30)
    {
        printf("|RESULT : Fail\n");
        printf("|GRADE  : D\n");
    }
    printf("|------------------------------------------------------------------------------------|\n\n");
}
//result generate template and all ends
//take details function starts
void ask(){
    char yesno;
    printf("Enter the Name: ");
    fflush(stdin);
    scanf("\n%s", &name);
    printf("Enter DOB: ");
    fflush(stdin);
    scanf("%s",&dob);
    printf("Enter the Class: ");
    scanf("%d", &class);
    printf("Enter the  Father's name: ");
    fflush(stdin);
    scanf("%s", &fname);
    printf("Enter the Mother's Name: ");
    fflush(stdin);
    scanf("%s", &mname);
    fflush(stdin);
repeate:
    printf("Marks obtained in account: ");
    scanf("%d", &account);
    if(account>100 || account<1)
    {
        printf("Invalid marks enter valid marks\n");
        goto repeate;
    }
repeate1:
    printf("Marks obtained in Microprocessor: ");
    scanf("%d", &microprocessor);
    if(microprocessor>100 || microprocessor<1)
    {
        printf("Invalid marks enter valid marks\n");
        goto repeate1;
    }
repeate2:
    printf("Marks obtained in C: ");
    scanf("%d", &c);
    if(c>100 || c<1)
    {
        printf("Invalid marks enter valid marks\n");
        goto repeate2;
    }
repeate3:
    printf("Marks obtained in English: ");
    scanf("%d", &english);
    if(english>100 || english<1)
    {
        printf("Invalid marks enter valid marks\n");
        goto repeate3;
    }
repeate4:
    printf("Marks obtained in Math: ");
    scanf("%d", &math);
    if(math>100 || math<1)
    {
        printf("Invalid marks enter valid marks\n");
        goto repeate4;
    }
    printf("Do you want to generate marksheet? [y/n]: ");
    scanf("%s", &yesno);
    if(yesno == 'y' || yesno == 'Y')
    {
        generatesheet();
    }
    else{
        exit(0);
    }
}
//take details function ends

int main(int argc, char const *argv[])
{
    char yn;
    printf("Do you want to generate marksheet? [y/n]");
    fflush(stdin);
    scanf("%c", &yn);
    if (yn == 'y' || yn == 'Y')
    {
        ask();
    }
    else{
        exit(0);
    }
    return 0;
}