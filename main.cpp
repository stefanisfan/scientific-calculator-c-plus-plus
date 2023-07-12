#include <iostream>
#include <math.h>
#include <cmath>
#include <string>
#include <cctype>

/* scientific calculator */

using namespace std;

double factorial(double num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    } else
    {
        return num * factorial(num - 1);
    }
}

double arrangement(double n, double k)
{
    if (n >= k)
    {
        return factorial(n) / factorial(n - k);
    }
    else
    {
        cout << "ERROR: n must be greater than or equal to k to calculate arrangements." << endl;
        return 0;
    }
}

double combination(double n, double k)
{
    if (n >= k)
    {
        return factorial(n) / factorial(k) * factorial(n - k);
    }
    else
    {
        cout << "ERROR: n must be greater than or equal to k to calculate combinations." << endl;
        return 0;
    }
}

string toLower(string s)
{
    int i, lg = s.size();
    for(i = 0; i < lg; i++)
        s[i] = tolower(s[i]);
    return s;
}
double num1, num2, result;
string operation;
int main()
{
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the operation (+, -, *, /, ^, !, square-root, ln, log2, log10, sinus, cosinus, tangenta, cotangenta, arrangements, combinari): ";
    cin >> operation;
    if(operation == "+")
    {
        cout << "Enter the second number: ";
        cin >> num2;
        result = num1 + num2;
    }
    else if(operation == "-")
    {
        cout << "Enter the second number: ";
        cin >> num2;
        result = num1 - num2;
    }
    else if(operation == "*")
    {
        cout << "Enter the second number: ";
        cin >> num2;
        result = num1 * num2;
    }
    else if(operation == "/")
    {
        cout << "Enter the second number: ";
        cin >> num2;
        if (num2 != 0)
            result = num1 / num2;
        else
        {
            cout << "ERROR: Division by zero is not allowed.";
            return 0;
        }
    }
    else if(operation == "^")
    {
        cout << "Enter the exponent: ";
        cin >> num2;
        result = pow(num1, num2);
    }
    else if(operation == "!")
        result = factorial(num1);
    else if(toLower(operation) == "square-root")
        result = sqrt(num1);
    else if(toLower(operation) == "ln")
        result = log(num1);
    else if(toLower(operation) == "log2")
        result = log2(num1);
    else if(toLower(operation) == "log10")
        result = log10(num1);
    else if(toLower(operation) == "sine")
        result = sin(num1);
    else if(toLower(operation) == "cosine")
        result = cos(num1);
    else if(toLower(operation) == "tangent")
        result = tan(num1);
    else if(toLower(operation) == "cotangent")
        result = 1.0 / tan(num1);
    else if(toLower(operation) == "arrangements")
    {
        cout << "Enter the second number (k): ";
        cin >> num2;
        result = arrangement(num1, num2);
    }
    else if(toLower(operation) == "combinations")
    {
        cout << "Enter the second number (k): ";
        cin >> num2;
        result = combination(num1, num2);
    }
    cout << "It turns out that (" << operation << "): " << result;
}
