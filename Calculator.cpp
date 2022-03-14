#include <iostream>
#include <cmath>

int main()
{
int dzialanie;
double x;
double y;
double wynik;

std::cout << "Podaj numer dzialania: ";
std::cin >> dzialanie;


switch( dzialanie )
{
    case 1:
    std::cout << "Podaj dwie liczby: ";
    std::cin >> x;
    std::cin >> y;

    wynik=x+y;
    std::cout << "Wynik dodawania: " << wynik;
    break;

    case 2:

    std::cout << "Podaj dwie liczby: ";
    std::cin >> x;
    std::cin >> y;

    wynik=x-y;
    std::cout << "Wynik odejmowania: " << wynik;
    break;

    case 3:
    std::cout << "Podaj dwie liczby: ";
    std::cin >> x;
    std::cin >> y;

    wynik=x*y;
    std::cout << "Wynik mnożenia: " << wynik;
    break;

    case 4:
    std::cout << "Podaj dwie liczby: ";
    std::cin >> x;
    std::cin >> y;

    wynik=x/y;
    std::cout << "Wynik dzielenia: " << wynik;
    break;

    case 5:
    std::cout << "Podaj jedna liczbe: ";
    std::cin >> x;
    
    wynik=pow(x,0.5);
    std::cout << "Wynik pierwiastkowania: " << wynik;
    break;
}
return 0;
}