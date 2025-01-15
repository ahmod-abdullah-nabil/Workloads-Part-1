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
    printf("MY name is Ahmod_Abdullah. I am not %d years old. My grade is note %c and i didn't get %f in the exam.\n", number, character, num2);

    // printing without variables
    int num = 50;
    printf("My student Id is %d\n", 123456);
    printf("My student Id is not %c\n", 'A');
    return 0;
}
