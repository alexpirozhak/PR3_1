// Lab_03_4.cpp
// < Пірожак, Олександр >
// Лабораторна робота No 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 0.21

#include <iostream>
using namespace std;

int main()
{
    double R; // значення радіуса кола
    double x; // вхідний аргумент
    double y; // вхідний параметр
    
    cout<<"R=";cin >>R;
    cout<<"x=";cin >>x; 
    cout<<"y=";cin >>y;
    
    if (x*x+y*y<=R*R && y>=x && x>=0 || x*x+y*y<=R*R && y<=x && x<=0) 
    {
        cout << "yes" << endl;
    }
    else cout <<"no" << endl;
    
    cin.get();
    return 0;
}