#include <stdio.h>
int main(){
int n,i,j,a;
char ch='A';
scanf("%d",&n);
for(int i=1;i<=n;i++){
    for(int a=1;a<=n-i;a++){
        printf(" ");
    }
    for (int j=1; j<=2*i-1; j++){
        printf("%c",ch);
        ch++;
    }
    
    printf("\n");
    
}
    return 0;
}