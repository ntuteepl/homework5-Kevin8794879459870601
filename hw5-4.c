#include <stdio.h>

int main() {
    float a, b;
    scanf("%f%f",&a,&b);
    if ((a*30+b/2)>b*6){
            float c;
            c=(a*30+b/2)-b*6;
            if (c>180){c=c-180;}
        printf("%.3f\n",c);

    }
    else if ((a*30+b/2)<b*6){
            float c;
            c=b*6-(a*30+b/2);
            if (c>180){c=c-180;}
        printf("%.3f\n",c);
    }


    return 0;
}

