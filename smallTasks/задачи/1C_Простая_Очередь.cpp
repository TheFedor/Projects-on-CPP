#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v;
    std::string s = "";
    int n = 0;
    while (true) {
        std::cin >> s;
        if (s == "push") {
            std::cin >> n;
            v.push_back(n);
            std::cout << "ok" << "\n";
        }
        if (s == "pop") {
            std::cout << v[0] << "\n";
            for (int i = 0; i < size(v)-1; i++)
            {
                v[i] = v[i + 1];
            }
            v.pop_back();
        }
        if (s == "front") {
            std::cout << v[0] << "\n";
        }
        if (s == "size") {
            std::cout << size(v) << "\n";
        }
        if (s == "clear") {
            int sch = size(v);
            for (int i = 0; i < sch; i++)
            {
                v.pop_back();
            }
            std::cout << "ok" << "\n";
        }
        if (s == "exit") {
            std::cout << "bye";
            break;
        }
    }
}
