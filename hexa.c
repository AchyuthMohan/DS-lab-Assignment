
#include<stdio.h>
int main(){
int n,i,j,a[20][20];
printf("Enter the value for n");
scanf("%d",&n);
printf("Enter the elements: ");
for(i=0;i<n;i++){
    for(j=0;j<4;j++){
        scanf("%d",&a[i][j]);
    }
}
for(i=0;i<n;i++){
    int k=1;
    for(j=3;j>=0;j--){
        int sum=0;
        sum+=a[i][j]*k;
        k=k*2;
        if(sum>9){
            if(sum==10){
               printf("A");
            }
            else if(sum==11){
                printf("B");
            }
            else if(sum==12){
                printf("C");
            }
            else if(sum==13){
               printf("D");
            }
            else if(sum==14){
                printf("E");
            }
            else if(sum==15){
                printf("F");
            }
        }
        else{
            printf("%d",sum);
        }
    }
}
}