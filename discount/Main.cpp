#include <iostream>
int main()
{
    int sum;
    double cost;
    std:: cout << "Enter the purchase amount " << std::endl;
    std::cin >> sum;

    if (sum > 1000)
    {
        cost = sum - (sum * 0.10);
        std::cout << "The amount with a discount of 10%: " << cost;
    }
    else
    {
        std::cout << "The product costs less than 1000, so the discount is not available.";
    }
}