#define _USE_MATH_DEFINES
#include <iostream>

#include <cmath>
using namespace std;

void Task1Func1() 
{
float x,y=0;

cout << "x: " << endl;
cin >> x;

y=3*pow(x,2)+sin(x + 2);

cout << "y= " << y << endl;
}
void Task1Func2() 
{
float a,x,y=0;

cout << "x: " << endl;
cin >> x;

cout << "a: " << endl;
cin >> a;

y=a*pow(x,2)+cos(2*x+1);

cout << "y= " << y << endl;
}
void Task1Func3() 
{
float a,b,x,y=0;

cout << "x: " << endl;
cin >> x;

cout << "a: " << endl;
cin >> a;

cout << "b: " << endl;
cin >> b;

y=a*x+b*sin(2*x+2);

cout << "y= " << y << endl;
}
void Task1Func4() 
{
float a,x,y=0;

cout << "x: " << endl;
cin >> x;

cout << "a: " << endl;
cin >> a;

y=a*pow(x,3)+cos(3*x+1);

cout << "y= " << y << endl;
}
void Task1Func5() 
{
float a,x,y=0;

cout << "a: " << endl;
cin >> a;

cout << "x: " << endl;
cin >> x;

y=pow(x,2)/a+cos(2*x-1);

cout << "y= " << y << endl;
}
void Task1Func6() 
{
float a,x,y=0;

cout << "x: " << endl;
cin >> x;

cout << "a: " << endl;
cin >> a;

y=a/x+2*pow(x,2);

cout << "y= " << y << endl;
}
void Task1Func7() 
{
float x,y=0;

cout << "x: " << endl;
cin >> x;

y=3*pow(x,2)-2*x+1;

cout << "y= " << y << endl;
}
void Task1Func8() 
{
float x,y=0;

cout << "x: " << endl;
cin >> x;

y=(1/2)*pow(x,2)-3*x+1;

cout << "y= " << y << endl;
}
void Task1Func9() 
{
float a,x,y=0;

cout << "x: " << endl;
cin >> x;

cout << "a: " << endl;
cin >> a;

y=1/(pow(x,2)+1)-a;

cout << "y= " << y << endl;
}
void Task1Func10() 
{
float a,x,y=0;

cout << "a: " << endl;
cin >> a;

cout << "x: " << endl;
cin >> x;

y=a/(pow(x,2)+1)-cos(2*x-1);

cout << "y= " << y << endl;
}
void Task1Func11() 
{
float x,y=0;

cout << "x: " << endl;
cin >> x;

y=pow(x,3)-2*pow(x,2)+4;

cout << "y= " << y << endl;
}
void Task1Func12() 
{
float a,b,x,y=0;

cout << "a: " << endl;
cin >> a;

cout << "b: " << endl;
cin >> b;

cout << "x: " << endl;
cin >> x;

y=a*pow(x,2)+b*pow(x,3)-8;

cout << "y= " << y << endl;
}
void Task1Func13() 
{
float a,b,x,y=0;

cout << "a: " << endl;
cin >> a;

cout << "b: " << endl;
cin >> b;

cout << "x: " << endl;
cin >> x;

y=a*sqrt(pow(x,2)+4)-b;

cout << "y= " << y << endl;
}
void Task1Func14() 
{
float x,y;

cout << "x: " << endl;
cin >> x;

y=cos(2*x-1)+sin(x);

cout << "y= " << y << endl;
}
void Task1Func15() 
{
float a,b,x,y=0;

cout << "a: " << endl;
cin >> a;

cout << "b: " << endl;
cin >> b;

cout << "x: " << endl;
cin >> x;

y=a*sqrt(x)+b*pow(x,2);

cout << "y= " << y << endl;
}

void Task2Func1() 
{
float a,b,c,v=0,s=0;

cout << "a: " << endl;
cin >> a;

cout << "b: " << endl;
cin >> b;

cout << "c: " << endl;
cin >> c;

v=a*b*c;
s=2*(a*b+b*c+a*c);

cout << "volume= " << v << endl;
cout << "area= " << s << endl;
}
void Task2Func2() 
{
float l=0,s=0,r;

cout << "r: " << endl;
cin >> r;

l=2*M_PI*r;
s=M_PI*pow(r,2);

cout << "circle length= " << l << endl;
cout << "circle area= " << s << endl;
}
void Task2Func3() 
{
float a,b,c=0,p=0;

cout << "a: " << endl;
cin >> a;

cout << "b: " << endl;
cin >> b;

c=sqrt(pow(a,2)+pow(b,2));
p=a+b+c;

cout << "hipotenuse= " << c << endl;
cout << "perimeter= " << p << endl;
}
void Task2Func4() 
{
float r1,r2,s1=0,s2=0,s3=0;

cout << "r1: " << endl;
cin >> r1;

cout << "r2: " << endl;
cin >> r2;

s1=M_PI*pow(r1,2);
s2=M_PI*pow(r2,2);
s3=s1-s2;

cout << "s1= " << s1 << endl;
cout << "s2= " << s2 << endl;
cout << "s3= " << s3 << endl;
}
void Task2Func5() 
{
float x1,y1,x2,y2,p=0,s=0;

cout << "x1: " << endl;
cin >> x1;

cout << "y1: " << endl;
cin >> y1;

cout << "x2: " << endl;
cin >> x2;

cout << "y2: " << endl;
cin >> y2;

p=2*(abs(x1-x2)+abs(y1-y2));
s=abs(x1-x2)*abs(y1-y2);

cout << "perimeter= " << p << endl;
cout << "area= " << s << endl;
}
void Task2Func6() 
{
float x1,y1,x2,y2,s=0;

cout << "x1: " << endl;
cin >> x1;

cout << "y1: " << endl;
cin >> y1;

cout << "x2: " << endl;
cin >> x2;

cout << "y2: " << endl;
cin >> y2;

s=sqrt(pow(abs(x2-x1),2)+pow(abs(y2-y1),2));

cout << "distance= " << s << endl;
}
void Task2Func7() 
{
float x1,y1,x2,y2,x3,y3,a=0,b=0,c=0,p=0,half_p=0,s=0;

cout << "x1: " << endl;
cin >> x1;

cout << "y1: " << endl;
cin >> y1;

cout << "x2: " << endl;
cin >> x2;

cout << "y2: " << endl;
cin >> y2;

cout << "x3: " << endl;
cin >> x3;

cout << "y3: " << endl;
cin >> y3;

a=sqrt(pow(abs(x2-x1),2)+pow(abs(y2-y1),2));
b=sqrt(pow(abs(x3-x2),2)+pow(abs(y3-y2),2));
c=sqrt(pow(abs(x1-x3),2)+pow(abs(y1-y3),2));
p=(a+b+c);
half_p=p/2;
s=sqrt(p*(p-a)*(p-b)*(p-c));

cout << "perimeter= " << p << endl;
cout << "area= " << s << endl;
}
void Task2Func8() 
{
float f,c=0;

cout << "farenheit temperature: " << endl;
cin >> f;

c=(f-32)*(5/9);

cout << "celsius= " << c << endl;
}
void Task2Func9() 
{
int x,y,a,b,c=0,d=0,r=0;

cout << "chocolate ammount: " << endl;
cin >> x;

cout << "candy ammount: " << endl;
cin >> y;

cout << "chocolate price: " << endl;
cin >> a;

cout << "candy price: " << endl;
cin >> b;

c=a/x;
d=b/y;
r=c/d;

cout << "chocolate price= " << c << endl;
cout << "candy price= " << d << endl;
cout << "proportion= " << r << endl;
}
void Task2Func10() 
{
float a1,b1,c1,a2,b2,c2,x=0,y=0,d=0;

cout << "a1: " << endl;
cin >> a1;

cout << "b1: " << endl;
cin >> b1;

cout << "c1: " << endl;
cin >> c1;

cout << "a2: " << endl;
cin >> a2;

cout << "b2: " << endl;
cin >> b2;

cout << "c2: " << endl;
cin >> c2;

d=a1*b2-a2*b1;
x=abs(c1*b2-c2*b1)/d;
y=abs(a1*c2-a2*c1)/d;

cout << "x= " << x << endl;
cout << "y= " << y << endl;
}
void Task2Func11() 
{
float a,rad=0;

cout << "angle in degrees: " << endl;
cin >> a;

rad=a*(M_PI/180);

cout << "radians= " << rad << endl;
}
void Task2Func12() 
{
float v1,v2,s,t,s_total=0;

cout << "first car speed: " << endl;
cin >> v1;

cout << "second car speed: " << endl;
cin >> v2;

cout << "distance between cars: " << endl;
cin >> s;

cout << "time: " << endl;
cin >> t;

s_total=s+(t*(v1+v2));

cout << "distance= " << s_total << endl;
}
void Task2Func13() 
{
float a,b,c,ab,bc,sum=0;

cout << "a: " << endl;
cin >> a;

cout << "b: " << endl;
cin >> b;

cout << "c: " << endl;
cin >> c;

ab=abs(b-a);
bc=abs(c-b);
sum=ab+bc;

cout << "summ ab+bc= " << sum << endl;
}
void Task2Func14() 
{
float a,b,sum=0,dif=0,mult=0,rel=0;

cout << "a: " << endl;
cin >> a;

cout << "b: " << endl;
cin >> b;

sum=sqrt(a)+sqrt(b);
dif=sqrt(a)-sqrt(b);
mult=sqrt(a)*sqrt(b);
rel=sqrt(a)/sqrt(b);

cout << "summ= " << sum << endl;
cout << "diference= " << dif << endl;
cout << "product= " << mult << endl;
cout << "quotient= " << rel << endl;
}
void Task2Func15() 
{
float v_boat,v_river,t1,t2,s=0;

cout << "speed of the boat: " << endl;
cin >> v_boat;

cout << "speed of the river flow: " << endl;
cin >> v_river;

cout << "time travel at the lake: " << endl;
cin >> t1;

cout << "time travel at the river: " << endl;
cin >> t2;

s=(v_boat*t1)+((v_boat-v_river)*t2);

cout << "distance= " << s << endl;
}

void Task3Func1() 
{
float a,x,y=0;

cout << "a: " << endl;
cin >> a;

cout << "x: " << endl;
cin >> x;

if (x > 0)
    {
        cout << "x > 0" << endl;
        y=a*pow(x,2)+1;
    } 
    else 
    {
        cout << "x <= 0" << endl;
        y=a*x-1;
    }

    cout << "y= " << y << endl;
}
void Task3Func2() 
{
float a,x,y=0;

cout << "a: " << endl;
cin >> a;


cout << "x: " << endl;
cin >> x;

if (x >= 1)
    {
        cout << "x >= 1" << endl;
        y=a*x+1;
    } 
    else 
    {
        cout << "x < 1" << endl;
        y=pow(x,2)-1;
    }

    cout << "y= " << y << endl;
}
void Task3Func3() 
{
float a,x,y=0;

cout << "a: " << endl;
cin >> a;

cout << "x: " << endl;
cin >> x;

if (x < 0)
    {
        cout << "x < 0" << endl;
        y=3*pow(a,2);
    } 
    else 
    {
        cout << "x >= 0" << endl;
        y=4*a*x-1;
    }

    cout << "y= " << y << endl;
}
void Task3Func4() 
{
float a,x,y=0;

cout << "a: " << endl;
cin >> a;

cout << "x: " << endl;
cin >> x;

if (x > 4)
    {
        cout << "x > 4" << endl;
        y=2*pow(a,2);
    } 
    else 
    {
        cout << "x <= 4" << endl;
        y=3*x-1;
    }

    cout << "y= " << y << endl;
}
void Task3Func5() 
{
float a,x,y=0;

cout << "a: " << endl;
cin >> a;

cout << "x: " << endl;
cin >> x;

if (x > 2)
    {
        cout << "x > 2" << endl;
        y=2*a*x-2;
    } 
    else 
    {
        cout << "x <= 2" << endl;
        y=3*pow(a,2)-2*x;
    }

    cout << "y= " << y << endl;
}
void Task3Func6() 
{
float a,x,y=0;

cout << "a: " << endl;
cin >> a;

cout << "x: " << endl;
cin >> x;

if (x > 1)
    {
        cout << "x > 1" << endl;
        y=2*a*x-1;
    } 
    else 
    {
        cout << "x <= 1" << endl;
        y=x;
    }

    cout << "y= " << y << endl;
}
void Task3Func7() 
{
float a,x,y=0;

cout << "a: " << endl;
cin >> a;

cout << "x: " << endl;
cin >> x;

if (x > 2)
    {
        cout << "x > 2" << endl;
        y=pow(x,2);
    } 
    else 
    {
        cout << "x <= 2" << endl;
        y=2*a-1;
    }

    cout << "y= " << y << endl;
}
void Task3Func8() 
{
float x,y=0;

cout << "x: " << endl;
cin >> x;

if (x > 2)
    {
        cout << "x > 2" << endl;
        y=cos(2*x-1);
    } 
    else 
    {
        cout << "x <= 2" << endl;
        y=sin(3*x+1);
    }

    cout << "y= " << y << endl;
}
void Task3Func9() 
{
float x,y=0;

cout << "x: " << endl;
cin >> x;

if (x > 2)
    {
        cout << "x > 2" << endl;
        y=2*pow(x,3)-2*x-1;
    } 
    else 
    {
        cout << "x <= 2" << endl; 
        y=3*pow(x,3)-2*x+1;
    }

    cout << "y= " << y << endl;
}
void Task3Func10() 
{
float a,x,y=0;

cout << "a: " << endl;
cin >> a;

cout << "x: " << endl;
cin >> x;

if (x > 1)
    {
        cout << "x > 1" << endl;
        y=2*a*pow(x,2)-1;
    } 
    else 
    {
        cout << "x <= 1" << endl;
        y=1/a;
    }

    cout << "y= " << y << endl;
}
void Task3Func11() 
{
float a,x,y=0;

cout << "a: " << endl;
cin >> a;

cout << "x: " << endl;
cin >> x;

if (x >= 0)
    {
        cout << "x >= 0" << endl;
        y=a*sqrt(x)+1;
    } 
    else 
    {
        cout << "x < 0" << endl;
        y=a*x-1;
    }

    cout << "y= " << y << endl;
}
void Task3Func12() 
{
float a,x,y=0;

cout << "a: " << endl;
cin >> a;

cout << "x: " << endl;
cin >> x;

if (x >= 0)
    {
        cout << "x >= 0" << endl;
        y=sqrt(x)+a;
    } 
    else 
    {
        cout << "x < 0" << endl;
        y=(a/x)-1;
    }

    cout << "y= " << y << endl;
}
void Task3Func13() 
{
float a,x,y=0;

cout << "a: " << endl;
cin >> a;

cout << "x: " << endl;
cin >> x;

if (x > 0)
    {
        cout << "x > 0" << endl;
        y=(1/x)+a;
    } 
    else 
    {
        cout << "x <= 0" << endl;
        y=pow(x,2)-1;
    }

    cout << "y= " << y << endl;
}
void Task3Func14() 
{
float a,x,y=0;

cout << "a: " << endl;
cin >> a;

cout << "x: " << endl;
cin >> x;

if (x > (M_PI/2))
    {
        cout << " x > Pi/2" << endl;
        y=cos(x);
    } 
    else 
    {
        cout << "x <= Pi/2" << endl;
        y=sin(x);
    }

    cout << "y= " << y << endl;
}
void Task3Func15() 
{
float a,x,y=0;

cout << "a: " << endl;
cin >> a;

cout << "x: " << endl;
cin >> x;

if (x > 2)
    {
        cout << "x > 2" << endl;
        y=sqrt(x-2);
    } 
    else 
    {
        cout << "x <= 2" << endl;
        y=pow((x-2),2)+1;
    }

    cout << "y= " << y << endl;
}

void Task4Func1() 
{
int k, n;
    cout << "K:";
    cin >> k;
 
    cout << "N:";
    cin >> n;
 
    for  (int i = 0; i < n;  ++i)
    {
        cout << k << endl;
    }
        
}
void Task4Func2() 
{
int a, b;
 
    cout << "A:";
    cin >> a;
 
    cout << "B:";
    cin >> b;
 
    for  (int i = a+1; i<b;  ++i)
     cout << i << endl;
    
    cout << "N:" << b-a+1 << endl;
}
void Task4Func3() 
{
 int a, b;
    cout << "A:";
    cin >> a;
    cout << "B:";
    cin >> b;
    for (int i = b-1; i>a; --i)
        cout << i << endl;

    cout << "N:" << b-a+1 << endl;
}
void Task4Func4() 
{
float c=20.4f;
   
    for  (int i = 1; i<=10;  ++i)
    {
        cout << i << " kg = " << c*i << endl;
    }
}
void Task4Func5() 
{
int a, b,h;
    cout << "A:";
    cin >> a;
    cout << "B:";
    cin >> b;
    cout << "H:";
    cin >> h;
    for (int i = a+h; i>a; i+=h)
        cout << pow(i,2) << endl;

}
void Task4Func6() 
{
int a, b,h;
    cout << "A:";
    cin >> a;
    cout << "B:";
    cin >> b;
    cout << "H:";
    cin >> h;
    for (int i = a+h; i>a; i+=h)
        if (i >= 0)
            cout << i << endl;
}
void Task4Func7() 
{
int a, b;
    cout << "A:";
    cin >> a;
    cout << "B:";
    cin >> b;
    int sum = 0;
    for (int i = a; i <= b; ++i)
    {
        sum +=i;
    } 
    cout << "Sum = " << sum << endl;
}
void Task4Func8() 
{
int a, b, c;
    cout << "a:";
    cin >> a;
    cout << "b:";
    cin >> b;
    
    for (int i = a; i <= b; i++) 
    {
        c *= i;
    }
    cout << c << endl;
}
void Task4Func9() 
{
int a, b, rez=0;
    cout <<"a:";
    cin >> a;
    cout << "b:";
    cin >> b;
 
    for (int i = a; i <= b; ++i)
        rez += i * i;
    cout << "Rez: " << rez << endl;
}
void Task4Func10() 
{
int n;
    cout << "Cost=";
    cin >> n;
 
    for  (float m = 1.2f; m<=2.0f;  m+=0.2f)
        cout << "kg: " << m << "cost: " << n*m << endl;
 
}
void Task4Func11() 
{
int n,rez=0;
    cout << "N:";
    cin >> n;
 
    for (int i = 1; i <= (2 * n - 1); i += 2) 
    {
        rez += i;
    }

    cout << rez;
}
void Task4Func12() 
{
int n;
float a,rez=1.0f;
    cout << "A:";
    cin >> a;

   cout << "N:";
   cin >> n;
 
   for  (int i =1; i<=n; ++i){
      rez *= a;
     cout << rez << endl;
   }
}
void Task4Func13() 
{
int n, K;
    cout << "N:";
    cin >> n;

    for(int k; pow(k,2)<=n; k++)
        K=k;
    cout << "K:" << K << endl;
}
void Task4Func14() 
{
int n, K;
    cout << "N:";
    cin >> n;

    for(int k; pow(3,k)<n; k++)
        K=k;
    cout << "K:" << K << endl;
}
void Task4Func15() 
{
int n;
float a,b,h;
    cout << "N:";
    cin >> n;
 
    cout << "A:";
    cin >> a;
 
    cout << "B:";
    cin >> b;
 
    h = (b - a) / n;
    cout << h;
 
    for (int i = 0; i <= n; ++i) 
        cout << a + i * h << endl;
}

void Task5Func1() 
{
int n=0,i=1;
float sum=0.0f;

cout << "n " << endl;
cin >> n;

while(i <= n)
    {
        sum += 1/pow(2, i);
        i++;
    }

cout << "Сумма равна " << sum << endl;
}
void Task5Func2() 
{
int n=0,i=1;
float x=0.0f,sum=0.0f;

cout << "n " << endl;
cin >> n;

cout << "x " << endl;
cin >> x;

while(i <= n)
    {
        if(i == 1) 
        {
            sum += cos(x);
        }else
        {
            sum += pow(cos(x),i)/i;
        }

        i++;
    }

cout << "Сумма равна " << sum << endl;
}
void Task5Func3() 
{
int n=0,i=1;
float sum=0.0f;

cout << "n " << endl;
cin >> n;

while(i <= n)
    {
        sum += pow(-1, i)*pow(3,i);
        i++;
    }

cout << "Сумма равна " << sum << endl;
}
void Task5Func4() 
{
int n=0,i=1;
float sum=0.0f;

cout << "n " << endl;
cin >> n;

while(i <= n)
    {
        sum += 1/sin(i);
        i++;
    }

cout << "Сумма равна " << sum << endl;
}
void Task5Func5() 
{
int n=0,i=1;
float sum=0.0f;

cout << "n " << endl;
cin >> n;

while(i <= n)
    {
        sum += pow(-1, i+1)*pow(i,3);
        i++;
    }

cout << "Сумма равна " << sum << endl;
}
void Task5Func6() 
{
int n=0,i=1;
float sum=0.0f;

cout << "n " << endl;
cin >> n;

while(i <= n)
    {
        sum += pow(-1,i+1)*cos(i);
        i++;
    }

cout << "Сумма равна " << sum << endl;
}
void Task5Func7() 
{
 int n;
 float x, x1, rez;
    cout<<"|X| < 1: ";
    cin>>x;
 
    x1 = x; 
    rez = x;

    cout<<"N:";
    cin>>n;
 
    for (int i = 2; i <= n; ++i) 
    {
        x1 *= -1 * x;
        rez += x1 / i;
    }

    cout<< rez;
}
void Task5Func8() 
{
int n=0,i=1;
float sum=0.0f;

cout << "n " << endl;
cin >> n;

while(i <= n)
    {
        sum += pow(-1,i+1)*cos(i);
        i++;
    }

cout << "Сумма равна " << sum << endl;
}
void Task5Func9() 
{
int n=0,i=1;
float sum=0.0f,x=0.0f;

cout << "n " << endl;
cin >> n;

cout << "x" << endl;
cin >> x;

while(i <= n)
    {
        sum += sin(pow(x,i));
        i++;
    }

cout << "Сумма равна " << sum << endl;

}
void Task5Func10() 
{
int n;
float n1 = 1.0f, rez = 1.0f;
    cout<<"N:";
    cin>>n;
 
    for (int i = 1; i <= n; ++i) 
    {
        n1 *= (float)i;
        rez += 1 / n1;
    }
    cout<< rez << endl;
}
void Task5Func11() 
{
int n;
float rez = 0;
    cout << "n=";
    cin >> n;
 
    
    for  (int i =0; i<=n; i++)
      rez += pow(n+i,2);
 
    cout << "Result=" << rez << endl;
}
void Task5Func12()
{
int n;
float n1 = 1, rez = 0;
    cout<<"N:";
    cin>>n;
 
    for (int i = 1; i <= n; ++i) 
    {
        n1 *= (float)i;
        rez += n1;
    }
    cout<< rez << endl;
}
void Task5Func13() 
{
int n;
float x,x1 = 1.0f, n1 = 1.0f, rez = 1.0f;
    cout<<"X:";
    cin>>x;
 
    cout<<"N:";
    cin>>n;
 
    for (int i = 1; i <= n; ++i) 
    {
        n1 *= (float)i;
        x1 *= x;
        rez += x1 / n1;
    }

    cout<< rez << endl;
}
void Task5Func14() 
{
int n=0,i=1;
float sum=0.0f,x=0.0f;

cout << "n " << endl;
cin >> n;

cout << "x" << endl;
cin >> x;

while(i <= n)
    {
        sum += pow(-1,i)*pow(x,i);
        i++;
    }

cout << "Сумма равна " << sum << endl;

}
void Task5Func15() 
{
int n, k=1;
float x, x1, rez;

    cout<<"X:";
    cin>>x;
 
    x1=x;
    rez=x;
    
    cout<<"N:";
    cin>>n;
 
    for (int i = 2; i <= n; ++i) 
    {
        k += 2;
        x1 *= -1 * x * x;
        rez += x1 / k;
    }

    cout<< rez << endl;
}

int main () 
{
    char c = '\0';
    do
    {
        int i=0;
        cout << "Введи номер раздела" << endl;
        cin >> i;
    
        if(i == 1)
        {
            int j=0;
            cout << "Введи номер задачи" << endl;
            cin >> j;
            switch (j)
            {
                case 1:
                    Task1Func1();
                    break;
                case 2:
                    Task1Func2();
                    break;
                case 3:
                    Task1Func3();
                    break;
                case 4:
                    Task1Func4();
                    break;
                case 5:
                    Task1Func5();
                    break;
                case 6:
                    Task1Func6();
                    break;
                case 7:
                    Task1Func7();
                    break;
                case 8:
                    Task1Func8();
                    break;
                case 9:
                    Task1Func9();
                    break;
                case 10:
                    Task1Func10();
                    break;
                case 11:
                    Task1Func11();
                    break;
                case 12:
                    Task1Func12();
                    break;
                case 13:
                    Task1Func13();
                    break;
                case 14:
                    Task1Func14();
                    break;
                case 15:
                    Task1Func15();
                    break;
                default:
                    cout << "Задания не существует" << endl;
                    break;
            }
        }
        else if (i == 2)
        {
            int j=0;
            cout << "Введи номер задачи" << endl;
            cin >> j;
            switch (j)
            {
                case 1:
                    Task2Func1();
                    break;
                case 2:
                    Task2Func2();
                    break;
                case 3:
                    Task2Func3();
                    break;
                case 4:
                    Task2Func4();
                    break;
                case 5:
                    Task2Func5();
                    break;
                case 6:
                    Task2Func6();
                    break;
                case 7:
                    Task2Func7();
                    break;
                case 8:
                    Task2Func8();
                    break;
                case 9:
                    Task2Func9();
                    break;
                case 10:
                    Task2Func10();
                    break;
                case 11:
                    Task2Func11();
                    break;
                case 12:
                    Task2Func12();
                    break;
                case 13:
                    Task2Func13();
                    break;
                case 14:
                    Task2Func14();
                    break;
                case 15:
                    Task2Func15();
                    break;
                default:
                    cout << "Задания не существует" << endl;
                    break;
            }
        }
        else if (i == 3)
        {
            int j=0;
            cout << "Введи номер задачи" << endl;
            cin >> j;
            switch (j)
            {
                case 1:
                    Task3Func1();
                    break;
                case 2:
                    Task3Func2();
                    break;
                case 3:
                    Task3Func3();
                    break;
                case 4:
                    Task3Func4();
                    break;
                case 5:
                    Task3Func5();
                    break;
                case 6:
                    Task3Func6();
                    break;
                case 7:
                    Task3Func7();
                    break;
                case 8:
                    Task3Func8();
                    break;
                case 9:
                    Task3Func9();
                    break;
                case 10:
                    Task3Func10();
                    break;
                case 11:
                    Task3Func11();
                    break;
                case 12:
                    Task3Func12();
                    break;
                case 13:
                    Task3Func13();
                    break;
                case 14:
                    Task3Func14();
                    break;
                case 15:
                    Task3Func15();
                    break;
                default:
                    cout << "Задания не существует" << endl;
                    break;
            }
        }
        else if (i==4)
        {
            int j=0;
            cout << "Введи номер задачи" << endl;
            cin >> j;
            switch (j)
            {
                case 1:
                    Task4Func1();
                    break;
                case 2:
                    Task4Func2();
                    break;
                case 3:
                    Task4Func3();
                    break;
                case 4:
                    Task4Func4();
                    break;
                case 5:
                    Task4Func5();
                    break;
                case 6:
                    Task4Func6();
                    break;
                case 7:
                    Task4Func7();
                    break;
                case 8:
                    Task4Func8();
                    break;
                case 9:
                    Task4Func9();
                    break;
                case 10:
                    Task4Func10();
                    break;
                case 11:
                    Task4Func11();
                    break;
                case 12:
                    Task4Func12();
                    break;
                case 13:
                    Task4Func13();
                    break;
                case 14:
                    Task4Func14();
                    break;
                case 15:
                    Task4Func15();
                    break;
                default:
                    cout << "Задания не существует" << endl;
                    break;
            }
        }
        else if (i == 5)
        {
            int j=0;
            cout << "Введи номер задачи" << endl;
            cin >> j;
            switch (j)
            {
                case 1:
                    Task5Func1();
                    break;
                case 2:
                    Task5Func2();
                    break;
                case 3:
                    Task5Func3();
                    break;
                case 4:
                    Task5Func4();
                    break;
                case 5:
                    Task5Func5();
                    break;
                case 6:
                    Task5Func6();
                    break;
                case 7:
                    Task5Func7();
                    break;
                case 8:
                    Task5Func8();
                    break;
                case 9:
                    Task5Func9();
                    break;
                case 10:
                    Task5Func10();
                    break;
                case 11:
                    Task5Func11();
                    break;
                case 12:
                    Task5Func12();
                    break;
                case 13:
                    Task5Func13();
                    break;
                case 14:
                    Task5Func14();
                    break;
                case 15:
                    Task5Func15();
                    break;
                default:
                    cout << "Задания не существует" << endl;
                    break;
            }
        }
        else
        { 
        cout << "Раздела не существует" << endl;
        }
        cout << "Нажми Y если для выбора другой задачи" << endl;
        cin >> c;

    } while((c == 'Y') || (c == 'y'));
}