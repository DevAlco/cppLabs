#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

#include <cmath>
#include <string>

using namespace std;

vector<vector<int>> VectorFill(vector<vector<int>> vec)
{
    ifstream in ("String41.txt");
    int i { 0 };

    while(in >> i)
    {
        vec.emplace_back(i);
    }

    return vec;
}
void Task1()
{
    int a[10];
    int n,k,l;
 
    printf("N: ");
    scanf("%i",&n);
 
    printf("K: ");
    scanf("%i",&k);
 
    printf("L: ");
    scanf("%i",&l);
 
    int i;
    for (i=0; i<n; ++i){
        printf("a[%i] : ",i+1);
        scanf("%i",&a[i]);
    }
 
    int sum=0;
    for (i=k-1; i<=l-1; ++i) sum+=a[i];
 
    printf("%f\n: ",sum/i);
}

void Task2()
{
    int a[10];
    int n,k,l;
 
    cout << "N: ";
    cin >> n;
    cout << "K: ";
    cin >> k;
    cout << "L: ";
    cin >> l;
 
    int i;
    for (i=0; i<n; ++i){
        cout << "a[" << i+1 << "] :";
        cin >> a[i];
    }
 
    int sum=0;
    for (i=0; i<k-1; ++i) sum+=a[i];
    for (i=l; i<n; ++i) sum+=a[i];
 
    printf("%f\n: ",sum);
}

void Task3 ()
{
     int a[10];
    int n,k,l;
 
    printf("N: ");
    scanf("%i",&n);
 
    printf("K: ");
    scanf("%i",&k);
 
    printf("L: ");
    scanf("%i",&l);
 
    int i;
    for (i=0; i<n; ++i){
        printf("a[%i] : ",i);
        scanf("%i",&a[i]);
    }

    int sum=0;
    for (i=0; i<k-1; ++i) sum+=a[i];
    for (i=l; i<n; ++i) sum+=a[i];
    printf("%f\n: ",(float)sum/i);
}

void Task4()
{
    int a[10];
    int n, i;
 
    printf("N: ");
    scanf("%i",&n);
    for (i=0; i<n; ++i)
    {
        printf("a[%i] : ",i);
        scanf("%i",&a[i]);
    }
 
    for (i=0; i<n; ++i)
    {
        if (a[i]%2 == 0)
        {
            printf("%i\n",a[i]);
        }
    }

    for (i=n-1; i>=0; --i)
    {
        if (a[i]%2 != 0)
        {
            printf("%i\n",a[i]);
        }
    }
}

void Task5()
{
    int a[10];
    int n, i;
 
    printf("N: ");
    scanf("%i",&n);
    for (i=0; i<n; ++i)
    {
        printf("a[%i] : ",i);
        scanf("%i",&a[i]);
    }
 
    for (i=0; i<n; ++i)
    {
        if (a[i]%2 == 0)
        {
            printf("%i\n",a[i]);
        }
    }

    for (i=0; i<n; ++i)
    {
        if (a[i]%2 != 0)
        {
            printf("%i\n",a[i]);
        }
    }
}

void Task6()
{
    int a[10];
    int n, i, s = 0, prod;

    printf("N: ");
    scanf("%i",&n);
    for (i=0; i<n; ++i)
    {
        printf("a[%i] : ",i);
        scanf("%i",&a[i]);
    }

    for (i=0; i<n; ++i)
    {
        
        if(a[s] < a[i])
        {
            s = i;
        } 
    }

    for (i=0; i<s; i++)
    {
        prod *= a[i];
    }

    printf("%f\n: ",prod);
}

void Task7()
{
    int a[10];
    int min=0,max=0,i,n,sum;

    printf("N: ");
    scanf("%i",&n);
    for (i=0; i<n; ++i)
    {
        printf("a[%i] : ",i);
        scanf("%i",&a[i]);
    }

    for (i=0; i<n; ++i)
    {
        
        if(a[max] < a[i])
        {
            max = i;

        } else 
        if (a[min] > a[i] )
        {
            min = i;
        }
    }
    for (i=min; i < max; i++)
    {
        sum += a[i];
    }
        printf("%f\n: ",sum);

}

void Task8()
{
    int a[10];
    int min=0,max=0,i,n;

    printf("N: ");
    scanf("%i",&n);
    for (i=0; i<n; ++i)
    {
        printf("a[%i] : ",i);
        scanf("%i",&a[i]);
    }

    for (i=0; i<n; ++i)
    {
        
        if(a[max] < a[i])
        {
            max = i;

        } else 
        if (a[min] > a[i] )
        {
            min = i;
        }
    }

        for (i=min+1; i < max-1; i++)
    {
        a[i] = 0;
    }

    for (i=0; i < n; i++)
    {
        printf("%f\n: ",a[i]);
    }
}

void Task9()
{
    int a[10];
    int i,n;
    const int add = 3;

    printf("N: ");
    scanf("%i",&n);
    for (i=0; i<n; ++i)
    {
        printf("a[%i] : ",i);
        scanf("%i",&a[i]);
    }

     for (i=0; i<n; ++i)
    {
        if (a[i]%2 == 0)
        {
            a[i] += add;
        }
    }

    for (i=0; i < n; i++)
    {
        printf("%f\n: ",a[i]);
    }
}

void Task10()
{
    int a[10];
    int i,n;
    const int add = 3;

    printf("N: ");
    scanf("%i",&n);
    for (i=0; i<n; ++i)
    {
        printf("a[%i] : ",i);
        scanf("%i",&a[i]);
    }

     for (i=0; i<n; ++i)
    {
        if (a[i]%2 != 0)
        {
            a[i] == 0;
        }
    }

    for (i=0; i < n; i++)
    {
        printf("%f\n: ",a[i]);
    }
}

void Task11()
{
    int a[10];
    int n;
 
    printf("N: ");
    scanf("%i",&n);
 
    int i;
    for (i=0; i<n; ++i)
    {
        printf("a[%i] : ",i+1);
        scanf("%i",&a[i]);
    }
 
    int min = a[2];
 
    for (i=1; i<n; i+=2) 
    {
        if (a[i]<min) min=a[i];
    }
 
    printf("%i\n",min);
}

void Task12()
{
    int a[10];
    int n;
 
    printf("N: ");
    scanf("%i",&n);
 
    int i;
    for (i=0; i<n; ++i){
        printf("a[%i] : ",i+1);
        scanf("%i",&a[i]);
    }
 
    int num = 0;
 
    for (i=0; i<n-1; ++i) {
        if (a[i]>a[i+1]) {
            printf("%i \n",i+1);
            ++num;
        }
    }
 
    printf("%i \n",num);
}

void Task13()
{
    int a[10];
    int n;
 
    printf("N: ");
    scanf("%i",&n);
 
    int i;
    for (i=0; i<n; ++i){
        printf("a[%i] : ",i+1);
        scanf("%i",&a[i]);
    }
 
    int summax = a[0]+a[1], k=1;
 
    for (i=2;i<n;++i){
        if ((a[i-1]+a[i])>summax){
            summax = a[i-1]+a[i];
            k = i;
        }
    }
    printf("%i %i\n",a[k-1],a[k]);
}

void Task14()
{
    int a[10];
 
    int n;
 
    printf("N: ");
    scanf("%i",&n);
 
    int i;
    for (i=0; i<n; ++i){
        printf("a[%i] : ",i+1);
        scanf("%i",&a[i]);
    }
 
 
    int min=0,max=0;
 
    for (i=n-1; i>=0; --i){
        if (a[i]>a[max]) max=i;
        if (a[i]<a[min]) min=i;
    }
 
    if (max!=min) {
        a[max]+=a[min];
        a[min]=a[max]-a[min];
        a[max]=a[max]-a[min];
    }
 
    printf("A: \n");
    for (i=0; i<n; ++i) printf("  %i: %i\n",i+1,a[i]);
}

void Section6Task15()
{
    int a[10];
    int n, i;
 
    printf("N: ");
    scanf("%i",&n);
 
    printf("A: ");
    scanf("%i",&a[0]);
 
    printf("B: ");
    scanf("%i",&a[1]);
 
    for (i=2; i<n; ++i){
        a[i]=0;
        int i2;
        for (i2=0; i2<i; ++i2) a[i] += a[i2];
    }
    for (i=0; i<n; ++i) printf("%i : %i\n",i,a[i]);
}


void Section7Task1()
{
    bool nohit = true;
    int i=0, j=0, lim = 0, result = 0;
    vector<vector<int>> vec = VectorFill(vec);

    for (int i = 0; i < vec.size(); ++i)
    {
        for (int j = 0; j < vec[i].size(); ++j)
        {
            if (vec[i][j]%2 == 0) break;
            else
            {
                printf("Столбец с нечётными числами: ", i);
                nohit = false;
            }
        }
    }
    if (nohit) printf("В матрице нет столбцов содержащих только нечётные числа: ", 0);
}

void Section7Task2()
{
    int maxi=0 ,mini=0, min=0, max=0;
    vector<vector<int>> vec = VectorFill(vec); 
    for (int i = 0; i < vec.size(); i++)
        {
            for (int j = 0; j < vec[i].size(); j++)
            {
                if (vec[i][mini] <= vec[i][j])  mini = j;
        
                if (vec[i][maxi] >= vec[i][j]) maxi = j;

            }
            min = vec[i][mini];
            max = vec[i][maxi];
            vec[i][mini] = max;
            vec[i][maxi] = min;
        }
}
void Section7Task3()
{
    vector<vector<int>> vec = VectorFill(vec);
    int maxi=0 , maxj=0, mini=0, minj=0;

    for(int i = 0; i < vec.size(); i++)
        {
            for(int j = 0; j < vec[i].size(); j++)
                {
                    if(vec[i][j] > vec[maxi][maxj])
                        {
                            maxi = i;
                            maxj = j;
                        }
 
                    if(vec[i][j] < vec[mini][minj])
                        {
                            mini = i;
                            minj = j;
                        }
                }
        }
    
 
    if(vec[maxi][maxj] == vec[mini][minj]) printf("Максимальный и минимальный элементы находятся в одной строке.");
    vector<int>  temp = vec[mini];
    vec[mini] = vec[maxi];
    vec[maxi] = temp;

}

void Section7Task4()
{
    vector<vector<int>> vec = VectorFill(vec);
    vector<int> temp;

    for(int i = 0; i < vec.size(); i++)
    {
        for(int j = 0; j < vec[i].size(); j++)
        {
            temp.insert(temp.begin(),vec[i][j]);
        }
        vec[i] = temp;
    }
}

void Section7Task5()
{
    vector<vector<int>> vec = VectorFill(vec);
    int mini=0, minj=0;

    for(int i = 0; i < vec.size(); i++)
        {
            for(int j = 0; j < vec[i].size(); j++)
                {
                    
                    if(vec[i][j] < vec[mini][minj])
                        {
                            mini = i;
                            minj = j;
                        }
                }
        }
    
    vec.erase(vec.begin()+mini);
}

void Section7Task6()
{
    vector<vector<int>> vec = VectorFill(vec);
    int mini=0, minj=0;

    for(int i = 0; i < vec.size(); i++)
        {
            for(int j = 0; j < vec[i].size(); j++)
                {
                    
                    if(vec[i][j] < vec[mini][minj])
                        {
                            mini = i;
                            minj = j;
                        }
                }
        }
    for(int i = 0; i < vec.size(); i++)
    {
        vec[i].erase(vec[i].begin() + minj);
    }
    
}

void Section7Task7()
{
    vector<vector<int>> vec = VectorFill(vec), newVec;
    
    for(int i = 0; i < vec.size(); i++) newVec.insert(newVec.begin(),vec[i]);
   
}

void Section7Task9()
{
    vector<vector<int>> vec = VectorFill(vec);
    int maxi=0, maxj=0;

    for(int i = 0; i < vec.size(); i++)
        {
            for(int j = 0; j < vec[i].size(); j++)
            {
                if(vec[i][j] > vec[maxi][maxj])
                {
                    maxi = i;
                    maxj = j;
                }
            }
        }
    
    vec.push_back(vec[maxi]);
}

void Section7Task9()
{
    vector<vector<int>> vec = VectorFill(vec);
    vector<int> meda,count;
    float meda=0;

    for(int i = 0; i < vec.size(); i++)
    {
        for(int j = 0; j < vec[i].size(); j++) meda[i] += vec[j][i];
    }
    for(int i = 0; i < vec.size(); i++) meda[i] = meda[i]/vec.size();

    for(int i = 0; i < vec.size(); i++)
    {
        for(int j = 0; j < vec[i].size(); j++)
        {
            if(meda[i] < vec[j][i]) count[i] += 1;
        } 
    }
        
}

void Section7Task10()
{
    vector<vector<int>> vec = VectorFill(vec);
    vector<int> firstQuart,secondQuart,thirdQuart,fourthQuart;

    for (int i=0; i < vec.size(); i++)
    {
        if (i < vec.size()/2)
        {
            for(int j=0; j < vec[i].size(); j++)
            {
                if(j < vec[i].size()/2)
                {
                    firstQuart.push_back(vec[i][j]);
                } else if (j > vec[i].size()/2)
                {
                    thirdQuart.push_back(vec[i][j]);
                } else 
                {
                    printf("Не симметричная матрица.");
                    return;
                }
            }
        } else if (i > vec.size()/2)
        {
            for(int j=0; j < vec[i].size(); j++)
            {
                if(j < vec[i].size()/2)
                {
                    secondQuart.push_back(vec[i][j]);
                } else if (j > vec[i].size()/2)
                {
                    fourthQuart.push_back(vec[i][j]);
                } else 
                {
                    printf("Не симметричная матрица.");
                    return;
                }
            }
        } else
        {
            printf("Не симметричная матрица.");
            return;
        }
    }

    for (int i=0; i < vec.size(); i++)
    {
        if (i < vec.size()/2)
        {
            for(int j=0; j < vec[i].size(); j++)
            {
                if(j < vec[i].size()/2)
                {
                    vec[i][j] = fourthQuart[j];
                } else if (j > vec[i].size()/2)
                {
                    vec[i][j] = thirdQuart[j/2];
                } 
            }
        } else if (i > vec.size()/2)
        {
            for(int j=0; j < vec[i].size(); j++)
            {
                if(j < vec[i].size()/2)
                {
                    vec[i][j] = secondQuart[j];
                } else if (j > vec[i].size()/2)
                {
                    vec[i][j] = firstQuart[j/2];
                }
            }
        }
    }
    printf("Искомый массив: \n", vec);
}

void Section7Task11()
{
    
}

void Section7Task12()
{

}

void Section7Task13()
{

}

void Section7Task14()
{

}

void Section7Task15()
{

}

void Section8Task1()
{
    size_t answer;
    string str,substr;
    ifstream in ("String41.txt");

   for (str; getline(in, str); )
   {
        stringstream ss(str);
        while(ss >> substr)
        {
            answer++;
        }
   }
   printf("Количество слов в строке = ", answer, "\n");
}

void Section8Task2()
{
    size_t answer;
    string str,substr;
    ifstream in ("String41.txt");

   for (str; getline(in, str); )
   {
        stringstream ss(str);
        while(ss >> substr)
        {
            if(substr[0] == substr[substr.length() - 1])
            {
                answer++;
            }
        }
   }
   printf("Количество слов начинающихся и заканчивающихся с одной буквы = ", answer, "\n");
}

void Section8Task3()
{
    size_t answer;
    string str,substr;
    ifstream in ("String41.txt");

    for (str; getline(in, str); )
    {
        stringstream ss(str);
        while(ss >> substr)
        {
            for(size_t i; i <= substr.length(); i++)
            {
                if(substr.at(i) == 'А' || substr.at(i) == 'а')
                {
                answer ++;
                break;
                }
            }
        }
    }
    printf("Количество слов с буквой А = ", answer, "\n");
}
void Section8Task4()
{
    size_t answer, lencurrent=0, lenprevious=0;
    string str,substr;
    ifstream in ("String41.txt");

    for (str; getline(in, str); )
    {
        stringstream ss(str);
        while(ss >> substr)
        {
            lencurrent = substr.length();
            if(lencurrent < lenprevious)
            {
                answer = lencurrent;
            } else if (lenprevious == 0)
            {
                answer = lencurrent;
            }
            lencurrent = lenprevious;
        }
    }
    printf("Длинна самого короткого слова = ", answer, "\n");
}

void Section8Task5()
{
    string str,substr,newstr;
    ifstream in ("String41.txt");

    for (str; getline(in, str); )
    {
        stringstream ss(str);
        while(ss >> substr)
        {
            substr.insert(0, " ");
            newstr.insert(0, substr);
        }
    }
    printf("Искомая строка: ", newstr, "\n");
}

void Section8Task6()
{
    string str,substr,prevstr,newstr;
    ifstream in ("String41.txt");

    for (str; getline(in, str); )
    {
        stringstream ss(str);
        while(ss >> substr)
        {
            if (substr.at(0) > prevstr.at(0))
            {
                substr.insert(substr.length(), " ");
                newstr.append(substr);
            } else if(substr.at(0) > prevstr.at(0) )
            {
                substr.insert(0, " ");
                newstr.insert(0, substr);  
            } else if (prevstr.empty())
            {
                substr = prevstr;
                substr.insert(0, " ");
                newstr.insert(0, substr);
            }
            substr = prevstr;
        }
    }
    printf("Искомая строка: ", newstr, "\n");
}

void Section8Task7()
{
    string str,teststr = "abc";
    char c;
    char i='а';
    ifstream in ("String41.txt");

    for (str; getline(in, str); )
    {
        stringstream ss(str);
        while(ss >> c)
        {
            if(c == i)
            {
                str.insert(str.find(c), teststr);
            }
        }
    }
    printf("Искомая строка: ", str, "\n");
}

void Section8Task8()
{
    string str;
    size_t startpos,endpos;
    char c;
    ifstream in ("String41.txt");

    for (str; getline(in, str); )
    {
        stringstream ss(str);
        while(ss >> c)
        {
            if (c == ' ')
            {
                startpos = str.find(c);
                if(startpos != 0)
                {
                    endpos = str.find(c);
                }
            } else if(c != ' ' && startpos != 0 && endpos != 0)
            {
                str.erase(startpos + 1, endpos);
            }
        }
    }
    printf("Искомая строка: ", str, "\n");
}

void Section8Task9()
{
    string str,teststr = "abc";
    char c;
    size_t answer;
    ifstream in ("String41.txt");

    for (str; getline(in, str); )
    {
        stringstream ss(str);
        while(ss >> c)
        {
            if(islower(c))
            {
                answer++;
            }
        }
    }
    printf("Колличество строчных букв = ", answer, "\n");
}

void Section8Task10()
{
    size_t answer, lencurrent=0, lenprevious=0;
    string str,substr;
    ifstream in ("String41.txt");

    for (str; getline(in, str); )
    {
        stringstream ss(str);
        while(ss >> substr)
        {
            lencurrent = substr.length();
            if(lencurrent > lenprevious)
            {
                answer = lencurrent;
            } else if (lenprevious == 0)
            {
                answer = lencurrent;
            }
            lencurrent = lenprevious;
        }
    }
    printf("Длинна самого длинного слова = ", answer, "\n");
}

void Section8Task11()
{
    string str,oddstr,evenstr,newstr;
    char c;
    ifstream in ("String41.txt");

    for (str; getline(in, str); )
    {
        stringstream ss(str);
        while(ss >> c)
        {
            if(str.at(c)%2 == 0)
            {
                evenstr.push_back(c);
            } else
            {
                oddstr.insert(0, 1, c);
            }
        }
    }
    newstr.append(evenstr);
    newstr.append(oddstr);
    printf("Искомая строка: ", newstr, "\n");
}

void Section8Task12()
{
    string str;
    char c;
    const char insert = '*';
    int n = 5;
    ifstream in ("String41.txt");

    for (str; getline(in, str); )
    {
        stringstream ss(str);
        while(ss >> c)
        {
            str.insert(str.at(c), n, insert);
        }
    }
    printf("Искомая строка: ", str, "\n");
}

void Section8Task13()
{
    string str;
    char c;
    ifstream in ("String41.txt");

    for (str; getline(in, str); )
    {
        stringstream ss(str);
        while(ss >> c)
        {
            if(c == ' ')
            {
                str.replace(str.find(c), 1, 1, '.');
            }
        }
    }
    printf("Искомая строка: ", str, "\n");
}

void Section8Task14()
{
    string str = "d:\\ivanov\\primer\\unit1.pas";
    printf("Имя файла: ", str.find_last_of(("/\\") - 4));
}

void Section8Task15()
{
    size_t answer, lencurrent=0, lenprevious=0;
    string str,substr;
    ifstream in ("String41.txt");

    for (str; getline(in, str); )
    {
        stringstream ss(str);
        while(ss >> substr)
        {
            lencurrent = substr.length();
            if(lencurrent > lenprevious)
            {
                answer = lencurrent;
            } else if (lenprevious == 0)
            {
                answer = lencurrent;
            }
            lencurrent = lenprevious;
        }
    }
    printf("Длинна самого короткого слова = ", answer, "\n");
}

void Section9Task1()
{
    
}

void Section9Task2()
{
    
}

void Section9Task3()
{
    
}

void Section9Task4()
{
    
}

void Section9Task5()
{
    
}

void Section9Task6()
{
    
}

void Section9Task7()
{
    
}

void Section9Task8()
{
    
}

void Section9Task9()
{
    
}

void Section9Task10()
{
    
}

void Section9Task11()
{
    
}

void Section9Task12()
{
    
}

void Section9Task13()
{
    
}

void Section9Task14()
{
    
}

void Section9Task15()
{
    
}

void main()
{
  
}