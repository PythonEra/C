#include<stdio.h>
int square();
int triangle();
int rectangle();

int main(){
printf("Calculating the area of the sequare\n");
float area = square();
printf("Area of the square\n%f",area);
float area1 = triangle();
printf("Area of the triangle\n%f",area1);
float area2 = rectangle();
printf("The area of the rectangle\n%f",area2);
}
int square(){
    float side;
    printf("\nEnter the side size\n");
    scanf("%f",&side);
    return side*side;

}
int triangle(){
    float height,width;
    printf("\nEnter the Width and Height\n");
    scanf("%f %f",&height,&width);
    return 0.5*height*width;

}
int rectangle()
{
    int length,width;
    printf("\nEnter the lenght and widht\n");
    scanf("%d %d",&length,&width);
    return length*width;
}
