#include<stdio.h>
float force(int m);
int main()
{
    float m, F;
    printf("Enter The Mass of Given Body in Kg:\n");
    scanf("%f", &m);
    F = force(m);
    printf("The Force of Attraction Applied by Earth on Given body of Mass %.1f Kg is %.2f Newtons", m, F);
    return 0; //%.1 & %.2 to Adjust the Number of Deciamal Values of Float Needed.
}
float force(int m)
{
    float F = m*9.8;
    return F;
}