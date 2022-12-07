#include<stdio.h>

float temperature(float a);

int main(int argc, char const *argv[])
{
    float temp_cel;
    printf("Enter temperature in celcius scale :\n");
    scanf("%f",&temp_cel);
    printf("Temperature in Fahrenheit is :%f",temperature(temp_cel));
    return 0;
}
float temperature(float a){
    float fahren;
    fahren = (((a*9)/5)+32);
    return fahren;
}