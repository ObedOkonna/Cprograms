 # include <stdio.h>
 int main ()
 {
    int age, amt;
    printf("How old are you?\n");
    scanf(" %d", &age);
    printf("How much did you pay?\n");
    scanf(" %d", &amt);
    if (age>=20 && amt>=100)
    printf("You can write the examination");
    else
    printf("I'm sorry, but you are not eligible for the exam");
    return 0;

 }