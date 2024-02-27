#include <iostream>
#include <ctime>
#include <random>


using namespace std;

int main()
{
    int n;

    cin >> n;
    int *array = new int[n];
    for (int i = 0; i < 10; i++)
    {
        array[i] = rand() % 10;
    }
    sort (array, array + n);
    for (auto i = 0; i < n; i++)
    {
        cout << array[i] << "\t";

    }

    return 0;

    /*
    //int a;

    int b = 5;
    char n = 'read';
    short g = 6;
    double f = 3;
    float i = 7.5f;
    long y = 4;
    bool l = 6;
    long double h = 9;

    //string p = 6;

    //std::cout << a << "\n";
    std::cout << "5\n";

    std::cout << "5\n";
    std::cout << "5\n";
    std::cout << "6\n";
    std::cout << "3\n";
    std::cout << "7.5\n";
    std::cout << "4\n";
    std::cout << "6\n";
    std::cout << "9\n";



    int muss[5] = { 4, 3, 7, -5, 6 };
    for (int i = 0; i < 5; i++)
    {
        std::cout << muss[i] << endl;
    }

    cout << "*\n";
    cout << "\n";
    cout << "***\n";

    //cout << "*" << endl << "" << endl << "***" << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int y = 0; y < i; y++)
        {
            ::cout << "*";
        }
    }

// 01.02.24

    int a;
    int b;
    int c;

    cin >> a;
    cin >> b;
    cin >> c;


    if (a > b && c)
    {
        cout << a;
    }
    else
    {
        cout << b;
    }
    */

    // ax^2 + bx + c = 0
    /*cout << "Enter numb for a, b, c" << endl;

    float a, b, c, x1, x2, d;

    cin >> a;
    cin >> b;
    cin >> c;

    cout << endl;

    дискриминант
    d = b * b - 4 * a * c;

    cout << "Discriminant: ";
    cout << d << endl;

    if (a != 0)
    {
        if (d > 0)
        {
            x1 = (-b + sqrt(d)) / (2 * a);
            x2 = (-b - sqrt(d)) / (2 * a);


            cout << "First root: ";
            cout << x1 << endl;

            cout << "Second root: ";
            cout << x2 << endl;

        }
        else if (d == 0)
        {
            x1 = -(b / (2 * a));

            cout << "Root: ";
            cout << x1 << endl;
        }
        else
        {
            cout << "No root" << endl;
        }
    }
    else
    {
        x1 = -c / b;
        cout << "Root: ";
        cout << x1 << endl;
    }

    return 0;*/

    


}
