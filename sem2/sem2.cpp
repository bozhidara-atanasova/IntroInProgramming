#include <iostream>

int main()
{
	//zad1
    /*int n;
    std::cin >> n;
	switch (n)
	{
	case 1: std::cout << "Monday" << std::endl;
		break;
	case 2: std::cout << "Tuesday" << std::endl;
		break;
	case 3: std::cout << "Wednesday" << std::endl;
		break;
	case 4: std::cout << "Thursday" << std::endl;
		break;
	case 5: std::cout << "Friday" << std::endl;
		break;
	case 6: std::cout << "Saturday" << std::endl;
		break;
	case 7: std::cout << "Sunday" << std::endl;
		break;
	default: std::cout << "Invalid day";
		break;
	}*/
	//2
	/*int n;
	std::cin >> n;
	std::string result = (n < 100) ? "Less than 100" : (n <= 200) ? "Between 100 and 200" : "Greater than 200";
	std::cout << result;*/
	//3
	/*double n;
	std::cin >> n;
	std::string result = (n <= 10) ? "Slow" : (n > 10 && n <= 50) ? "Average" : (n > 50 && n <= 150) ? "FAST" : "ULTRA FAST";
	std::cout << result;*/
	//5
	/*int hours, minutes;
	std::cout << "Enter hours (0-23): ";
	std::cin >> hours;
	std::cout << "Enter minutes (0-59): ";
	std::cin >> minutes;
	minutes += 15;
	if (minutes >= 60) {
		minutes -= 60;
		hours++;
	}
	if (hours >= 24) {
		hours -= 24;
	}
	std::cout << "Time after 15 minutes: ";
	if (hours < 10) {
		std::cout << "0";
	}
	std::cout << hours << ":";
	if (minutes < 10) {
		std::cout << "0";
	}
	std::cout << minutes << std::endl;
	return 0;*/
	//6
	/*int a, b, c, d, e;
	std::cin >> a >> b >> c >> d >> e;
	if (
		(b >= a || b <= a) &&
		((b >= a && b >= c) || (b <= a && b <= c)) &&
		((c >= b && c >= d) || (c <= b && c <= d)) &&
		((d >= c && d >= e) || (d <= c && d <= e)) &&
		(d >= e || d <= e)
		) {
		std::cout << "yes";
	}
	else {
		std::cout << "no";
	}

	return 0;*/
}

