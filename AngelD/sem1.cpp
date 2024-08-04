#include <iostream>

int main()
{
    //zad1
   /* int n;
    std::cin >> n;
    bool check = n % 2 ==0;
    std::cout << check;*/
    //zad2
    //int n;
    //std::cin >> n;
    //int thirdDigit = n % 10;
    //n /= 10; //remove the lastDigit;

    //int secondDigit = n % 10;
    //n /= 10; //remove the lastDigit;

    //int firstDigit = n % 10;

    //int reversed = thirdDigit * 100 + secondDigit * 10 + firstDigit;
    //reversed++;
    //std::cout << reversed;
    //zad3
    /*char n;
    std::cin >> n;
    bool check = n == 'a' || n == 'u'||n == 'e'|| n == 'i'|| n == 'o'|| n == 'y' ;
    std::cout << check;
    return 0;*/
    //zad4
   /* int n;
    std::cin >> n;
    bool check = n == 2 || n == 3 || n == 4 || n == 5 || n == 6;
    std::cout << check;*/
    //zad6
    /*int a, b;
    std::cin >> a >> b;
    int result = (a + b) * (a + b) * (a + b) * (a + b) - (a - b) * (a - b);
    std::cout << result;*/
    //zad8
    int a, b;
    std::cin >> a >> b;
    bool check = a > b;
    std::cout << a * check + b * !check;
    return 0;
}
