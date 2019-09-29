#include <stdio.h>
#include <stdlib.h>
int main()
{
int a,b,c;
float  d,e,f,w1,w2,w3;
printf("Введите число a=");
scanf("%d",&a);
printf("Введите число b=");
scanf("%d",&b);
printf("Введите число c=");
scanf("%d",&c);
printf("Введите число d=");
scanf("%f",&d);
printf("Введите число e=");
scanf("%f",&e);
printf("Введите число f=");
scanf("%f",&f);
if (c==0||b==0||e==0||f==0||d==0)
printf("Выражение не имеет смысла\n");
else
{
w1=3+a/(b*c)+(a*b)/c+d/(e*f)+f/(d*e);
system("clear");
printf("w1=%f\n",w1);
}
w2=a*c-b-c+b*c;
system ("clear");
printf("w2=%f\n",w2);
if (b==0)
printf("Выражение не имеет смысла\n");
else {
w3=d*(a/b)-(c/b)*e+2.5;
system("clear");
printf("w3=%f\n",w3);}

return 0;
}

