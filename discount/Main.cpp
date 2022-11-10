#include <iostream>
int main()
{
    //Declaring variables
    int sum;
    double cost;
    std:: cout << "Enter the purchase amount " << std::endl;
    std::cin >> sum;
    //Verification according to the condition
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