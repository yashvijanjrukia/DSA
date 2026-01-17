#include<stdio.h>

int main(){

int arr[5] = {3,1,5,6,2};
int min=arr[0],max=arr[0];

for(int i=0;i<5;i++){
if(arr[i]<min){
min=arr[i];
}
if(arr[i]>max){
max=arr[i];
}
}
printf("Minimum element is %d\n",min);
printf("Maximum element is %d\n",max);

return 0;
}
