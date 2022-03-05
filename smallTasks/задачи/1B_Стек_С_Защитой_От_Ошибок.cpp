#include <vector>
#include <iostream>

int main()
{
    std::vector<int> v;
    int n = 0;
    std::string s = "";
    while (true) {
        std::cin >> s;
        if (s == "push") {
            std::cin >> n;
            v.push_back(n);
            std::cout << "ok" << "\n";
        }
        if (s == "pop") {
            if (size(v) > 0) {
                std::cout << v[size(v) - 1] << "\n";
                v.pop_back();
            }
            else {
                std::cout << "error" << "\n";
            }
        }
        if (s == "back") {
            if (size(v) > 0) {
                std::cout << v[size(v) - 1] << "\n";
            }
            else {
                std::cout << "error" << "\n";
            }
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