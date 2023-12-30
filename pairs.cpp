#include <iostream>

int main()
{
    std::cout << "Input a number";
    int n;
    std::cin >> n;

    int sum = 0;
    for (int i = 2; i <= 2 * n; i += 2)
    {
        std::cout << i << std::endl;
        sum += i;
    }

    std::cout << "The sum of the first " << n << " even numbers: " << sum << std::endl;

    return 0;
}
