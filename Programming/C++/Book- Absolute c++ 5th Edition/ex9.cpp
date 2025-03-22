/* Write a function declaration and a function definition for a function that takes
one argument of type double . The function returns the character value ' P ' if its
argument is positive and returns ' N ' if its argument is zero or negative.*/
char checkSign(double value);
char checkSign(double value)
{
    if (value > 0)
    {
        return 'P';
    }
    else
    {
        return 'N';
    }
}
