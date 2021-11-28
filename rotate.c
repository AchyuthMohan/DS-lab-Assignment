#include<stdio.h>
void rotate(int a[],int n,char d,int cr){
    int i;
    for(i=0;i<n;i++){
        a[i]=a[i+1];
    }
}
int main(){
    int n,a[30],cr;
    printf("Enter the size: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("No of times to be rotated: ");
    scanf("%d",&cr);
    rotate(a,n,'l',cr);
    
    
    return 0;
}