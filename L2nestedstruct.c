#include<stdio.h>

struct employee{

 char name[50];
 int salary;
 int empID;
};
struct organization{
    char orgname[50];
    int orgID;
    struct employee emp[2];
};

int main(){

struct organization org[2];

for(int i=0;i<2;i++){
    printf("enter organization details %d : \n",i+1);
    printf("enter organization name :");
    scanf("%s",org[i].orgname);
    printf("enter organization ID :");
    scanf("%d",&org[i].orgID);

    for(int j=0;j<2;j++){
        printf("enter employee details %d for organization %d :\n",j+1,i+1);
        printf("enter employee name :");
        scanf("%s",org[i].emp[j].name);
        printf("enter employee salary :");
        scanf("%d",&org[i].emp[j].salary);
        printf("enter employee ID :");
        scanf("%d",&org[i].emp[j].empID);

    }}
for(int i=0;i<2;i++){
     printf("\n organiation %d details :\n",i+1);
     printf("organization name :%s\n",org[i].orgname);
     printf("organization ID :%d\n",org[i].orgID);
    printf("employee details:\n");
    
for(int j=0;j<2;j++){
    printf("employee name :%s\n ",org[i].emp[j].name);
    printf("employee salary :%d\n",org[i].emp[j].salary);
    printf("employee ID :%d\n",org[i].emp[j].empID);


}}}





