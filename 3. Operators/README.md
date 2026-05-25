# Operators in C++ - README

## Introduction

C++ mein **Operators** special symbols hote hain jo operations perform karte hain.

Example:

```cpp id="m2eh7m"
a + b
```

Yahan `+` ek operator hai jo addition karta hai.

---

# 1. Types of Operators in C++

| Operator Type        | Example                   |        |        |
| -------------------- | -----------------------   | ------ | ------ |
| Arithmetic Operators | `+`, `-`, `*`, `/`, `%`   |        |        |
| Assignment Operators | `=`, `+=`, `-=`,`*=`,`/=` |        |        |
| Relational Operators | `==`, `!=`, `>`, `<`      |        |        |
| Logical Operators    | `&&`, `ɭɭ`, `!`,          |        |        |
| Increment/Decrement  | `++`, `--`                |        |        |
| Bitwise Operators    | `&`, `ɭ`, `^`             |        |        |
| Ternary Operator     | `? :`                     |        |        |
| sizeof Operator      | `sizeof()`                |        |        |

---

# 2. Arithmetic Operators

Arithmetic operators mathematical calculations ke liye use hote hain.

| Operator | Meaning             |
| -------- | ------------------- |
| `+`      | Addition            |
| `-`      | Subtraction         |
| `*`      | Multiplication      |
| `/`      | Division            |
| `%`      | Modulus (Remainder) |

---

## Example

```cpp id="75f4te"
#include <iostream>
using namespace std;

int main() {

    int a = 10;
    int b = 3;

    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;
    cout << a % b << endl;

    return 0;
}
```

---

## Output

```cpp id="87rzhd"
13
7
30
3
1
```

---

# 3. Assignment Operators

Assignment operators variables mein values assign karte hain.

| Operator | Meaning             |
| -------- | ------------------- |
| `=`      | Assign              |
| `+=`     | Add and assign      |
| `-=`     | Subtract and assign |
| `*=`     | Multiply and assign |
| `/=`     | Divide and assign   |

---

## Example

```cpp id="tqizth"
int x = 10;

x += 5;   // x = x + 5
x -= 2;   // x = x - 2
```

---

# 4. Relational Operators

Comparison ke liye use hote hain.

Result:

* `true`
* `false`

| Operator | Meaning            |
| -------- | ------------------ |
| `==`     | Equal to           |
| `!=`     | Not equal to       |
| `>`      | Greater than       |
| `<`      | Less than          |
| `>=`     | Greater than equal |
| `<=`     | Less than equal    |

---

## Example

```cpp id="x5s44i"
int a = 10;
int b = 20;

cout << (a == b) << endl;
cout << (a < b) << endl;
cout << (a > b) << endl;
```

---

## Output

```cpp id="6kz7jj"
0
1
0
```

> `1 = true`
> `0 = false`

---

# 5. Logical Operators

Conditions combine karne ke liye use hote hain.

| Operator | Meaning     |   |            |
| -------- | ----------- | - | ---------- |
| `&&`     | Logical AND |   |            |
| `ɭɭ`     | Logical OR |    |            |
| `!`      | Logical NOT |   |            |

---

## AND (`&&`)

Dono conditions true honi chahiye.

```cpp id="e7xq7t"
int age = 18;
int marks = 80;

cout << (age >= 18 && marks > 75);
```

Output:

```cpp id="xq6yp7"
1
```

---

## OR (`||`)

Ek bhi condition true ho toh result true.

```cpp id="mpp3l3"
cout << (10 > 5 || 3 > 10);
```

Output:

```cpp id="l5e0o8"
1
```

---

## NOT (`!`)

True ko false aur false ko true bana deta hai.

```cpp id="8vdw4d"
cout << !(10 > 5);
```

Output:

```cpp id="o3n4rj"
0
```

---

# 6. Increment and Decrement Operators

| Operator | Meaning       |
| -------- | ------------- |
| `++`     | Increase by 1 |
| `--`     | Decrease by 1 |

---

## Example

```cpp id="4xb0q8"
int x = 5;

x++;
cout << x << endl;

x--;
cout << x << endl;
```

---

# 7. Pre and Post Increment

## Pre Increment

```cpp id="jxhx2u"
++x
```

Pehle value increase hoti hai.

---

## Post Increment

```cpp id="2n16p8"
x++
```

Pehle old value use hoti hai.

---

## Example

```cpp id="bjmt70"
int x = 5;

cout << ++x << endl;
cout << x++ << endl;
cout << x << endl;
```

---

## Output

```cpp id="pd10dr"
6
6
7
```

---

# 8. Bitwise Operators

Binary level operations ke liye use hote hain.

| Operator | Meaning     |    |
| -------- | ----------- | -- |
| `&`      | AND         |    |
| `ɭ`      |             | OR |
| `^`      | XOR         |    |
| `~`      | NOT         |    |
| `<<`     | Left Shift  |    |
| `>>`     | Right Shift |    |

---

## Example

```cpp id="b2h6q8"
int a = 5;
int b = 3;

cout << (a & b) << endl;
cout << (a | b) << endl;
```

---

# 9. Ternary Operator

Short form of `if-else`.

## Syntax

```cpp id="7u2z9n"
condition ? true_value : false_value;
```

---

## Example

```cpp id="vw63qq"
int age = 20;

string result = (age >= 18) ? "Adult" : "Minor";

cout << result;
```

---

# 10. sizeof Operator

Datatype ya variable ka size batata hai.

---

## Example

```cpp id="7xknu5"
cout << sizeof(int) << endl;
cout << sizeof(char) << endl;
```

---

## Output

```cpp id="5c6pwr"
4
1
```

---

# 11. Operator Precedence

C++ operators ka execution order hota hai.

## Example

```cpp id="g2v3vh"
int result = 10 + 5 * 2;
```

Output:

```cpp id="16l0i4"
20
```

Kyun?

* Pehle multiplication
* Fir addition

---

## Important Precedence

| Priority | Operators        |
| -------- | ---------------- |
| High     | `()`, `++`, `--` |
| Medium   | `*`, `/`, `%`    |
| Low      | `+`, `-`         |
| Lowest   | `=`, `+=`        |

---

# 12. Complete Example Program

```cpp id="o7hww2"
#include <iostream>
using namespace std;

int main() {

    int a = 10;
    int b = 5;

    cout << "Addition: " << a + b << endl;
    cout << "Subtraction: " << a - b << endl;
    cout << "Multiplication: " << a * b << endl;
    cout << "Division: " << a / b << endl;

    cout << (a > b) << endl;

    cout << (a > 5 && b < 10) << endl;

    a++;
    cout << a << endl;

    return 0;
}
```

---

# 13. Real Life Analogy

| Real Life       | Operator            |
| --------------- | ------------------- |
| Calculator      | Arithmetic Operator |
| Comparison      | Relational Operator |
| Decision Making | Logical Operator    |

---