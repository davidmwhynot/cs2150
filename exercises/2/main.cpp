// David Whynot - 5/30/2019
// Exercises 2
// CS 2150
// Documentation for these exercises can be found here:
// https://github.com/davidmwhynot/cs2150/tree/master/exercises/2/exercises-2.md
#include <iostream>

using namespace std;

// function declarations
void exercise10();

void exercise12();

void exercise14a();
void exercise14b();

void exercise18a();
void exercise18b();

void exercise26a();
void exercise26b();
void exercise26c();
void exercise26d();

int main() {
	// Exercise #10
	// exercise10();

	// Exercise #12
	// exercise12();

	// Exercise #14
	// a
	// exercise14a();
	// b
	// exercise14b();

	// Exercise #18
	// a
	// exercise18a();
	// b
	// exercise18b();

	// Exercise #26
	// a
	// exercise26a();
	// b
	// exercise26b();
	// c
	// exercise26c();
	// d
	exercise26d();

	return 0;
}

void exercise10() {
	// Exercise #10
	int num = 17;		//Line 1
	double gpa = 3.85;	//Line 2
	bool done;		//Line 3

	done = (num == static_cast<int>(2 * gpa + 9.3));	//Line 4
	cout << "The value of done is: " << done << endl;	//Line 5
}

void exercise12() {
	// Exercise #12
	int firstNum = 28;
	int secondNum = 25;

	cout << firstNum << " " << secondNum << endl;
	cout << (firstNum = 38 - 7) << endl;
	cout << (firstNum <= 75) << endl;
	cout << (firstNum > secondNum + 10) << endl;
	cout << (firstNum >= 3 * secondNum - 100) << endl;
	cout << (secondNum - 1 == 2 * firstNum) << endl;
	cout << firstNum << " " << secondNum << endl;
}

void exercise14a() {
	// Exercise #14 a
	// char standing = 'F';
	// char standing = 'S';
	char standing = 'J';

	string output;

	// method 1 - if/else statements
	if(standing == 'F') {
		output = "First Year";
	} else if(standing == 'S') {
		output = "Sophomore";
	} else {
		output = "Junior or Senior";
	}

	// method 2 - switch statement
	switch (standing) {
		case 'F':
			output = "First Year";
			break;
		case 'S':
			output = "Sophomore";
			break;
		default:
			output = "Junior or Senior";
	}

	cout << output << endl;
}

void exercise14b() {
	// Exercise #14 b
	// int standing = 1;
	// int standing = 2;
	// int standing = 3;
	// int standing = 4;
	int standing = 5;

	string output;

	// method 1 - if/else statements
	if(standing == 1 || standing == 2) {
		output = "First Year or Sophomore";
	} else if(standing == 3 || standing == 4) {
		output = "Junior or Senior";
	} else {
		output = "Graduate Student";
	}

	// method 2 - switch statement
	switch (standing) {
		case 1:
		case 2:
			output = "First Year or Sophomore";
			break;
		case 3:
		case 4:
			output = "Junior or Senior";
			break;
		default:
			output = "Graduate Student";
	}

	cout << output << endl;
}

void exercise18a() {
	// Exercise #18 a
	int first = 16;
	int second = 5;

	if ((first / second == 2) || (second / first == 3))
	{
		second = 10;
		first = 20;
	}
	else if ((first % second == 2 || second % first == 1))
	{
		second = 15;
		first = 5;
	}
	else
	{
		first = -10;
		second = -20;
	}

	cout << first << " " << second << endl;
}

void exercise18b() {
	// Exercise #18 b
	int first = 26;
	int second = 8;

	if ((first / second == 2) || (second / first == 3))
	{
		second = 10;
		first = 20;
	}
	else if ((first % second == 2 || second % first == 1))
	{
		second = 15;
		first = 5;
	}
	else
	{
		first = -10;
		second = -20;
	}

	cout << first << " " << second << endl;
}

void exercise26a() {
	// Exercise #26 a
	// int n = 0;

	// switch (n <= 2)
	// {
	// case 0:
	// 	cout << "Draw." << endl;
	// 	break;
	// case 1:
	// 	cout << "Win." << endl;
	// 	break;
	// case 2:
	// 	cout << "Lose." << endl;
	// 	break;
	// }
}

void exercise26b() {
	// Exercise #26 b
	// int digit = 4;

	// switch (digit / 4)
	// {
	// case 0,
	// case 1:
	// 	cout << "low." << endl;
	// 	break;
	// case 1,
	// case 2:
	// 	cout << "middle." << endl;
	// 	break;
	// case 3:
	// 	cout << "high." << endl;
	// }
}

void exercise26c() {
	// Exercise #26 c
	int n = 6;

	switch(n % 6)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		cout << n;
		break;
	case 0:
		cout << endl;
		break;
	}
}

void exercise26d() {
	// Exercise #26 d
	int n = 11;

	switch (n % 10)
	case 2:
	{
	case 4:
	case 6:
	case 8:
		cout << "Even";
		break;
	case 1:
	case 3:
	case 5:
	case 7:
		cout << "Odd";
		break;
	}
}