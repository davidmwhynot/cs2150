# Instructions
Do Exercises 1 - #12, 14, 16, 18, 20 on pages 107 - 109 of C++ Programming. Submit your work as a single Microsoft Word file.



# #12
Write C++ statements that accomplish the following. (6, 7)
#### a. Declare `int` variables `x` and `y`. Initialize `x` to `25` and `y` to `18`.
```c++
int x = 25, y = 18;
```

#### b. Declare and initialize an `int` variable `temp` to `10` and a `char` variable `ch` to `'A'`.
```c++
int temp = 10;
char ch = 'A';
```

#### c. Update the value of an `int` variable `x` by adding `5` to it.
```c++
x += 5;
```

#### d. Declare and initialize a `double` variable `payRate` to `12.50`.
```c++
double payRate = 12.50;
```

#### e. Copy the value of an `int` variable `firstNum` into an `int` variable `tempNum`.
```c++
tempNum = firstNum;
```

#### f. Swap the contents of the `int` variables `x` and `y`. (Declare additional variables, if necessary.)
```c++
int temp = x;
x = y;
y = temp;
```

#### g. Suppose `x` and `y` are double variables. Output the contents of `x`, `y`, and the expression `x + 12 / y - 18`.
```c++
cout << "x = " << x << endl;
cout << "y = " << y << endl;

cout << "x + 12 / y - 18 = " << x + 12 / y - 18 << endl;
```

#### h. Declare a `char` variable `grade` and set the value of grade to `'A'`.
```c++
char grade = 'A';
```

#### i. Declare `int` variables to store four integers.
```c++
int int1, int2, int3, int4;
```

#### j. Copy the value of a `double` variable `z` to the nearest integer into an `int` variable `x`.
```c++
double z = 12.9;

// round to nearest, need to "#include <math.h>" at start of file
x = round(z);
// x = 13

// normal casting (floor)
x = (int) z;
// x = 12
```



# #14
Suppose `x`, `y`, `z`, and `w` are `int` variables. What value is assigned to each of these variables after the last statement executes? (4, 6)
```c++
x = 7; y = 2 * x - 3;
z = x + y - 3;
x = z / y;
y = z - x;
w = x + y + 2 * z;
w--;
y = 2 * w + z - x;
```
x = 1
y = 102
z = 15
w = 44


# #16
Suppose `x`, `y`,and `z` are `int` variables and `x = 18`, `y = 5`, and `z = 4`. What is the output of each of the following statements? (3, 4, 10)
#### a. `cout << "x = " << x << ", y = " << y << ", z = " << z << endl;`
x = 18, y = 5, z = 4

#### b. `cout << "5 * x - y = " << 5 * x - y << endl;`
5 * x - y = 85

#### c. `cout << "Product of " << x << " and " << z << " is " << x * z << endl;`
Product of 18 and 4 is 72

#### d. `cout << "x - y / z = " << x - y / z << endl;`
x - y / z = 17

#### e. `cout << x << " square = " << x * x << endl;`
18 square = 324



# #18
Write C++ statements that accomplish the following. (10)
#### a. Outputs the newline character.
```c++
// method 1
cout << endl;

// method 2
cout << '\n';
```

#### b. Outputs the tab character.
```c++
cout << '\t';
```

#### c. Outputs double quotation mark.
```c++
cout << '\"';
```



# #20
Give meaningful identifiers for the following variables and write a proper C++ declaration and initialization to a reasonable value. (1, 6, 7)
#### a. A variable to store the letter grade, (A, B, C, D, or F).
```c++
enum letterGrades {A, B, C, D, F} grade;
grade = A;
```

#### b. A variable to store the sales tax price of an item.
```c++
double salesTaxPrice;
salesTaxPrice = 1.06;
```

#### c. A variable to store the number of juice bottles sold.
```c++
int juiceBottlesSold;
juiceBottlesSold = 3;
```

#### d. A variable to store the billing amount of a doctor’s visit.
```c++
double billingAmount;
billingAmount = 1974.36;
```

#### e. A variable to store the grade point average (GPA).
```c++
double gpa;
gpa = 3.89;
```
