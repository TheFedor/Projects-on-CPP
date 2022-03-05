#include <vector>
#include <iostream>

int main()
{
    std::string s = "";
    std::vector<int> v;
    int n = 0;
    while (true) {
        std::cin >> s;
        if (s == "push_front") {
            std::cin >> n;
            v.push_back(0);
            for (int i = size(v) - 1; i > 0; --i)
            {
                v[i] = v[i - 1];
            }
            v[0] = n;
            std::cout << "ok" << "\n";
        }
        if (s == "push_back") {
            std::cin >> n;
            v.push_back(n);
            std::cout << "ok" << "\n";
        }
        if (s == "pop_front") {
            if (size(v) > 0) {
                std::cout << v[0] << "\n";
                for (int i = 0; i < size(v) - 1; i++)
                {
                    v[i] = v[i + 1];
                }
                v.pop_back();
            }
            else {
                std::cout << "error" << "\n";
            }
        }
        if (s == "pop_back") {
            if (size(v) > 0) {
                std::cout << v[size(v) - 1] << "\n";
                v.pop_back();
            }
            else {
                std::cout << "error" << "\n";
            }
        }
        if (s == "front") {
            if (size(v) > 0) {
                std::cout << v[0] << "\n";
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
            std::cout << "bye" << "\n";
            break;
        }
    }
}