#include <stdio.h>

int main()
{

    // create variables

    int number = 10;
    char character = 'A';
    float num2 = 10.5; // this is the first value

    // printing the variables
    printf("%d\n", number);
    printf("%c\n", character);
    num2 = 20.56; // this is the changed second value
    printf("%.3f\n", num2);

    //  printing demos
    printf("Hello World!\n");
    printf("I am learning C.\n");
    printf("MY name is Ahmod_Abdullah. I am not %d years old. My grade is note %c and i didn't get %2.f in the exam.\n", number, character, num2);

    // printing without variables
    int num = 50;
    printf("My student Id is %d\n", 123456);
    printf("My student Id is not %c\n", 'A');

    // assigning one variables value to another
    int var1;
    int var2 = 50;
    var1 = var2;
    printf("var1= %d\n", var1);

    // addimg variables together

    int a = 10;
    int b = 20;
    int x = a + b;
    printf("The sum of a and b is %d\n", x);

    // declare multiple variables in single line

    int p, q, r;
    p = 10;
    q = 20;
    r = 30;
    printf("%d\n", p + q + r);
    // declare multiple variables in multiples lines
    int p1 = 10;
    int q1 = 20;
    int r1 = 30;
    printf("%d\n", p1 + q1 - r1);
    return 0;
}
