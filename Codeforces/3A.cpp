#include <bits/stdc++.h>
using namespace std;

int main()
{
    string coordinates1;
    string coordinates2;

    cin >> coordinates1 >> coordinates2;

    pair<int, int> c1 = {int(coordinates1[0]) - 96, int(coordinates1[1]) - '0'};
    pair<int, int> c2 = {int(coordinates2[0]) - 96, int(coordinates2[1]) - '0'};

    int d = min(abs(c1.first - c2.first), abs(c1.second - c2.second));
    int vh = abs(abs(c1.first - c2.first) - abs(c1.second - c2.second));

    cout << d + vh << endl;

    if (c1.first > c2.first && c1.second > c2.second)
    {
        for (int i = 0; i < d; ++i)
        {
            cout << "LD" << endl;
            --c1.first;
            --c1.second;
        }
        int v = abs(c1.second - c2.second);
        int h = abs(c1.first - c2.first);
        if (c1.first == c2.first && !(c1.second == c2.second))
        {
            for (int i = 0; i < v; ++i)
            {
                cout << "D" << endl;
                --c1.second;
            }
        }
        if (!(c1.first == c2.first) && c1.second == c2.second)
        {
            for (int i = 0; i < h; ++i)
            {
                cout << "L" << endl;
                --c1.first;
            }
        }
    }

    if (c1.first < c2.first && c1.second < c2.second)
    {
        for (int i = 0; i < d; ++i)
        {
            cout << "RU" << endl;
            ++c1.first;
            ++c1.second;
        }
        int v = abs(c1.second - c2.second);
        int h = abs(c1.first - c2.first);
        if (c1.first == c2.first && !(c1.second == c2.second))
        {
            for (int i = 0; i < v; ++i)
            {
                cout << "U" << endl;
                ++c1.second;
            }
        }
        if (!(c1.first == c2.first) && c1.second == c2.second)
        {
            for (int i = 0; i < h; ++i)
            {
                cout << "R" << endl;
                ++c1.first;
            }
        }
    }

    if (c1.first > c2.first && c1.second < c2.second)
    {
        
        for (int i = 0; i < d; ++i)
        {
            cout << "LU" << endl;
            --c1.first;
            ++c1.second;
        }
        int v = abs(c1.second - c2.second);
        int h = abs(c1.first - c2.first);
        if (c1.first == c2.first && !(c1.second == c2.second))
        {
            for (int i = 0; i < v; ++i)
            {
                cout << "U" << endl;
                ++c1.second;
            }
        }
        if (!(c1.first == c2.first) && c1.second == c2.second)
        {
            for (int i = 0; i < h; ++i)
            {
                cout << "L" << endl;
                --c1.first;
            }
        }
    }

    if (c1.first < c2.first && c1.second > c2.second)
    {
        for (int i = 0; i < d; ++i)
        {
            cout << "RD" << endl;
            ++c1.first;
            --c1.second;
        }
        int v = abs(c1.second - c2.second);
        int h = abs(c1.first - c2.first);
        if (c1.first == c2.first && !(c1.second == c2.second))
        {
            for (int i = 0; i < v; ++i)
            {
                cout << "D" << endl;
                --c1.second;
            }
        }
        if (!(c1.first == c2.first) && c1.second == c2.second)
        {
            for (int i = 0; i < h; ++i)
            {
                cout << "R" << endl;
                ++c1.first;
            }
        }
    }

    if (c1.first == c2.first && !(c1.second == c2.second))
    {
        if (c1.second > c2.second) {
            for (int i = 0; i < abs(c1.second - c2.second); ++i)
            {
                cout << "D" << endl;
            }
        }
        if (c1.second < c2.second) {
            for (int i = 0; i < abs(c1.second - c2.second); ++i)
            {
                cout << "U" << endl;
            }
        }
    }
     if (!(c1.first == c2.first) && c1.second == c2.second)
    {
        if (c1.first > c2.first) {
            for (int i = 0; i < abs(c1.first - c2.first); ++i)
            {
                cout << "L" << endl;
            }
        }
        if (c1.first < c2.first) {
            for (int i = 0; i < abs(c1.first - c2.first); ++i)
            {
                cout << "R" << endl;
            }
        }
    }
}