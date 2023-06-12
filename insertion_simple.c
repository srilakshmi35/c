// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n,arr[10],i,j,t;
    printf("enter n value:\n");
    scanf("%d",&n);
    for(i = 0;i< n;i++) {
        scanf("%d",&arr[i]);
    }
    for(i = 0;i < n;i++)
    {
        j = i;
        while(j > 0)
        {
            if(arr[j-1] > arr[j]) {
                t = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = t;
            }
            j = j-1;
        }
    }
    for(i = 0;i < n;i++) {
        printf("%d\n",arr[i]);
    }
}
