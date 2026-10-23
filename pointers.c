#include<stdio.h>
int main(){
    int a;
    int *p;
    a=100;
    p=&a;
    printf("%d\n",p);
    printf("%d\n",*p);
    printf("%d\n",&a);
    printf("%d\n",&p);
    *p=200;//deferencing
    printf("%d\n",a);
//========pointer rithmatic======
    printf("adress of p+1 %d\n",p+1);//+1 means one times of its byte if int 4 add 1 times of 4.
    printf("adrees of p+2%d\n",p+2);//two times of 4.
    printf("*p+1 %d\n",*p+1);//*p means the value of address it holdes.
    printf("*(p+1) %d\n",*(p+3));//this give carpage becuse there is no value in the that address.
    return 0;
}