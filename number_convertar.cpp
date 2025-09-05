#include <bits/stdc++.h>
using namespace std;

template <typename T>
void print(vector<T> v)
{
    reverse(v.begin(), v.end());
    for (auto i : v)
    {
        cout << i;
    }
    cout << endl;
}

void binary(int n)
{
    vector<int> bin;
    while (n > 0)
    {
        bin.push_back(n % 2);
        n /= 2;
    }
    cout << "Binary: ";
    print(bin);
}

void octal(int n)
{
    vector<int> oct;
    while (n > 0)
    {
        oct.push_back(n % 8);
        n /= 8;
    }
    cout << "Octal: ";
    print(oct);
}

void hexa(int n)
{
    vector<char> hex;
    while (n > 0)
    {
        int temp = n % 16;
        n /= 16;
        if (temp < 10)
            hex.push_back('0' + temp);
        else
            hex.push_back('A' + (temp - 10));
    }
    cout << "Hexadecimal: ";
    print(hex);
}

int main()
{

    
    int n;
    
    while (true)
    {   
        cout << "Enter the number in decimal: ";
        cin >> n;
        if(cin.fail()) {
            cin.clear();
            cin.ignore(1000,'\n');
            cout << "Plesae enter a valid number\n";
            continue;
        }
        if (n == 0)
        {
            cout << "Binary: 0\nOctal: 0\nHexadecimal: 0\n";
        }
        else
        {
            binary(n);
            octal(n);
            hexa(n);
        }
        cout << "\n";
    }

    return 0;
}
