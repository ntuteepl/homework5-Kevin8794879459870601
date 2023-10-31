#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d",&a,&b);
    if (a<=60){
            double c;
            c=a*b;
        printf("%.1f\n",c);
    }
    else if (a<=120){
            double c;
            c=60*b+(a-60)*b*1.33;
        printf("%.1f\n",c);
    }
    else if (a>120){
            double c;
            c=60*b+60*b*1.33+(a-120)*b*1.66;
        printf("%.1f\n",c);
    }



    return 0;
}

