#include<stdio.h>
void average(int,int,int,int,int,int,int);
int main(){
int a,b,c,d,e,f,g;
printf("Going to calculate the average of the 7 numbers\n");
printf("Enter the five numbers\n");
scanf("%d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g);
average(a, b, c, d, e, f, g);
}
void average(int a,int b,int c,int d, int e,int f,int g)
{
float avg;
avg = (a+b+c+d+e+f+g)/7;
printf("Average of the 7 num %f",avg);
}
