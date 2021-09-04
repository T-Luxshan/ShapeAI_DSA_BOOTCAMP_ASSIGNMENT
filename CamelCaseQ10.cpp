#include <iostream>

int main()
{
    std::string input;
    std::cin >> input;

    int words = 1;
    for (int i = 0; i < input.length(); ++i)
    {
        if (input[i] < 97)
        {
            words++;
        }
    }
    std::cout << words;
}