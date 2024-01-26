#include <iostream>

static bool IsEvan(int number) {
    return number % 2 == 0;
}

int main()
{
    std::cout << "Enter the number\n";
    int a;
    std::cin >> a;
    std::cout << "Number " << a << " is ";
    if (IsEvan(a)) {
        std::cout << "evan" << std::endl;
    }
    else {
        std::cout << "odd" << std::endl;
    }
}



