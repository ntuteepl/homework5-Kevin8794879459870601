#include <stdio.h>

int main() {
    float a, b;
    scanf("%f",&a);
    if (a<800){
            double c;
            c=a*9/10;
        printf("%.1f\n",c);
    }
    else if (a<1500){
            double c;
            c=a*9*9/10/10;
        printf("%.1f\n",c);
    }
    else if (a>1500){
            double c;
            c=a*9/10*79/100;
        printf("%.1f\n",c);
    }



    return 0;
}

