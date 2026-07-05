#include <bits/stdc++.h>
using namespace std;
double add(double a, double b)
{
    return a + b;
}
double sub(double a, double b)
{
    return a - b;
}
double mult(double a, double b)
{
    return a * b;
}
double div(double a, double b)
{
    return a / b;
}

int main()
{
    char ch;
    double a, b;
    cout<<"=====SOME RULE====="<<endl;
    cout<<"For add, char = + ;"<<endl;
    cout<<"For sub, char = - ;"<<endl;
    cout<<"For mult, char = * ;"<<endl;
    cout<<"For div, char = / ;"<<endl;
    cout<<"For exit, char = x ;"<<endl;
    while (1)
    {
        cout << "enter your char" << endl;
        cin >> ch;
        if (ch == '+')
        {
            cout << "enter your tow element" << endl;
            cin >> a >> b;
            cout << add(a, b) << endl;
        }
        else if (ch == '-')
        {
            cout << "enter your tow element" << endl;
            cin >> a >> b;
            cout << sub(a, b) << endl;
        }
        else if (ch == '*')
        {
            cout << "enter your tow element" << endl;
            cin >> a >> b;
            cout << mult(a, b) << endl;
        }
        else if (ch == '/')
        {
            cout << "enter your tow element" << endl;
            cin >> a >> b;
            cout << div(a, b) << endl;
        }
        else if (ch == 'x')
        {
            return 0;
        }
    }
    return 0;
}
