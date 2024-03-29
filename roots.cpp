#include <math.h>
#include <stdio.h>
int main() 
{
    double a, b, c, discriminant, root1, root2, realPart, imagPart;
    printf("Enter coefficients a, b and c: ");
    scanf("%.3lf %.3lf %.3lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1 = %.3lf and root2 = %.3lf", root1, root2);
    }
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %.3lf;", root1);
    }    
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("root1 = %.3lf+%.3lfi and root2 = %.3f-%.3fi", realPart, imagPart, realPart, imagPart);
    }

    return 0;
} 

