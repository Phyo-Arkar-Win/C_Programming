#include<stdio.h>
int calc(int);
int main(void){
    int num;
    int max;
    printf("Enter the number:");
    scanf("%d",&num);
    max = calc(num);
    printf("The largest number is %d",max);
    return 0;
}
int calc(int number){
    
    int nums[4];
    for(int i=0;i<number;i++){
        printf("Enter the numbers:");
        scanf("%d",&nums[i]);
    }
    int maxi=nums[0];
    for(int j=0;j<number;j++){
        if(nums[j]>maxi){
            maxi = nums[j];
        }
    }
    return maxi;
}
