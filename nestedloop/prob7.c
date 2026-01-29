#include <stdio.h>
int main(){
int i,j,a,n;
scanf("%d",&n);
for(int i=1;i<=n;i++){
    for(int a=1;a<=n-i;a++){
        printf(" ");
    }
    for (int j=1; j<=2*i-1; j++){
        printf("*");
    }
    
    printf("\n");
    
}
    return 0;
}