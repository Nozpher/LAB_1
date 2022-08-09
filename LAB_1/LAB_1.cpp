#include <iostream>
#include <cmath>


using namespace std;
int main()
{
    //Блок обозначения типа данных и переменных
    float ans, f_quad, s_quad, upper, lower, f_lower, s_lower, t_lower, a, b;
    // degree - ввод данных для возведения в степень
    int f_degree, s_degree, t_degree;

    //

    //Блок введения первичных данных
    f_degree = 4;
    s_degree = 3;
    t_degree = 2;

    cout << "A is 1000 \n";

    a = 1000;

    cout << "B is 0.0001 \n";

    b = 0.0001;

    //

    //Блок выполнения расчета верхней части выражения, pow - возведение в степень
    f_quad = pow((a + b), f_degree);
    s_quad = pow(a, f_degree) + 4 * pow(a, s_degree) * b;
    upper = f_quad - s_quad;
    //

    //Блок выполения расчета нижней части выражения
    f_lower = 6 * pow(a, t_degree) * pow(b, t_degree);
    s_lower = 4 * a * pow(b, s_degree);
    t_lower = pow(b, f_degree);
    lower = f_lower + s_lower + t_lower;
    //
    // 
    // 
    // Ответ на данное задание 1
    ans = upper / lower;
    //

    //Вывод ответа
    cout << "when float, answer = " << ans << "\n";

    //

     //Блок обозначения типа данных и переменных
    double ans1, f_quad1, s_quad1, upper1, lower1, f_lower1, s_lower1, t_lower1, a1, b1;
    // degree - ввод данных для возведения в степень
    int f_degree1, s_degree1, t_degree1;

    //

    //Блок введения первичных данных
    f_degree1 = 4;
    s_degree1 = 3;
    t_degree1 = 2;



    a1 = 1000;



    b1 = 0.0001;

    //

    //Блок выполнения расчета верхней части выражения, pow - возведение в степень
    f_quad1 = pow((a1 + b1), f_degree1);
    s_quad1 = pow(a1, f_degree1) + 4 * pow(a1, s_degree1) * b1;
    upper1 = f_quad1 - s_quad1;
    //

    //Блок выполения расчета нижней части выражения
    f_lower1 = 6 * pow(a1, t_degree1) * pow(b1, t_degree1);
    s_lower1 = 4 * a * pow(b1, s_degree1);
    t_lower1 = pow(b1, f_degree1);
    lower1 = f_lower1 + s_lower1 + t_lower1;
    //
    // 
    // 
    // Ответ на данное задание 1
    ans1 = upper1 / lower1;
    //

    //Вывод ответа
    cout << "When double, answer = " << ans1;

    //
}
