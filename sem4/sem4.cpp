#include <iostream>
#include <cmath>
int opp(int n)//2
{
	int reversed = 0;
	while (n > 0)
	{
		int digit = n % 10;
		reversed = reversed * 10 + digit;
		n /= 10;
	}
	return reversed;
}
bool IsPalindrome(unsigned int n) {//3
	return n == opp(n); 
}
int power(int n, int k)
{
	int result = 1;
	for (int i = 0; i < k; i++)
	{
		result *= n;
	}
	return result;
}//7
int modul(int n)
{
	return abs(n);
}//1
int numbersCount(int n)
{
	int cnt = 0;
	while (n > 0)
	{
		int temp = n % 10;
		cnt += 1;
		n /= 10;
	}
	return cnt;
}//2
void conc(int n, int k)
{
	std::cout << n << k;
}//4
void cocn(int n)
{
	std::cout << opp(n) << n;
}//5
bool checkIfSorted(int n)
{
	if (n < 10) {
		return true;
	}
	bool ascending = true;
	bool descending = true;
	int lastDigit = n % 10;
	n /= 10;
	while (n > 0) {
		int currentDigit = n % 10;
		if (currentDigit > lastDigit) {
			ascending = false;
		}
		if (currentDigit < lastDigit) {
			descending = false;
			lastDigit = currentDigit;
			n /= 10;
		}
		return ascending || descending;
	}
}//7
bool areDigitsEqual(unsigned int n)
{
	int lastdigit = n % 10;
	while (n > 0)
	{
		int currentDigit = n % 10;
		if(currentDigit != lastdigit)return false;

		n /= 10;
	}
	return true;
}//8
bool sorted(int n)
{
	int lastdigit = n % 10;
	n /= 10;
	while (n > 0)
	{
		int currentDigit = n % 10;
		if (lastdigit < currentDigit)return false ;
		lastdigit = currentDigit;  
		n /= 10;
	}
	return true;
}//9
bool checkForCapitalLetter(const std::string& t) {
	for (char c : t) { 
		if (c >= 'A' && c <= 'Z') { 
			return true; 
		}
	}
	return false; 
}//10
int main()
{
	int n;
	std::cin >> n;
	//std::cout << std::boolalpha<<areDigitsEqual(n);
	/*int k;
	std::cin >> k; */ 
	//conc(n, k);
	//std::cout << opp(n);
	//std::cout <<std::boolalpha<< IsPalindrome(n);
	//std::cout << power(n, k);
	//std::cout << modul(n);
	//std::cout << numbersCount(n);
	//cocn(n);
}
