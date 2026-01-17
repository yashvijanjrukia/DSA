#include<stdio.h>
struct student{
    int rollnumber;
    char name[50];
    char address[100];
};

int main(){
    struct student students[3];
    for(int i=0; i<3; i++){
        printf("enter details for student %d:\n", i+1);
        printf("enter roll number:");
        scanf("%d", &students[i].rollnumber);
        printf("enter name:");
        scanf("%s", students[i].name);
        printf("enter address:");
        scanf("%s", students[i].address);
        printf("\n");
    }
    printf("student details are:\n");
    for(int i=0; i<3; i++){
        printf("detail of students %d:\n", i+1);
        printf("roll number : %d\n", students[i].rollnumber);
        printf("name : %s\n", students[i].name);
        printf("address : %s\n",students[i].address);
        printf("\n");
        
    }

     return 0;

    }
