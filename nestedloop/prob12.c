#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        for (int j = 0; j<=2*n+1; j++)
        {
            if((i<j)&&(j<2*n+1-i))
                printf(" ");
                else
                printf("%d",j);
        }
        printf("\n");
        
    }
    return 0;
}