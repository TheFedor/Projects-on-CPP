#include <iostream>
#include <vector>

int main()
{
    int n = 0;
    std::cin >> n;
    std::vector<int> v(n+1);
    v[0] = 1;
    v[1] = 1;
    for ( int i = 2; i <=n ; i++)
    {
        if (i % 2 == 0) {
            v[i] = v[i / 2] + v[i / 2 - 1];
        }
        else
        {
            v[i] = v[(i - 1) / 2] - v[(i - 1) / 2 - 1];
        }
    }
    std::cout << v[n];
}
