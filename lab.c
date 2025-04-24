#include "lab.h"

void lab1()
{
    printf("Задание: найти корни квадратного уравнения\n");
    float A, B, C, X1, X2;
    printf("Коэффициент A=");
    scanf("%f", &A);
    printf("Коэффициент B=");
    scanf("%f", &B);
    printf("Коэффициент C=");
    scanf("%f", &C);
    X1=(-B-sqrt(B*B-4*A*C))/(2*A);
    X2=(-B+sqrt(B*B-4*A*C))/(2*A);
    printf("X1=%f \n",X1);
    printf("X2=%f \n",X2);
}
void lab1d()
{
    printf("Задание: найти корни квадратного уравнения\n");
    printf("Создать 2 функции, считающие X1, X2 и вызвать их в main()\n");
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
    printf("X1=%f \n",X1);
    printf("X2=%f \n",X2);

}
void lab2()
{
    printf("Вычислить сумму первых элементов ряда. Вычисления проводить пока модуль очередного элемента больше эпсилон\n");
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
    printf("Вычислить сумму первых элементов ряда. Вычисления проводить пока модуль очередного элемента больше эпсилон\n");
    printf("Выходить из цикла при сумме больше 3 при помощи break\n");
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
    printf("Определить, являются ли все слова из потока словами одинаковой длины\n");
    int c, cnt, x;

    cnt=0;
    x=0;

    while((c=getchar())!=EOF)
    {
        if(c==' '||c=='.'||c=='\n'||c ==',')
        {
            if(x!=cnt&&x!=0)
            {
                printf("No\n");
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
    printf("Yes\n");
}
void process_line(char buffer[]);
void clear_input_buffer();
void lab4()
{
    printf("В символьной строке удалить все числа\n");
    char line[MAXLINE];
    clear_input_buffer();
    if(fgets(line, MAXLINE, stdin)) 
    {
        process_line(line);
        printf("Результат: %s", line);
    }
}
void process_line(char buffer[])
{
    int i = 0;
    int pos = 0;
    while(buffer[i]!='\0')
    {
        if(!(buffer[i]>='0' && buffer[i]<='9'))
        {
            buffer[pos++]=buffer[i];
        }
        i++;
    }
    buffer[pos]='\0';
}
void clear_input_buffer()
{
    int c;
    while((c=getchar())!='\n'&&c!=EOF){}
}
void lab4d()
{
    printf("Тема лабы");
    printf("Задание");
}
void lab5()
{
    printf("В массиве из 10 целых чисел сосчитать сумму четных и нечетных элементов. Обнулить элементы, чья сумма меньше.\n");
    int x[N], sr_even, sr_odd, i;
    sr_even=0;
    sr_odd=0;
    printf("Изначальный массив:\n");
    for(i=0; i<N; i++)
    {
        x[i]=rand()%1000;
        printf("%d\n",x[i]);
        if(i%2==0)
            sr_even=sr_even+x[i];
        else
            sr_odd=sr_odd+x[i];
    }
    if(sr_even>sr_odd)
    {
        for(i=1; i<N; i=i+2)
        {
            x[i]=0;
        }
    }
    else
    {
        for(i=0; i<N; i=i+2)
        {
            x[i]=0;
        }
    }
    printf("\nИтог:\n");
    for (i=0; i<N; i++)
        printf("%d \n",x[i]);
        printf("\n");
}
void lab5d()
{
    printf("В массиве из 10 целых чисел сосчитать сумму четных и нечетных элементов. Обнулить элементы, чья сумма меньше.\n");
    printf("Создать сортировку\n");

    int x[N];
    int sr_even;
    int sr_odd;
    int i,k,m,pm;

    sr_even = 0;
    sr_odd = 0;
    printf("Изначальный массив:\n");
    for(i = 0; i < N; i++)
    {
        x[i] = rand() % 1000;
        printf("%d\n", x[i]);
    }
    for (k = 0; k < N - 1; k++) {
        for (m = 0; m < N - k - 1; m++) {
            if (x[m] > x[m + 1]) {
                pm = x[m];
                x[m] = x[m + 1];
                x[m + 1] = pm;
            }
        }
    }
    printf("\nОтсортированный:\n");
    for(i = 0; i < N; i++)
    {
        printf("%d\n", x[i]);
    }
    for(i = 0; i < N; i++) {
        if(i % 2 == 0)
            sr_even += x[i];
        else
            sr_odd += x[i];
    }
    if(sr_even > sr_odd)
    {
        for(i = 1; i < N; i = i + 2)
        {
            x[i] = 0;
        }
    }
    else
    {
        for(i = 0; i < N; i = i + 2)
        {
            x[i] = 0;
        }
    }
    printf("\nИтог:\n");
    for (i = 0; i < N; i++)
        printf("%d \n", x[i]);
    printf("\n");
}
void lab6()
{
    printf("В двумерном массиве обнулять строки, среднее арифметическое которых меньше среднего массива\n");

    int x[K][M], j, i, pos, aver, stroka, sr_stroka;

    for(i = 0; i < K; i++)
    {
        for(j = 0; j < M; j++)
        {
            x[i][j]=rand()%1000;
        }
    }
    //Вывод исходного массива
    printf("Исходный массив %dx%d:\n", K, M);
    for(i = 0; i < K; i++)
    {
        for(j = 0; j < M; j++)
        {
            printf("%4d", x[i][j]);
        }
        printf("\n");
    }
    //Вычисление общего среднего массива
    aver=0;
    for(i = 0; i < K; i++)
    {
        for(j = 0; j < M; j++)
        {
            aver+=x[i][j];
        }
    }
    aver=aver/(K*M);
    //Вычисление среднего для строки
    for(i = 0; i < K; i++)
    {
        stroka=0;
        for(j = 0; j < M; j++)
        {
            stroka+=x[i][j];
        }
        sr_stroka=stroka/M;
        //Обнуление строки, если её среднее меньше общего
        if(sr_stroka < aver)
        {
            for(j = 0; j < M; j++)
            {
                x[i][j]=0;
            }
        }
    }
    //Вывод итогового массива
    printf("\nИтоговый массив:\n");
    for(i = 0; i < K; i++)
    {
        for(j = 0; j < M; j++)
        {
            printf("%4d", x[i][j]);
        }
        printf("\n");
    }
}
void lab6d()
{
    printf("В двумерном массиве обнулять строки, среднее арифметическое которых меньше среднего массива\n");
    printf("Транспонировать массив\n");
    int y[M][M],x[M][M], j, i, pos, aver, stroka, sr_stroka;

    for(i = 0; i < M; i++)
    {
        for(j = 0; j < M; j++)
        {
            x[i][j]=rand()%100;
        }
    }
    //Вывод исходного массива
    printf("Исходный массив %dx%d:\n", K, M);
    for(i = 0; i < M; i++)
    {
        for(j = 0; j < M; j++)
        {
            printf("%4d", x[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < M; i++)
    {
        for(j = 0; j < M; j++)
        {
            y[i][j]=x[j][i];
        }
    }
    printf("Транспонированный массив:\n");
    for(i = 0; i < M; i++)
    {
        for(j = 0; j < M; j++)
        {
          printf("%4d", y[i][j]);  
        }
        printf("\n");
    }
    //Вычисление общего среднего массива
    aver=0;
    for(i = 0; i < M; i++)
    {
        for(j = 0; j < M; j++)
        {
            aver+=y[i][j];
        }
    }
    aver=aver/(M*M);
    //Вычисление среднего для строки
    for(i = 0; i < M; i++)
    {
        stroka=0;
        for(j = 0; j < M; j++)
        {
            stroka+=y[i][j];
        }
        sr_stroka=stroka/M;
        //Обнуление строки, если её среднее меньше общего
        if(sr_stroka < aver)
        {
            for(j = 0; j < M; j++)
            {
                y[i][j]=0;
            }
        }
    }
    //Вывод итогового массива
    printf("\nИтоговый массив:\n");
    for(i = 0; i < M; i++)
    {
        for(j = 0; j < M; j++)
        {
            printf("%4d", y[i][j]);
        }
        printf("\n");
    }
}
