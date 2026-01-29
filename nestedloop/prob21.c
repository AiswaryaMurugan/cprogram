#include <stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    int size=2*n-1;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            int value =n;
            if(i<value)value=i;
            if(j<value)value=j;
            if(size-1-i<value)
            value=size-1-i;
            if(size-1-j<value)
            value=size-1-j;
            printf("%d ",n-value);
        }
        printf("\n");
    }
    return 0;
}