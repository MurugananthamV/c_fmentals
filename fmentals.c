#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
// static int var1;//global static is use to restrict the acces from another file.
//
//===========================Constants
//
// #define STRING "Hello C!"//preeprocessor replace STRING to "Hello C!"
// #define KUMARAN "%s \n"
// //
// //==========================Multie line constants
// //
// #define MAXIMUM(x,y) if(x>y) \
//                         printf("%d is greater than %d.\n",x,y);\
//                      else \
//                         printf("%d is greater than %d.\n",y,x);\
//
//===========================Static
//
static int var;//stored in bss
static int var=30;//move to initialized
static int var;
int main(void){
    
    // int var=4;
    // int var1=1;
    // var=5;
    // printf("%d",var);
    // printf("hello embedded World\n");


// -----------------------------------------#size of int
    // int one=INT_MIN;
    // int two=INT_MAX;
    // short int three=SHRT_MIN;
    // short int four=SHRT_MAX;
    // long int few=INT_MIN;
    // long int six=INT_MAX;
    // unsigned short int seven=0;
    // unsigned short int eight=USHRT_MAX;
    // unsigned long int nine=0;
    // unsigned long int ten=ULONG_MAX;
    // printf("size of signed int:%d to %d",one,two);
    // printf("size of short int:%d to %d",three,four);
    // printf("size of long int:%d to %d",few,six);
    // printf("size of unsigned short int:%lu to %lu",seven,eight);
    // printf("size of unsigned long int:%lu to %lu",nine,ten);
 
//
//-------------------------------float ,double ,long double
//
//
    // unsigned int i=1;
    // int j=-3;
    // printf("%u",i+j);
//
//
//
    // float var1=3.142345;
    // double var2=3.23456723;
    // long double var3=3.14237890123578323578;
    // printf("%f\n",var1);
    // printf("%.3f\n",var2);
    // printf("%.10Lf",var3);
//
//print function print and return the valu of charachter
//
    // printf("%d",printf("%s","kumaran"));
    // printf("%d",printf("%d",1234));
//
//if value exeed the range
//
    // short int i=123456789;
    // printf("%d",i);
//
//
//auto and extern variable modifier
//
    // int var1;
    // extern int var2;//creat new file inside the folder and define a value
    // printf("%d\n",var1);
    // printf("%d",var2); 
//
//static variable modifier
//

    // increment();
    // increment();
    // increment();
//
//
//=============================CONSTANTS
//

    // printf(KUMARAN,STRING);
    // MAXIMUM(10,15);//constant as function
//
//built in constants
//
    // printf("TIME:%s\n",__TIME__);
    // printf("DATE:%s",__DATE__);
//
//
//========================Constant
//
//
    // const int a=10;//once defines we cant change the velue of the constant variable its leads to error
//
//=======================OCTALE AND HEXADECIMAL
//
    // int num1=045;
    // int num2=0x345A;
    // printf("%d\n",num1);// when we use %d it conver octal to decimal
    // printf("%o\n",num1);//print the exact vale
    // printf("%x\n",num2);//print hexa dacima in small characher
    // printf("%X",num2);//print hexa decima in capitalized charachter
//
//========================input function scanf
//
    // int var;
    // scanf("%d",&var);
    // printf("%d",var);
    
//
//=======================Static intialized memory and unintialized mamory
//
    // static int var=50;//prefr local variable over global
    // printf("%d",var);

    
//
//-----------------------------OPERATORS(ARITHMETIC)
//
    int a,b;
    printf("Enter the first number:\n");
    scanf("%d",&a);
    printf("Enter the second number:\n");
    scanf("%d",&b);
    printf("a+b=%d\n",a+b);
    printf("a-b=%d\n",a-b);
    printf("axb=%d\n",a*b);
    printf("a/b=%d\n",a/b);
    printf("a modulo b=%d",a%b);

    return 0;
}
// int increment(){
// //static preser the value between calls
//     static int var2;
//     var2=var2+1;
//     printf("the value is:%d\n",var2);
// // normal variable in function it becomes zero after function ends each time wee call the function it ony zero.
//     int var2=0;
//     var2=var2+1;
//     printf("the value is:%d\n",var2);

// }