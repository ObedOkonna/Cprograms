 # include <stdio.h>
 int main ()
 {
    const float pi=3.14f;
    float radius;
    float area; //computes the area of a circle using pi
    const float g=9.78;
    float mass;
    float weight; //computes the weight of the object
        printf("What is the value of the radius of the circle?\n");
    scanf(" %f", &radius);
    printf("What is the value of the mass?\n");
    scanf(" %f", &mass);
    area=pi*radius*radius;
    weight=mass*g;
    printf("\nThe area is %f and the weight of the object is %f", area,weight);
    return 0;
 }