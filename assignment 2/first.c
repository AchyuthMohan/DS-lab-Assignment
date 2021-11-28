#include<stdio.h>
struct poly
{
    int e;
    float c;
};
int main(){
    struct poly a[50];
    int n,m,i;
    printf("Enter the degree of first polynomial: ");
    scanf("%d",&n);
    printf("Enter the degree of second polynomial: ");
    scanf("%d",&m);
    printf("Enter the coefficient of first polynomial: ");
    for(i=0;i<n;i++){
        printf("Enter the coefficient:");
        scanf("%f",&a[i].c);
        printf("Enter the exponential: ");
        scanf("%d",a[i].e);
    }
   
}
