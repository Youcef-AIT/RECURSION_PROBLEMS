#include<stdio.h>
#include<math.h>
int mult(int,int,int);
int main(){
    int num1,num2,count=0;
    printf(" enter a number : ");
    scanf("%d",&num1);
    printf(" enter a number : ");
    scanf("%d",&num2);
    while (pow(2,count) <= num1)
    {
        count++;
    }
    printf("%d",mult(num1,num2,count-1));
}
int mult(int a,int b,int c){
    static int result=0;
    result += pow(2,c);
    if (result == a)
    {
        return pow(2,c) * b;
    }else if (result > a)
    {
        result -= pow(2,c);
        return mult(a,b,c-1);
    }else{
        return pow(2,c)*b + mult(a,b,c-1);
    }
}