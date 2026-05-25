# Variables and Datatypes in C++

## Introduction

C++ mein **Variables** aur **Datatypes** programming ke basic building blocks hote hain.

Simple language mein:

* **Variable** = Ek container jo data store karta hai.
* **Datatype** = Kis type ka data store hoga.

---

# 1. Variables

## Variable Kya Hota Hai?

Variable ek naam hota hai jisme hum data store karte hain.

### Example

```cpp
#include <iostream>
using namespace std;

int main() {
    string name = "Rahul";
    int age = 12;

    cout << name << endl;
    cout << age << endl;

    return 0;
}
```

---

# 2. Variable Declaration Syntax

```cpp
datatype variable_name = value;
```

### Example

```cpp
int marks = 95;
float height = 5.6;
char grade = 'A';
```

---

# 3. Variable Naming Rules

## Rules

1. Variable name alphabet ya underscore (`_`) se start hona chahiye.
2. Number se start nahi kar sakte.
3. Space allowed nahi hota.
4. Special characters allowed nahi hote.

### Correct Examples

```cpp
int age = 15;
float _height = 5.4;
string studentName = "Aman";
```

### Wrong Examples

```cpp
int 1age = 15;
float student height = 5.4;
char @grade = 'A';
```

---

# 4. Datatypes in C++

Datatype batata hai ki variable kis type ka data store karega.

## Common Datatypes Table

| Datatype | Size                   | Range                           | Example   |
| -------- | ---------------------- | ------------------------------- | --------- |
| `int`    | 4 Bytes                | -2,147,483,648 to 2,147,483,647 | `10`      |
| `float`  | 4 Bytes                | ~7 decimal digits               | `3.14`    |
| `double` | 8 Bytes                | ~15 decimal digits              | `99.9999` |
| `char`   | 1 Byte                 | -128 to 127                     | `'A'`     |
| `bool`   | 1 Byte                 | `true` / `false`                | `true`    |
| `string` | Depends on text length | Characters                      | `"Hello"` |

> Note: Size compiler aur system ke according thoda change ho sakta hai.

---

# 5. Integer (`int`)

Whole numbers store karta hai.

## Size and Range

* **Size:** 4 Bytes
* **Range:** -2,147,483,648 to 2,147,483,647

### Example

```cpp
int marks = 95;
int age = 14;
```

---

# 6. Float (`float`)

Decimal numbers store karta hai.

## Size and Precision

* **Size:** 4 Bytes
* Approximately 6–7 decimal digits accurate

### Example

```cpp
float height = 5.6;
float temperature = 36.5;
```

---

# 7. Double (`double`)

Large decimal values ke liye use hota hai.

## Size and Precision

* **Size:** 8 Bytes
* Approximately 15 decimal digits accurate

### Example

```cpp
double pi = 3.141592653;
```

---

# 8. Character (`char`)

Single character store karta hai.

## Size and Range

* **Size:** 1 Byte
* **Range:** -128 to 127

### Example

```cpp
char grade = 'A';
char gender = 'M';
```

---

# 9. String (`string`)

Text store karta hai.

## Size

* Fixed size nahi hota
* Text length ke according memory use hoti hai

### Example

```cpp
string name = "Rahul";
string city = "Bhopal";
```

---

# 10. Boolean (`bool`)

Sirf do values store karta hai:

* `true`
* `false`

## Size

* **Size:** 1 Byte

### Example

```cpp
bool isStudent = true;
bool isRaining = false;
```

---

# 11. Special Integer Types

| Datatype    | Size         | Range               |
| ----------- | ------------ | ------------------- |
| `short`     | 2 Bytes      | -32,768 to 32,767   |
| `long`      | 4 or 8 Bytes | System dependent    |
| `long long` | 8 Bytes      | Very large integers |

### Example

```cpp
short a = 100;
long b = 100000;
long long c = 1000000000;
```

---

# 12. Finding Size Using `sizeof()`

C++ mein datatype ka size check karne ke liye `sizeof()` use karte hain.

### Example

```cpp
#include <iostream>
using namespace std;

int main() {

    cout << sizeof(int) << endl;
    cout << sizeof(float) << endl;
    cout << sizeof(char) << endl;

    return 0;
}
```

---

# 13. Complete Example Program

```cpp
#include <iostream>
using namespace std;

int main() {

    string name = "Riya";
    int age = 13;
    float height = 5.2;
    char grade = 'A';
    bool isStudent = true;

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;
    cout << "Grade: " << grade << endl;
    cout << "Student: " << isStudent << endl;

    return 0;
}
```

---

# 14. Real Life Analogy

| Real Life        | Programming |
| ---------------- | ----------- |
| Water Bottle     | Variable    |
| Water/Juice/Milk | Datatype    |

Bottle same hoti hai, lekin andar alag type ki cheezein ho sakti hain.

---

# 15. Practice Questions

1. Variable kya hota hai?
2. Datatype kya hota hai?
3. `int` aur `float` mein difference batao.
4. `char` datatype kisliye use hota hai?
5. `sizeof()` function kya karta hai?
6. `bool` datatype ki values kaunsi hoti hain?

---

# 16. Conclusion

* Variable data store karta hai.
* Datatype data ka type batata hai.
* Har datatype ka:

  * Different size hota hai
  * Different range hota hai

## Common Datatypes

* `int`
* `float`
* `double`
* `char`
* `string`
* `bool`

Programming ki foundation strong karne ke liye Variables aur Datatypes samajhna bahut zaroori hai.
