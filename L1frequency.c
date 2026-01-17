#include<stdio.h>

int main(){

int arr[10] = {1,2,2,3,4,4,4,5,5,6};
int frequency[10] = {0};

 for(int i=0;i<10;i++){
    frequency[arr[i]]++;
 }

 for(int i=0;i<10;i++){
    if(frequency[i]>0){
        printf("Frequency of %d is %d\n",i,frequency[i]);
    }
 }
 return 0;
}