#include <stdio.h>

/* Function Prototypes (before main) */
float celsiusToFahrenheit(float c);
float fahrenheitToCelsius(float f);

int main()
{
    float celsius = 25.0;
    float fahrenheit = 77.0;

    /* Calling functions and printing results */
    printf("Temperature Conversion\n");

    printf("\nCelsius to Fahrenheit:\n");
    printf("%.2f C = %.2f F\n", celsius, celsiusToFahrenheit(celsius));

    printf("\nFahrenheit to Celsius:\n");
    printf("%.2f F = %.2f C\n", fahrenheit, fahrenheitToCelsius(fahrenheit));

    return 0;
}

/* Function Definitions (after main) */

float celsiusToFahrenheit(float c)
{
    float f;
    f = (c * 9 / 5) + 32;
    return f;
}

float fahrenheitToCelsius(float f)
{
    float c;
    c = (f - 32) * 5 / 9;
    return c;
}
