#include<stdio.h>

int main(){

 int n,i;

 char arr[5];
    for(i=0; i<=4; i++){
        printf("enter character %d: ", i+1);
        scanf(" %c", &arr[i]);
    }

    for(i=0; i<=4; i++){
        printf(" %c", arr[i]);
    }

    printf("the reverse array is :\n");
    for(i=4; i>=0; i--){
        printf(" %c",arr[i]);
    }
    return 0;

}