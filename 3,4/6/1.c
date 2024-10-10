#include <stdio.h>

int main(){
float a,b,c,max;
printf("enter value of a,b,c\n"); scanf("%f%f%f",&a,&b,&c);
if( a>=b && a>=c){ max=a;
}
else if(b>=a && b>=c){ max=b;
}
else{max=c;} printf("max:%.2f", max); return 0;
}
