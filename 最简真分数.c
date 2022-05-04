#include <stdio.h>

// 最大公约数
int fn (int a, int b) {
    int i;
    while (a%b!=0){
        i=a%b;
        a=b;
        b=i;
    }
    return b;
}
int main(){
    int n,b,i,j,c,sum = 0;
    scanf("%d",&n);
    int a[n];
    for (i = 0; i < n; i++)
    {
       scanf("%d",&a[i]);
    }
    for (i = 0; i < n; i++)
    {
       for (j = i+1; j < n; j++)
        {
            if (fn(a[i],a[j]) == 1) {
                sum ++;
            }
        
        }
    }


    printf("%d", sum);
    return 0;
}