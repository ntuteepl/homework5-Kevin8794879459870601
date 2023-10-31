#include <stdio.h>

int main() {
    float a, b;
    scanf("%f",&a);
    if (a<800){
            float c;
            c=a*9/10;
        printf("%.1f\n",c);
    }
    else if (a<1500){
            float c;
            c=a*9*9/10/10;
        printf("%.1f\n",c);
    }
    else if (a<1500){
            float c;
            c=a*9*79/1000;
        printf("%.1f\n",c);
    }



    return 0;
}

