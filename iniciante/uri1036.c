#include <math.h>
#include <stdio.h>

int main() {

    float a,b,c;

    scanf("%f %f %f", &a, &b, &c);

    float delta = (b * b) - (4 * a * c);
    float r1,r2;

    if ((delta < 0) || (a == 0)) {

        printf("Impossivel calcular\n");

    } else {
        r1 = ((-b) + ( sqrt(delta) ) ) / (2*a);
        r2 = ((-b) - ( sqrt(delta) ) ) / (2*a);
        
        printf("R1 = %.5f\n", r1);
        printf("R2 = %.5f\n", r2);
    }

  return 0;
}