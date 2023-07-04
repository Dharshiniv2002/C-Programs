#include <stdio.h>

int main()
{
    int a,i,j,k;
    scanf("%d", &a);
    for(i=a;i>=1;i--){
        printf("\n");
        for(k=1;k<=a-i;k++)
            printf(" ");
            for(j=1;j<=(2*i)-1;j++){
                printf("%d", i);
            }
    }
    for(i=2;i<=a;i++){
        printf("\n");
        for(k=1;k<=a-i;k++)
            printf(" ");
            for(j=1;j<=(2*i)-1;j++){
                printf("%d", i);
            }
        
    }
}
