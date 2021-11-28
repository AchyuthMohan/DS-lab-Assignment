#include<stdio.h>
int main(){
    int n,m,a[30],b[30],i,j;
    printf("Enter the size of first and second arrays respectively: ");
    scanf("%d",&n);
    scanf("%d",&m);
    printf("Enter the elements of first array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the elements of second array: ");
    for(i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
    printf("\nIntersection: ");
    for(i=0;i<n;i++){
        int flag=0;
        for(j=0;j<m;j++){
            if(a[i]==b[j]&&flag==0){
                printf("%d\t",a[i]);
                flag=1;
            }
        }
    }
}
