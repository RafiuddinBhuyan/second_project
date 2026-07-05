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
    string ch;
    double a, b;
    cout<<"=====SOME RULE====="<<endl;
    cout<<"For add, OPTN = + ;"<<endl;
    cout<<"For sub, OPTN = - ;"<<endl;
    cout<<"For mult, OPTN = * ;"<<endl;
    cout<<"For div, OPTN = / ;"<<endl;
    cout<<"For sin, OPTN = SIN ;"<<endl;
    cout<<"For sin, OPTN = COS ;"<<endl;
    cout<<"For sin, OPTN = TEN ;"<<endl;
    cout<<"For exit, OPTN = x ;"<<endl;
    while (1)
    {
        cout << "Enter your OPTN" << endl;
        cin >> ch;
        if (ch == "+")
        {
            cout << "enter your tow element" << endl;
            cin >> a >> b;
            cout << add(a, b) << endl;
        }
        else if (ch == "-")
        {
            cout << "enter your tow element" << endl;
            cin >> a >> b;
            cout << sub(a, b) << endl;
        }
        else if (ch == "*")
        {
            cout << "enter your tow element" << endl;
            cin >> a >> b;
            cout << mult(a, b) << endl;
        }
        else if (ch == "/")
        {
            cout << "enter your tow element" << endl;
            cin >> a >> b;
            cout << div(a, b) << endl;
        }
        else if (ch == "SIN")
        {
            cout << "thats will be updated" << endl;
        }
        else if (ch == "COS")
        {
            cout << "thats will be updated" << endl;
        }
        else if (ch == "TEN")
        {
            cout << "thats will be updated" << endl;
        }
        else if (ch == "x")
        {
            cout<<"Thank YOU"<<endl;
            return 0;
        }
    }
    return 0;
}
