#include<stdio.h>
//==================POINTER AND ARITHMATIC OPERATION==============
// int main(){
//     int a;
//     int *p;
//     a=100;
//     p=&a;
//     printf("%d\n",p);
//     printf("%d\n",*p);
//     printf("%d\n",&a);
//     printf("%d\n",&p);
//     *p=200;//deferencing
//     printf("%d\n",a);
// //========pointer arithmatic======
//     printf("adress of p+1 %d\n",p+1);//+1 means one times of its byte if int 4 add 1 times of 4.
//     printf("adrees of p+2%d\n",p+2);//two times of 4.
//     printf("*p+1 %d\n",*p+1);//*p means the value of address it holdes.
//     printf("*(p+1) %d\n",*(p+3));//this give carpage becuse there is no value in the that address.
//     return 0;
// }
//
//================type casting and aruthmatic.===========
int main(){
    int num=1025;
    int *p=&num;
    printf("address of num=%d , value=%d \n",p,*p);
    printf("address of nun+1=%d , value of address num+1=%d,value+1=%d \n",p+1,*(p+1),*p+1);
//=============TYPE CASTING=========
    char *c;//for char only one byte assigned
    c=(char*)p;//typcast the integer to char
    printf("adress of char p=%d ,value of char p=%d\n",c,*c);
    printf("adress of char p+1=%d ,value at char p+1 adress=%d , value of char p+1=%d\n",c+1,*(c+1),*c+1);
}
