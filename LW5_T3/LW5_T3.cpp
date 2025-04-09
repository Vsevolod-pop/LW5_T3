#include <iostream>
#include <string>

using namespace std;

string Palindrom(string K, string a = "", int i = 1)
{
    if (K.length() == a.length())
    {
        if (K == a)
            return "True";
        else
            return "False";
    }
    else
    {
        a = a + K.substr(K.length() - i, 1);
        return Palindrom(K,a,i+1);
    }

}

int main()
{
    setlocale(LC_ALL, "Russian");
    string a[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Введите строку - ";
        cin >> a[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << "Строка - " << a[i] << " - " << Palindrom(a[i]) << endl;
    }
}