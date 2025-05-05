#include <stdio.h>
int main()
{
    float temperature, converted;
    char unit;
    printf("Enter the temperature followed by the unit ( C for Celsius, F for Farenheit) :");
    scanf("%f %c", &temperature, &converted);
    if (unit == 'C' || unit == 'c')

    {
        converted = temperature * 1.8 + 32;
        printf("%.2f Farenheit is %.2f Celsius\n", temperature, converted);
    }
    else if (unit == 'F' || unit == 'f')

    {
        converted = (temperature - 32) / 1.8;
        printf("%.2f Celsius is %.2f Farenheit\n", temperature, converted);
    }
    else
    {
        printf("Invalid unit. Please enter 'C' for Celsius or 'F' for Farenheit.\n");
    }
    return 0;
}
