#include <iostream>
#include <string>
int gcd(int a, int b) {
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}//1
int lcm(int a, int b) {
	return (a / gcd(a, b)) * b;
}//2
bool isPrime(int number) {
	if (number <= 1) {
		return false;
	}
	for (int i = 2; i * i <= number; ++i) {
		if (number % i == 0) {
			return false;
		}
	}
	return true;
}//3

int main()
{
	//1
 /*   int n,cnt = 0;
    do
    {
        std::cin >> n;
        cnt+=n;
    } while (n != 0);
    std::cout << cnt;*/
	//3
	/*std::string n;
	std::cin >> n;
	int length = n.length();
	std::string result;
	if (length % 2 == 0) {
		int mid = length / 2;
		result = n.substr(0, mid - 1) + n.substr(mid + 1);
	}
	else {
		int mid = length / 2;
		result = n.substr(0, mid) + n.substr(mid + 1);
	}
	int resultNumber = std::stoi(result);
	int incrementedNumber = resultNumber + 1;
	std::cout << resultNumber << ", " << incrementedNumber << std::endl;

	return 0;*/
	//4
	/*int a, b;
	std::cin >> a >> b;
	for (int i = a; i <= b; i++)
	{
		if (isPrime(i)) {
			std::cout << i << " is a prime number." << std::endl;
		}
	}*/
	//5
	/*int n;
	std::cin >> n;
	bool flag = false;
	if (n > 0 && ((n & (n - 1)) == 0)) flag = true;
	std::cout << std::boolalpha<<flag;
	return 0;*/
	//7
	/*int n;
	std::cin >> n;
	for (int i = 0; i < n ; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			std::cout << "$" ;
		}
		std::cout << std::endl;
	}*/
	//12
	int n;
	std::cin >> n;
	std::cout << " + ";
	for (int i = 0; i < n - 2; i++)
	{
		std::cout << " - ";
	}
	std::cout << " + ";
	std::cout << std::endl;
	for (int i = 0; i < n - 2; i++) {
		std::cout << " | ";
		for (int j = 0; j < n - 2; j++) {
			std::cout << " - ";
		}
		std::cout << " | " << std::endl;
	}
	std::cout << " + ";
	for (int i = 0; i < n - 2; i++)
	{
		std::cout << " - ";
	}
	std::cout << " + ";
	std::cout << std::endl;
}
