#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

// Звичайна функція для виведення масиву цілих чисел
void PrintArray(int* a, const int size);

// Шаблон функції для виведення масиву будь-якого типу
template <typename T>
void PrintArray(T* a, const int size);

int main()
{
    const int n = 10;
    srand(static_cast<unsigned int>(time(0)));

    // Масив цілих чисел
    int a[n];

    for (int i = 0; i < n; i++)
        a[i] = rand() % 101 - 50;

    cout << "Масив цiлих чисел:" << endl;
    PrintArray(a, n);

    cout << "Масив цiлих чисел (шаблон):" << endl;
    PrintArray<int>(a, n);

    // Масив дійсних чисел
    double b[n] = { 1.1, 2.2, 3.3, 4.4, 5.5,
                   6.6, 7.7, 8.8, 9.9, 10.0 };

    cout << "Масив дiйсних чисел:" << endl;
    PrintArray<double>(b, n);

    // Масив рядків
    string c[n] = { "один ", "два ", "три ", "чотири ", "п'ять ",
                   "шість ", "сім ", "вісім ", "дев'ять ", "десять " };

    cout << "Масив рядкiв:" << endl;
    PrintArray<string>(c, n);

    return 0;
}

// Реалізація звичайної функції
void PrintArray(int* a, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(6) << a[i];

    cout << endl;
}

// Реалізація шаблону функції
template <typename T>
void PrintArray(T* a, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(6) << a[i];

    cout << endl;
}