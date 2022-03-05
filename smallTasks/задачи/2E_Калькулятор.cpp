#include <vector>
#include <iostream>

int main()
{
    int n = 0;
    std::cin >> n;
    if (n > 2) {
        std::vector<std::vector<int>> v(n + 1);
        std::vector<int> a;
        v[0].push_back(0);
        v[1].push_back(1);
        v[2].push_back(1);
        v[2].push_back(2);
        v[3] = v[1];
        v[3].push_back(3);
        for (int i = 4; i < n + 1; i++)
        {
            a = v[i - 1];
            if (i % 3 == 0) {
                if (size(v[i / 3]) < size(a)) {
                    a = v[i / 3];
                }
            }
            if (i % 2 == 0) {
                if (size(v[i / 2]) < size(a)) {
                    a = v[i / 2];
                }
            }
            v[i] = a;
            v[i].push_back(i);
        }
        std::cout << size(v[n]) - 1 << "\n";
        for (int i = 0; i < size(v[n]); i++)
        {
            std::cout << v[n][i] << " ";
        }
    }
    if (n == 2) {
        std::cout << 1 << "\n";
        std::cout << 1 << " " << 2;
    }
    if (n == 1) {
        std::cout << 0 << "\n";
        std::cout << 1;
    }
}
