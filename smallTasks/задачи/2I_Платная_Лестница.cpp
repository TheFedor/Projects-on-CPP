#include <vector>
#include <iostream>

int main()
{
    int n = 0;
    std::cin >> n;
    std::vector<int> v(n + 2);
    for (int i = 2; i < n+2; i++)
    {
        std::cin >> v[i];
    }
    for (int i = 2; i < n+2; i++)
    {
        if (v[i - 1] < v[i - 2]) {
            v[i] += v[i - 1];
        }
        else {
            v[i] += v[i - 2];
        }
    }
    std::cout << v[size(v) - 1];
}
