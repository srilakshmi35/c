#include <stdio.h>
int fun(int *f)
{
    f++;
   printf("%p\n",f);
}
int main() {
    int a=10,b;
    //int *p;
    //p=&a;
    b=fun(a);
    printf("%d\n",b);

    return 0;
}
