# Conditional Statements and Loops in C++ - README

# Introduction

Programming mein decisions lene aur repeated tasks perform karne ke liye:

* **Conditional Statements**
* **Loops**

use kiye jaate hain.

---

# PART 1 — CONDITIONAL STATEMENTS

# 1. What are Conditional Statements?

Conditional statements conditions check karte hain.

Example:

```text id="h61r1d"
Agar marks 33 se zyada hain → Pass
warna → Fail
```

---

# Types of Conditional Statements

| Statement        | Use                    |
| ---------------- | ---------------------- |
| `if`             | Single condition check |
| `if-else`        | Two conditions         |
| `else-if ladder` | Multiple conditions    |
| `nested if`      | Inside another if      |
| `switch`         | Multiple choices       |

---

# 2. if Statement

## Syntax

```cpp id="wffxg0"
if(condition)
{
    // code
}
```

---

## Example

```cpp id="glvq0l"
#include <iostream>
using namespace std;

int main() {

    int age = 20;

    if(age >= 18)
    {
        cout << "Eligible for voting";
    }

    return 0;
}
```

---

# Flowchart

```text id="j64fh1"
        ┌─────────┐
        │ START   │
        └────┬────┘
             │
      ┌──────▼──────┐
      │ age >= 18 ? │
      └──────┬──────┘
             │YES
             ▼
   ┌──────────────────┐
   │ Print Eligible   │
   └────────┬─────────┘
            │
       ┌────▼────┐
       │  END    │
       └─────────┘
```

---

# 3. if-else Statement

## Syntax

```cpp id="rq4v3k"
if(condition)
{
    // true block
}
else
{
    // false block
}
```

---

## Example

```cpp id="zdh5f5"
#include <iostream>
using namespace std;

int main() {

    int number;

    cout << "Enter Number: ";
    cin >> number;

    if(number % 2 == 0)
    {
        cout << "Even";
    }
    else
    {
        cout << "Odd";
    }

    return 0;
}
```

---

# Pseudocode

```text id="2yprtb"
START

INPUT NUMBER

IF NUMBER % 2 == 0
    PRINT "Even"
ELSE
    PRINT "Odd"

END
```

---

# 4. else-if Ladder

Multiple conditions check karne ke liye.

---

## Syntax

```cpp id="ekznv0"
if(condition1)
{
}
else if(condition2)
{
}
else
{
}
```

---

## Example

```cpp id="ch6wml"
#include <iostream>
using namespace std;

int main() {

    int marks;

    cout << "Enter Marks: ";
    cin >> marks;

    if(marks >= 90)
    {
        cout << "Grade A";
    }
    else if(marks >= 75)
    {
        cout << "Grade B";
    }
    else if(marks >= 50)
    {
        cout << "Grade C";
    }
    else
    {
        cout << "Fail";
    }

    return 0;
}
```

---

# 5. Nested if

Ek `if` ke andar doosra `if`.

---

## Example

```cpp id="ixrxk4"
#include <iostream>
using namespace std;

int main() {

    int age = 20;
    bool hasID = true;

    if(age >= 18)
    {
        if(hasID)
        {
            cout << "Entry Allowed";
        }
    }

    return 0;
}
```

---

# 6. switch Statement

Multiple options ke liye use hota hai.

---

## Syntax

```cpp id="rwq1rb"
switch(variable)
{
    case value:
        // code
        break;

    default:
        // code
}
```

---

## Example

```cpp id="5yk4vi"
#include <iostream>
using namespace std;

int main() {

    int day;

    cout << "Enter Day Number: ";
    cin >> day;

    switch(day)
    {
        case 1:
            cout << "Monday";
            break;

        case 2:
            cout << "Tuesday";
            break;

        default:
            cout << "Invalid";
    }

    return 0;
}
```

---

# PART 2 — LOOPS

# 7. What are Loops?

Loops repeated tasks perform karte hain.

Example:

```text id="j9pd4e"
Hello ko 10 baar print karna
```

---

# Types of Loops

| Loop            | Use                    |
| --------------- | ---------------------- |
| `for` loop      | Fixed repetitions      |
| `while` loop    | Condition based        |
| `do-while` loop | Executes at least once |

---

# 8. for Loop

## Syntax

```cpp id="9q48na"
for(initialization; condition; update)
{
    // code
}
```

---

## Example

```cpp id="duy7wb"
#include <iostream>
using namespace std;

int main() {

    for(int i = 1; i <= 5; i++)
    {
        cout << i << endl;
    }

    return 0;
}
```

---

# Output

```text id="7vtx3l"
1
2
3
4
5
```

---

# Flowchart

```text id="p9s6i2"
        ┌─────────┐
        │ START   │
        └────┬────┘
             │
        ┌────▼────┐
        │ i = 1   │
        └────┬────┘
             │
      ┌──────▼──────┐
      │ i <= 5 ?    │
      └──────┬──────┘
             │YES
             ▼
      ┌─────────────┐
      │ Print i     │
      └──────┬──────┘
             │
      ┌──────▼──────┐
      │ i++         │
      └──────┬──────┘
             │
             └─────────↺

             NO
             │
        ┌────▼────┐
        │  END    │
        └─────────┘
```

---

# 9. while Loop

Condition true hone tak loop chalta hai.

---

## Syntax

```cpp id="trc0dx"
while(condition)
{
    // code
}
```

---

## Example

```cpp id="8f9i8i"
#include <iostream>
using namespace std;

int main() {

    int i = 1;

    while(i <= 5)
    {
        cout << i << endl;
        i++;
    }

    return 0;
}
```

---

# 10. do-while Loop

Ye kam se kam ek baar execute hota hai.

---

## Syntax

```cpp id="q8j17u"
do
{
    // code
}
while(condition);
```

---

## Example

```cpp id="67cn05"
#include <iostream>
using namespace std;

int main() {

    int i = 1;

    do
    {
        cout << i << endl;
        i++;

    } while(i <= 5);

    return 0;
}
```

---

# 11. break Statement

Loop ko immediately stop karta hai.

---

## Example

```cpp id="4es61t"
for(int i = 1; i <= 10; i++)
{
    if(i == 5)
    {
        break;
    }

    cout << i << endl;
}
```

---

# Output

```text id="fz4olw"
1
2
3
4
```

---

# 12. continue Statement

Current iteration skip karta hai.

---

## Example

```cpp id="yswf79"
for(int i = 1; i <= 5; i++)
{
    if(i == 3)
    {
        continue;
    }

    cout << i << endl;
}
```

---

# Output

```text id="8lxvr0"
1
2
4
5
```

---

# 13. Difference Between Loops

| Loop       | Condition Check |
| ---------- | --------------- |
| `for`      | Beginning       |
| `while`    | Beginning       |
| `do-while` | End             |

---

# 14. Practice Questions

## Conditional Statements

1. Check positive or negative number.
2. Find largest of two numbers.
3. Voting eligibility program.
4. Grade calculator.
5. Calculator using switch.

---

## Loops

6. Print 1 to 10.
7. Print even numbers.
8. Find sum of first 10 numbers.
9. Multiplication table.
10. Factorial program.

---

# 15. Mini Assignment

Create:

* Flowchart
* Pseudocode
* C++ Program

For:

1. Even/Odd Program
2. Largest of 3 Numbers
3. Multiplication Table
4. Factorial Program
5. Calculator Using Switch

---

# 16. Conclusion

## Conditional Statements

Decision making ke liye use hote hain:

* `if`
* `if-else`
* `else-if`
* `switch`

## Loops

Repeated tasks ke liye use hote hain:

* `for`
* `while`
* `do-while`

Ye concepts programming ka core foundation hote hain.
