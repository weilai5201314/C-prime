#include <stdio.h>
#define a 3.785
int main(void)
{
    const float b = 1.609;

    printf("\nPlease enter journey and fuel consumption:");
    float jou, con;
    scanf("%f %f", &jou, &con);
    printf("average journey is %.1f mile per gallon", jou / con);

    float c, d;
    c = a * con, d = b * jou;
    printf("\navarage km is %f", c / (100 * d));

    return 0;
}
