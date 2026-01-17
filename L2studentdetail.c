#include<stdio.h>

 struct student{
int rollnumber;
char name[50];
char address[100];
 };

 int main(){
    struct student s1;
    printf("enter roll number:");
    scanf("%d",&s1.rollnumber);
    printf("entrer name:");
    scanf("%s",s1.name);
    printf("enter address :");
    scanf("%s",s1.address);

printf("student details:\n");
printf("Roll number : %d\n",s1.rollnumber);
printf("name :%s\n",s1.name);
printf("address : %s\n",s1.address);

return 0;
}