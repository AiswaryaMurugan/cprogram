#include <stdio.h>
int main(){
     int i,j,n;
     printf("Enter the n value:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for (int j=0; j<n; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }

    return 0;
}