#include <stdio.h>

float fahrenheit_to_celsius(float a){
    float b = 32.0;
    float c = 5.0;
    float d = 9.0;
    float celsius = (a - b) * c / d;

    return celsius;
}

float celsius_to_fahrenheit( float a){
    float b = 9;
    float c = 5;
    float d =32;
    float fahrenheit = (a * b / c) +d;

    return fahrenheit;
}


// This is where you add the two functions

int main() {
    float temp_f = 100.0;
    float temp_c = 37.0;

    printf("%.1f\n", fahrenheit_to_celsius(temp_f));  // Expected output: 37.8
    printf("%.1f\n", celsius_to_fahrenheit(temp_c));  // Expected output: 98.6

    return 0;
}