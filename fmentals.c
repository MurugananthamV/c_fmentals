#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <math.h>
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
// static int var;//stored in bss
// static int var=30;//move to initialized
// static int var;
//
//function
//

int func(int num);
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
    // int a,b;
    // printf("Enter the first number:\n");
    // scanf("%d",&a);
    // printf("Enter the second number:\n");
    // scanf("%d",&b);
    // printf("a+b=%d\n",a+b);
    // printf("a-b=%d\n",a-b);
    // printf("axb=%d\n",a*b);
    // printf("a/b=%d\n",a/b);
    // printf("a modulo b=%d",a%b);
//
//================================increment operator and decrement operator
//
    // int a=4,b=3;
    // printf("%d\n",a+++b);
//
//===============================relational operator
// 
    // int a=10,b=20,c=30;
    // if(a>b && a>c){
    //     printf("a is greater");
    // }
    // else if (b>a && b>c)
    // {
    //     printf("b is greater");

    // }
    // else{
    //     printf("c is greater");
    // }
//
//==================================Condirional operatords
//
    // int var=75;
    // int var1=30;
    // int num;
    // num=sizeof(var)?(var1>20?((var==75)?'a':1):1):1;
    // printf("%d",num);
//
//============================COMMA operator
//
    // int var=(printf("%s\n","Hi i am Murugan!"),10);
    // printf("%d",var);
//
//
    // int var;
    // int num;
    // num=(var=15,var+35);
    // printf("%d",num);
//
//================================Prcedence of operator
//  
    // int fun1(){
    //     printf("Hi\n");
    //     return 1;
    // }
    // int fun2(){
    //     printf("Hello\n");
    //     return 1;
    // }
    // int a;
    // a=fun1()+fun2();
    // printf("%d",a);
//
//
//
    // int a=10,b=20,c=30,d=40;
    // if(a <= b == d > c){
    //     printf("TRUE");
    // }
    // else{
    //     printf("FALSE");
    // }
    
//
// according to C99 standard the v++ is not evaluated
    // int var=5;
    // int var1=sizeof(var++);
    // printf("%d %d",var,var1);
//
//
    // int a=1;
    // int b=1;
    // int c=++a || b++;
    // int d=b-- && --a;
    // printf("%d %d %d %d",d ,c ,b ,a );
//
//========================Switch and loops
//
    


    
    // int n=1;
    // do
    // {
    //     switch (n)
    //     {
    //     case 1:
    //         printf("        ==============\n");
    //         printf("        |    0.Exit   |\n");
    //         printf("        |    1.Menue  |\n");
    //         printf("        |    2.Files  |\n");
    //         printf("        |    3.Mail   |\n");
    //         printf("        ==============\n\n");
    //         printf("                            ==============\n");
    //         printf("                            | Enter Here: |\n");
    //         printf("                            ==============\n");
    //         printf("                            |\n");
    //         printf("                            --->");
    //         scanf("%d",&n);
    //         break;
    //     case 2:
    //         printf("                                        =========================\n"); 
    //         printf("                                        =======FILE MANAGER======\n");
    //         printf("                                        =========================\n"); 
    //         printf("        ==============\n");
    //         printf("        |    0.Exit   |\n");
    //         printf("        |    1.Menue  |\n");
    //         printf("        |    3.Mail   |\n");
    //         printf("        ==============\n\n");
    //         printf("                            ==============\n");
    //         printf("                            | Enter Here: |\n");
    //         printf("                            ==============\n");
    //         printf("                            |\n");
    //         printf("                            --->");
    //         scanf("%d",&n);
    //         break;
    //     case 3:
    //         printf("                                        ==================\n");
    //         printf("                                        =======Gmail======\n");
    //         printf("                                        ==================\n\n");
    //         printf("        ==============\n");
    //         printf("        |    0.Exit   |\n");
    //         printf("        |    1.Menue  |\n");
    //         printf("        |    2.Files  |\n");
    //         printf("        ==============\n\n");
    //         printf("                            ==============\n");
    //         printf("                            | Enter Here: |\n");
    //         printf("                            ==============\n");
    //         printf("                            |\n");
    //         printf("                            --->");
    //         scanf("%d",&n);
    //         break;
    //     default:
    //         printf("Wrong Choice Pleas Enter Valid Number Mentioned In Below!\n\n"); 
    //         printf("        ==============\n");
    //         printf("        |    0.Exit   |\n");
    //         printf("        |    1.Menue  |\n");
    //         printf("        |    2.Files  |\n");
    //         printf("        |    3.Mail   |\n");
    //         printf("        ==============\n\n");
    //         printf("                            ==============\n");
    //         printf("                            | Enter Here: |\n");
    //         printf("                            ==============\n");
    //         printf("                            |\n");
    //         printf("                            --->");
    //         scanf("%d",&n);

    //         break;
    //     }

    // }while(n!=0);
    // printf("                                                  ==============\n");
    // printf("                                                  |  THANK YOU |\n");
    // printf("                                                  ==============\n");
//
//
//
//
    // int i=1024;
    // for(; i;i>>=1){//i=i>>1
    //     printf("Hello Wordl!\n");
    // }

//
//
//
    // int x;
    // for(x=0;x<20;x++){
    //     switch (x)
    //     {
    //     case 0:x+=5l;
    //     case 1:x+=3;
    //     case 2:x+=2;
    //     default:x+=2;
    //     }
    // printf("%d\n",x);
    // }
//
//
//
    // int i=-1;
    // while(i<=10){
    //     if(i>=0)
    //         break;
    //     else{
    //         i++;
    //         continue;
    //     }
    //     printf("Kumaran");
    // }

//
//
//
    // int x=10;
    // if(x==10);x=5;//these two are separate not inside the condition
    // if(x==10) x++;
    // if(x==5) x++;
    // else x+=2;
    // printf("%d",x);
//
//
//
    // int i,j,k;
    // scanf("%d",&j);
    // for(i=1;i<=j;i++){
    //     for(k=1;k<=2*j-1;k++){
    //         if(k>=j-(i-1) && k<=j+(i-1)){
    //             printf("*");
    //         }
    //         else{
    //             printf(" ");
    //         }
    //     }
    //     printf("\n");
    // }
//
//check weather the number is palindrom or not
//
    // int n,r=0,i,j;
    // printf("Enter The Number:");
    // scanf("%d",&n);
    // i=n;
    // while(i!=0){
    //     j=i%10;
    //     r=r*10+j;
    //     i=i/10;
    // }
    // if(r==n)
    //     printf("Its a palindrom");
    // else
    //     printf("its not a palindrom");
//
//check weather the number is amstrong or not
//
    // int num,q,cnt=0,i,j,rem=0,res=0,pow;
    // printf("Enter the Number need to check Amstrong:");
    // scanf("%d",&num);
    // q=num;
    // while(q!=0){
    //     q=q/10;
    //     cnt++;
    // }
    // q=num;
    // for(i=1;i<=cnt;i++){
    //     rem=q%10;
    //     pow=1;
    //     for(j=1;j<=cnt;j++){
    //         pow=pow*rem;
    //     }
    //     res=res+pow;
    //     q=q/10;
    // }
    // if(res==num)
    //     printf("The given number is palindrom");
    // else
    //     printf("Not palindrom");
//
//check weather the given number is strong or not 
//
    // int num,res=0,rem=1,q,i,fact=1;
    // printf("Enter the number:");
    // scanf("%d",&num);
    // q=num;
    // while(q!=0){
    //     rem=q%10;
    //     for(i=1;i<=rem;i++){
    //         fact=fact*i;
    //     }
    //     res=res+fact;
    //     fact=1;
    //     q=q/10;
    // }
    // if(res==num)
    //     printf("Strong number");
    // else
        // printf("not amstrong");
//
//check weather the number is prime or not
//



//
//addin two number withput using + operator
//
    // int a=0,b=0;
    // printf("Enter value A:");
    // scanf("%d",&a);
    // printf("Enter value B:");
    // scanf("%d",&b);
    // if(a<0 && b>=0){
    //     while(a!=-1){
            
    //         a++;
    //         b--;
    //         if(b==0){
    //             b=-1;
    //             continue;
    //         }
    //     }
    //     printf("The addition value is 4:%d\n",b);  
    // }
    // else if (b<0 && a>=0)
    // {
    //      while(b!=-1){
    //         b++;
    //         a--;
    //         if(a==0){
    //             a=-1;
    //             continue;
    //         }
    //     }
    //     printf("The addition value is 4:%d\n",a);  
    // }
    // else if (a<0 && b<0)
    // {
    //      while(b!=0){
    //         a--;
    //         b++;
    //     }
    //     printf("The addition value is 4:%d\n",a);  
    // }
    // else{
    //      while(b!=0){
    //         a++;
    //         b--;
    //     } 
    //     printf("The addition value is 4:%d\n",a);  
    // }

//
//wirite a porogramm to add two nuners woithout using + operator
//
    // int a,b,sum=0,carry=0;
    // printf("Enter a value:");
    // scanf("%d",&a);
    // printf("Enter vlue B:");
    // scanf("%d",&b);
    // while(b!=0){
    //     sum=a^b;
    //     carry=(a&b)<<1;
    //     a=sum;
    //     b=carry;
    // }
    // printf("The addition of two number is:%d\n",a);
//
//write aprogramm to print the upto to n number odf febinnosi series
//  
//     int i,a,num=0,temp1=0,temp2=1;
//     printf("Enter a value:");
//     scanf("%d",&a);
//     for(i=1;i<=a;i++)
//       { printf("%d-",temp1);
//        num=temp1+temp2;
//        temp1=temp2;
//        temp2=num;
//  }

//floyd's programm
//
    // int i,j,num=1,row;
    // printf("enter number of rows:");
    // scanf("%d",&row);
    // for(i=1;i<=row;i++){
    //     for(j=1;j<=i;j++){
    //         printf("%d",num);
    //         num++;
    //     }
    //     printf("\n");
    // }
//
//Binary to decimal conversion usiong c programming
// //
//     int binary,num=0,rem,b=1,bin;
//     printf("enter the binary number:");
//     scanf("%d",&binary);
//     bin=binary;
//     while(binary!=0){
//         rem=binary%10;
//         num=num+rem*b;
//         binary=binary/10;
//         b=b*2;
//     }
//     printf("Decimal value is :%d",num);

//
// function problem
//
    printf("%d",func(435));
    return 0;
}

int func(int num)
{
    int count=2;
    while(num){
        count++;
        num>>=2;
    }
    return count;
}
// int increment(){
// //static preser the value between calls
//     static int var2;
//     var2=var2+1;
//     printf("the value is:%d\n",var2);
// // normal variable in function it becomes zero after function ends each time wee call the function it ony zero.
//     int var2=0;
//     var2=var2+1;`
//     printf("the value is:%d\n",var2);

// }