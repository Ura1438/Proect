#include "lab.h"

void lab1()
{
printf(" Задание: найти корни квадратного уравнения ");
float A, B, C, X1, X2;
printf("Коэффициент A=");
scanf("%f", &A);
printf("Коэффициент B=");
scanf("%f", &B);
printf("Коэффициент C=");
scanf("%f", &C);
X1=(-B-sqrt(B*B-4*A*C))/(2*A);
X2=(-B+sqrt(B*B-4*A*C))/(2*A);
printf("X1=%f",X1);
printf("X2=%f",X2);
}
void lab1d()
{
printf(" Задание: найти корни квадратного уравнения ");
printf(" Создать 2 функции, считающие X1, X2 и вызвать их в main()");
float x1(float A, float B, float C)
{
float X1=(-B-sqrt(B*B-4*A*C))/(2*A);
return X1;
}

float x2(float A, float B, float C)
{
float X2=(-B+sqrt(B*B-4*A*C))/(2*A);
return X2;
}

float A, B, C, X1, X2;
printf("Коэффициент A=");
scanf("%f", &A);
printf("Коэффициент B=");
scanf("%f", &B);
printf("Коэффициент C=");
scanf("%f", &C);
X1=x1(A,B,C);
X2=x2(A,B,C);
printf("X1=%f",X1);
printf(" X2=%f",X2);

}
void lab2()
{
printf(" Вычислить сумму первых элементов ряда. Вычисления проводить пока модуль очередного элемента больше эпсилон ");
float s,a,b,c,eps;
int i;

printf("eps=");
scanf("%f",&eps);

s=0;
i=0;
c=1;
b=1;
a=c/b;

while(a>eps)
{
s=s+a;
c=c*(c+2);
b=b*(b+3);
a=c/b;
i=i+1;
}

printf("n=%d, s=%f\n", i,s);
}
void lab2d()
{
printf(" Вычислить сумму первых элементов ряда. Вычисления проводить пока модуль очередного элемента больше эпсилон ");
printf(" Выходить из цикла при сумме больше 3 при помощи break");
float s,a,b,c,eps;
int i;

printf("eps=");
scanf("%f",&eps);

s=0;
i=0;
c=1;
b=1;
a=c/b;

while(a>eps)
{
s=s+a;
c=c*(c+2);
b=b*(b+3);
a=c/b;
i++;
if(s>3)
{
break;
}
}

printf("n=%d, s=%f\n", i,s);
}
void lab3()
{
printf(" Определить, являются ли все слова из потока словами одинаковой длины ");
int c, cnt, x;

cnt = 0;
x=0;

while((c=getchar())!=EOF)
{
if( c == ' ' || c == '.' || c == '\n' || c == ',' )
{
if(x!=cnt && x!=0)
{
printf("No");
break;
}
else
{
x=cnt;
cnt=0;
}
}
else
{
cnt=cnt+1;
}
}
printf("Yes");
}
void lab4()
{
printf("Тема лабы");
}
void lab4d()
{
printf(" Тема лабы");
printf(" Задание");
}
void lab5()
{
printf("Тема лабы");
}
void lab5d()
{
printf(" Тема лабы");
printf(" Задание");
}
void lab6()
{
printf("Тема лабы");
}
void lab6d()
{
printf(" Тема лабы");
printf(" Задание");
}
