
#include<stdio.h>
void printName();
void sum();
void sub();
void mul();
void div();
int main(){
    printf("Hello");
    printName();
    printf("Going to calculate the sum of two numbers\n");
    sum();
    printf("This is substraction of\n");
    sub();
    printf("Multiplication of the two numbers\n");
    mul();
    printf("\nDivision :");
    div();

}
void printName(){
    printf("Your are good here\n");
}
void sum(){
int a,b;
printf("\nEnter the two values\n");
scanf("%d %d",&a,&b);
printf("Sum of two numbres is \n%d\n",a+b);
}
void sub(){
    int x,y;
    printf("\nEnter the two numbber\n");
    scanf("%d %d",&x,&y);
    printf("Substraction of \n%d\n",x-y);
}
void mul(){
    int p, q;
    printf("\n Enter the two number\n");
    scanf("%d %d",&p,&q);
    printf("Prdouct of the two number is \n%d\n",p*q);

}
void div(){
    int m,n;
    printf("Enter the two numbers\n");
    scanf("%d %d",&m, &n);
    printf("Division of %d And %d is %d",m,n,m/n);
}
