#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string str, stack;
    char word = '\0';
    char word_last = '\0';
    while (cin >> word) {
        if ((word >= 48) && (word <= 57))
        {
            if (word_last == '\0') {
                str += word;
            }
            else {
                if ((word_last >= 48) && (word_last <= 57))
                {
                    str += word;
                }
                else {
                    str += ' ';
                    str += word;
                }
            }
        }

        if (((word >= 42) && (word <= 47)) || (word == 94))
        {
            if (word == '*') {
                word = '.';
            }
            if (word == '-') {
                word = ',';
            }
            if (stack.empty()) {
                stack += word;
            }
            else {
                if ((stack.back() >= word) || (stack.back() == word - 1) ||
                    (stack.back() == word + 1)) {
                    while ((stack.back() >= word) || (stack.back() == word - 1) ||
                        (stack.back() == word + 1)) {
                        str += ' ';
                        str += stack.back();
                        stack.pop_back();
                    }
                    stack += word;
                }
                else stack += word;
            }
        }
        if (word == '(')
        {
            stack += word;
        }
        if (word == ')')
        {
            while (stack.back() != '(')
            {
                str += ' ';
                str += stack.back();
                stack.pop_back();
            }
            stack.pop_back();
        }

        word_last = word;

        if (word == 'Y') 
            break;
    }
    while (!stack.empty())
    {
        str += ' ';
        str += stack.back();
        stack.pop_back();
    }

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '.')
            str[i] = '*';
        if (str[i] == ',')
            str[i] = '-';
    }

    std::cout << str << '\n';
    return 0;
}
