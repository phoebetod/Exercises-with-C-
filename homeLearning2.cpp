#include <iostream>

void errorMessage(int a, int b, int c)
{
    if (a > 30 || a < 0)
        std::cout << "Error: you must only enter numbers between 0 and 30.\n";
    
    else if (b > 30 || b < 0)
        std::cout << "Error: you must only enter numbers between 0 and 30.\n";

    else if (c > 30 || c < 0)
        std::cout << "Error: you must only enter numbers between 0 and 30.\n";
}

void oddNumbers()
{
    // Create a function that takes in numbers between 0-30 and outputs the total sum of the odd numbers only.

    int a{};
    int b{};
    int c{};

    std::cout << "Please enter three numbers.\n";
    std::cin >> a >> b >> c;

    errorMessage(a, b, c);

    if (a % 2 == 0)
        a = 0;

    if (b % 2 == 0)
        b = 0;

    if (c % 2 == 0)
        c = 0;

    std::cout << "The sum of the odd numbers is " << (a + b + c) << ".\n";
}

void timesThree()
{
    // Create a function that takes in numbers between 0-30 and outputs each even number multiplied by 3.
    int a{};
    int b{};
    int c{};

    std::cout << "Please enter three numbers.\n";
    std::cin >> a >> b >> c;
    std::cout << "Now to multiply your even numbers by three:\n";

    errorMessage(a, b, c);
    
    if (a % 2 == 0)
    {
        std::cout << a*3 << "\n";
    }

    if (b % 2 == 0)
    {
        std::cout << b*3 << "\n";
    }

    if (c % 2 == 0)
    {
        std::cout << c*3 << "\n";
    }

    if ((a % 2 != 0) && (b % 2 != 0) && (c % 2 != 0))
    {
        std::cout << "You did not enter any even numbers.\n";
    }
    

}

void counter()
{
// Create a function that while the counter is less than 10, the output to the terminal will be:
// “The number is n”
// When the counter reaches 5 the output will be:
// “We are halfway through”
// When the counter reaches 10 the output will be:
// “This is the end of the program”

    int n{1};
    while (n<10)
    {
        std::cout << "The number is " << n << ".\n";
        if (n == 5)
            std::cout << "We are halfway through!\n";
        ++n; 
    }
    
    std::cout << "This is the end of the program.\n";

}

int main()
{
    // oddNumbers();
    // timesThree();
    counter();

    return 0;
}