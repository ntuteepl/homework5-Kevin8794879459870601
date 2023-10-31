#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d",&a,&b);
    float c,d,e;
    d=a;
    e=b;
    c=(d*30+e/2)-e*6;
    if (c<0){
         c=-c;

        printf("%.3f\n",c);

    }
    else if (c>180){
            c=360-c;

        printf("%.3f\n",c);
    }
    else  {

        printf("%.3f\n",c);
    }



    return 0;
}
