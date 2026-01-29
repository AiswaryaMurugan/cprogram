#include <stdio.h>
int main(){
    int i,j,a,n;
    scanf("%d",&n);
    for(int i=n;i>0;i--){
    for(int a=n-i;a>0;a--){
        printf(" ");
    }
    for (int j=1; j<=2*i-1; j++){
        printf("*");
    }
    
    printf("\n");
    

}
return 0;
}