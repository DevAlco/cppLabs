#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void Mean()
{
    float a=0,b=0,MeanA=0,MeanG=0;
    
    cout << "Введите А: ";
    cin >> a;

    cout << "Введите Б: ";
    cin >> b;

    MeanA=(a+b)/2;
    MeanG=sqrt(a*b);

    cout << "Среднее арфметическое А и Б: " << MeanA << "Среднее Геометрическое А и Б: " << MeanG << endl;
}

void CircleS()
{
    float S,r=0;

    cout << "Введите радиус круга: ";
    cin >> r;

    S=2*M_PI*pow(r,2);

    cout << "Площадь круга равна: " << S << endl;
}

void TrianglePS()
{
    float a=0,P=0,S=0;

    cout << "Введите сторону равностороннего треугольника: ";
    cin >> a;

    P=3*a;
    S=pow(a,2)*sqrtf(3/4);

    cout << "Периметр треугольника: " << P << endl << "Площадь треугольника: " << S << endl;
}

void RingS()
{
    float r1=0,r2=0,S1=0,S2=0,Sr=0;

    cout << "Введите радиус первой окружности: ";
    cin >> r1;

    cout << "Введите радиус второй окружности: ";
    cin >> r2;

    if(r1 > r2)
    {
        S1=2*M_PI*pow(r1,2);
        S2=2*M_PI*pow(r2,2);

        Sr=S1-S2;
    }
    else
    {
        S1=2*M_PI*pow(r1,2);
        S2=2*M_PI*pow(r2,2);

        Sr=S2-S1;
    }

    cout << "Площадь кольца между окружнлстями 1 и 2 равна :" << Sr << endl;

}

void RectPS()
{
    int x1=0,x2=0,y1=0,y2=0,l1=0,l2=0;
    float P,S;

    cout <<" :";
    cin >> x1;
    cin >> y1;

    cout <<" :";
    cin >> x2;
    cin >> y2;

    l1 = sqrtf(y2-y1);
    l2 = sqrt(x2-x1);

    P=2*l1+2*l2;
    S=l1*l2;

    cout << "Периметр прямоугольника равен :" << P << endl << "Площадь прямоугольника равна :" << S <<endl;
}

void TriangleP()
{
    float a=0,h=0,b=0,P=0;

    cout << "Введите длинны основания и высоты равнобедренного треугольника :";
    cin >> a;
    cin >> h;

    b=sqrtf(pow((a/2),2)+pow(h,2));
    P=2*a+b;

    cout << "Периметр равнобедренного треугольника равен :" << P << endl;
}

void InvertDigits()
{
   int n=0,k=0;
 
    cout << "Введите целое положительное число :";
    cin >> k;

    while (k > 0)
    {
        n *= 10;
        n += k % 10;
        k /= 10;
    }
 
    cout << "Обратный порядок следования цифр введённого числа :" << n << endl;
}

void SumRange()
{
    int a=0,b=0,sum=0;

    cout << "Введите первое число :";
    cin >> a;
    cout << "Введите второе число :";
    cin >> b;

    if(a==b) cout << "Числа одинаковые." << endl;

    if (a>b)
    {
        while(a > b)
        {
            sum += b;
            b++;
        }
    }
    else
    {
         while(a<b)
        {
            sum += a;
            a++;
        }
    }

    cout << "Сумма всех чисел от первого до второго :" << sum << endl;
}

void PTrap()
{
    float a1=0,b1=0,h1=0,P1=0,a2=0,b2=0,h2=0,P2=0,sum=0;

    cout << "Введите основания и высоту первой трапеции :";
    cin >> a1;
    cin >> b1;
    cin >> h1;

    cout << "Введите основания и высоту второй трапеции :";
    cin >> a2;
    cin >> b2;
    cin >> h2;

    P1=a1+b1+2*sqrtf(pow(h1,2)+pow((a1-b2),2)/4);
    P2=a2+b2+2*sqrtf(pow(h2,2)+pow((a2-b2),2)/4);
    sum=P1+P2;

    cout <<"Периметр первой трапеции :" << P1 << endl;
    cout <<"Периметр второй трапеции :" << P2 << endl;
    cout <<"Сумма периметров трапеций :" << sum << endl;
}

void Quarter()
{
    float x=0,y=0;

    cout << "Введите не нулевые координаты точки :" << endl;
    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;

    if(x > 0)
    {
        if (y > 0)
        {
            cout << "Точка находится во II координатной четверти" << endl;
        }
        else if(y < 0)
        {
            cout << "Точка находится в III координатной четверти" << endl;
        }
        else cout << "Координата равна нулю!" << endl;
    }
    else if(x < 0)
    {
        if (y > 0)
        {
            cout << "Точка находится во I координатной четверти" << endl;
        }
        else if(y < 0)
        {
            cout << "Точка находится в IV координатной четверти" << endl;
        }
        else cout << "Координата равна нулю!" << endl;
    }
    else cout << "Координата равна нулю!" << endl; 
}

void DigitCountSum()
{
    int d=0,i=0,sum=0;

    cout << "Введите целое число: " << endl;
    cin >> d;

    while(d/10 > 0)
    {
        sum+=d%10;
        i++;
        d/=10;
    }

    cout << "Сумма цифр введенного числа: " << sum << " колличество цифр: " << i << endl;

}

void Calc()
{
    int o=0,a=0,b=0;

    cout << "введите два целых неотрицательных числа" << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "ведите номер желаемой операции\n1-вычитание\n2-умножение\n3-деление\n любое другое число - сложение.\n #: ";
    cin >> o;

    switch (o)
    {
    case 1:
        cout << "Разность: " << a-b << endl;
        break;
    case 2:
        cout << "Произведение: " << a*b << endl;
        break;
    case 3:
        cout << "Частное: " << a/b << endl;
    default:
        cout << "Сумма: " << a+b << endl;
        break;
    }

}

int Storona(int &px1, int &py1, int &px2, int &py2)
{

        int dx, dy;
    
        dx = px2 - px1;
        dy = py2 - py1;
        return sqrt(pow(dx, 2) + pow(dy, 2));    

}

void TriangleP2()
{  
   
    int x1, y1, x2, y2, x3, y3, P;
    cout << "Введите координаты вершин треугольника" << endl;
    cout << "Вершина 1" << endl;
    cout << "x: ";
    cin >> x1;
    cout << "y: ";
    cin >> y1;
    cout << "Вершина 2" << endl;
    cout << "x: ";
    cin >> x2;
    cout << "y: ";
    cin >> y2;
    cout << "Вершина 3" << endl;
    cout << "x: ";
    cin >> x3;
    cout << "y: ";
    cin >> y3;
    
    P = Storona(x1, y1, x2, y2) + Storona(x1, y1, x3, y3) + Storona(x2, y2, x3, y3);
    cout << "Периметр треугольника: " << P << endl;
    
}

void DegToRad()
{
    float a=0;
    
    cout << "Введите угол в градусах: ";
    cin >> a;

    cout << "Введённый угол в радианах: " << (a*(M_PI/180)) << "rad" << endl;
}

void IsLeapYear()
{
        int g=0;

    cout << "введите год: ";
    cin >> g;

    if((g%4 == 0) | (g%4 == 0 & g%100 == 0 & g%400 == 0))
    {
        cout << "Високосный." << endl;
    } else cout << "Не високосный" << endl;
}

int Fact(int n)
{
    if (n > 1)
    {
        return n*Fact(n-1);
    }
    return 1;

}

int Fact2(int n)
{
    if (n > 1)
    {
        return n*Fact2(n-2);
    }
    return 1;
}

float PowerN(float x, int n)
{
    if (n==0)
    {
        return 1;
    }
    else if (n > 1)
    {
        return x * PowerN(x,n-1);
    }
    else 
    {
        return 1/PowerN(x,-1*n);
    }
}

float SqrtK(float x, int k, int n)
{
    if(n == 0)
        return 1;
    return SqrtK(x, k, n-1) - (SqrtK(x, k, n-1) - x/pow(SqrtK(x, k, n-1), k-1)) / k;
}

int FibRec(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return FibRec(n - 1) + FibRec(n - 2);
}

int C(int m, int n)
{
    if (m == 0)
    {
        return 1;
    }
    else if (m == n)
    {
        return 1;
    }else if ( n > 0 & m < n)
    return C(m,n-1) + C(m-1,n-1);
}

int NOD(int a, int b)
{
    if (a != 0)
    {
        return NOD(b%a,a);
    }
    return b;
}

int MinRec(int *a, int n)
{
    if(n>1) return min(a[n-1],MinRec(a,n-1));
    return *a;
}

int Digits(char* s, int c)
{
    if (s == 0) return c;
    else if (*s >= '0' & *s <= '9' ) return Digits(s++,c++);
}

bool Simm(string s)
{
    if (s.length()%2 != 0) return false;
    else if (s.front() != s.back()) return false;
    else if (s.length() == 2) return true;
    return Simm(s.substr(1, s.size() - 1));
}

int BinSum( int a, int b)
{
    int s = 0;
    int carryin = 0;
    int k = 1;
    int temp_a = a;
    int temp_b = b;
    int ak = a & k, bk = b & k;
    int carryout = (ak & bk) | (ak & carryin) | (bk & carryin);
    if (temp_a || temp_b)
    {
        s |= (ak ^ bk ^ carryin);
        carryin = carryout << 1;
        k <<= 1;
        temp_a >>= 1, temp_b >>= 1;
        return BinSum(temp_a,temp_b);
    } else return s | carryin;
}


int Root(int a, int b, int eps)
{
     int  ksi = ( a + b ) / 2;
       if (    ( fabs(a-b) <= eps )
            || ( fabs(ksi) <= eps )  )
          return ( a + b ) / 2;
 
       if (a*ksi <= 0.0 )
          Root( a, ksi, eps );
       else
          Root( ksi, b, eps );
}

float MinX(int* x,int n)
{  
    return  minl( x, n, 0 );
}

int minl( int  X[], const int &n, int k )
 {
      if ( k == n - 1 )
          return X[ n - 1 ];
   return  std::min( minl( X, n, k + 1 ), X[ k ] );
 }

bool Simm2(string s, int i, int j)
{
    if (i>=j) return true;
    if (s[i]==s[j]) return Simm2(s,++i,--j);
    else return false;
}

int Reverse(int n, int a)
{
    if (n==0)
        return a;
    a*=10;
    a+=n%10;
    n/=10;
    Reverse (n, a);
}

string BaseSwitch(int n,int p,string s)
{   
    if(n%p == 0) return s;
    else
    {
    s.append(to_string(n%p));
    return BaseSwitch(n/p,p,s);
    }
}

