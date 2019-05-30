# Exercises 2
### David Whynot - 5/30/2019
### CS 2150
You can find the source code for this document and the exercises [here](https://github.com/davidmwhynot/cs2150/tree/master/exercises/2).

# Instructions
Do Exercises 2 - #10, 12, 14, 18, 26 on pages 248 - 252 of C++ Programming. Submit your work as a single Microsoft Word file.

# #10
What is the output of the following code? (2, 4)
```c++
int num = 17;		//Line 1
double gpa = 3.85;	//Line 2
bool done;		//Line 3

done = (num == static_cast<int>(2 * gpa + 9.3));	//Line 4
cout << "The value of done is: " << done << endl;	//Line 5
```
The value of done is: 1



# #12
What is the output of the following program? (2)
```c++
#include <iostream>

using namespace std;

int main()
{
	int firstNum = 28;
	int secondNum = 25;

	cout << firstNum << " " << secondNum << endl;
	cout << (firstNum = 38 - 7) << endl;
	cout << (firstNum <= 75) << endl;
	cout << (firstNum > secondNum + 10) << endl;
	cout << (firstNum >= 3 * secondNum - 100) << endl;
	cout << (secondNum - 1 == 2 * firstNum) << endl;
	cout << firstNum << " " << secondNum << endl;

	return 0;
}
```
28 25
31
1
0
1
0
31 25



# #14
#### a. Write C++ statements that output `First Year` if the `standing` is `'F'`, `Sophomore` if the `standing` is `'S'`, and `Junior or Senior` otherwise. (3)
```c++
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
```

#### b. Write C++ statements that output `First Year or Sophomore` if the `standing` is `'1'` or `'2'`, `Junior or Senior` if the standing is `'3'` or `'4'`, and `Graduate Student` otherwise. (3)
```c++
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
```



# #18
```c++
#include <iostream>

using namespace std;

int main()
{
	int first = 16;
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

	return 0;
}
```
#### a. What is the output of the program in Exercise 17, if `first = 16` and `second = 5`? (2, 3, 5)
-10 -20

#### b. What is the output of the program in Exercise 17, if `first = 26` and `second = 8`? (2, 3, 5)
5 15



# #26
Determine whether the following are valid `switch` statements. If not, explain why. Assume that `n` and `digit` are `int` variables. (11)
#### a.
```c++
switch (n <= 2)
{
case 0:
	cout << "Draw." << endl;
	break;
case 1:
	cout << "Win." << endl;
	break;
case 2:
	cout << "Lose." << endl;
	break;
}
```
This switch statement is invalid.
The switch expression is a comparison operation. Comparison operations have `boolean` values as their results (`0` or `1`). The `case 2:` causes an error because it exceeds the maximum value for the `boolean` type.

#### b.
```c++
switch (digit / 4)
{
case 0,
case 1:
	cout << "low." << endl;
	break;
case 1,
case 2:
	cout << "middle." << endl;
	break;
case 3:
	cout << "high." << endl;
}
```
This switch statement is invalid.
Using a comma to list multiple cases for the same set of values causes syntax errors. Use a colon instead.

#### c.
```c++
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
```
This switch statement is valid.

#### d.
```c++
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
```
Despite its... unconventional syntax, this switch statement is completely valid and compiles just fine.