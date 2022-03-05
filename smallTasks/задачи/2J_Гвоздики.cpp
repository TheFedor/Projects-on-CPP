#include <vector>
#include <iostream>

int main()
{
    int n = 0;
    std::cin >> n;
    std::vector<int> v(n+1);
    for (int i = 1; i < n+1; i++)
    {
        std::cin >> v[i];
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j < n + 1; j++)
        {
            if (v[j] < v[i]) {
                int zm = v[j];
                v[j] = v[i];
                v[i] = zm;
            }
        }
    }
    if (n > 3) {
        std::vector<int> dp(n+1);
        dp[2] = v[2] - v[1];
        dp[3] = v[3] - v[1];
        for (int i = 4; i < n + 1; i++)
        {
            if (dp[i - 1] <= dp[i - 2]) {
                dp[i] = dp[i - 1] + v[i] - v[i - 1];
            }
            else {
                dp[i] = dp[i - 2] + v[i] - v[i - 1];
            }
        }
        std::cout << dp[n];
    }
    else if (n == 3) {
        std::cout << (v[2] - v[1]) + (v[3] - v[2]);
    }
    else if (n == 2) {
        std::cout << v[2] - v[1];
    }
}
