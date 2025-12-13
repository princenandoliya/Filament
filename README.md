# 📘 C String Programs

This repository contains **C programs related to string manipulation**, focusing on:

* ✅ Palindrome checking
* 🔤 Frequency count of characters in a string

These programs are useful for beginners learning **arrays, strings, loops, and logic building in C**.

---

## 🟢 Program 1: Palindrome Check Using String Reversal

### 📌 Description

This program:

1. Accepts a string from the user
2. Reverses the string manually
3. Compares the original and reversed strings
4. Determines whether the string is a **palindrome**

A palindrome is a string that reads the same forward and backward.

---

### 💻 Source Code

```c
#include <stdio.h>

int main()
{
    char str[100], rev[200];
    int i, j, len = 0;

    printf("Enter any string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        len++;
    }

    j = len - 1;
    for (i = 0; i < len; i++) {
        rev[i] = str[j];
        j--;
    }

    rev[i] = '\0';

    int palindrome = 1;
    for (i = 0; i < len; i++) {
        if (str[i] != rev[i]) {
            palindrome = 0;
            break;
        }
    }

    if (palindrome == 1) {
        printf("Output: The given string is a palindrome.\n");
    } else {
        printf("Output: The given string is not a palindrome.\n");
    }

    return 0;
}
```

---

### ▶️ Sample Input

```
Enter any string: level
```

### 📤 Sample Output

```
Output: The given string is a palindrome.
```

---

## 🟢 Program 2: Frequency of Each Character in a String

### 📌 Description

This program:

1. Accepts a string from the user
2. Uses an array of size 256 to store ASCII character frequencies
3. Displays how many times each character appears in the string

---

### 💻 Source Code

```c
#include <stdio.h>

int main() {
    char str[100];
    int frequency[256] = {0};

    printf("Enter any string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        frequency[(int)str[i]]++;
    }

    printf("Frequency of each letter:\n");

    for (int i = 0; i < 256; i++) {
        if (frequency[i] > 0) {
            printf("%c => %d\n", i, frequency[i]);
        }
    }

    return 0;
}
```

---

### ▶️ Sample Input

```
Enter any string: programming
```

### 📤 Sample Output

```
Frequency of each letter:
p => 1
r => 2
o => 1
g => 2
a => 1
m => 2
i => 1
n => 1
```

---

## 🛠 Concepts Used

* Strings and character arrays
* ASCII values
* Loops (`for`)
* Conditional statements
* Manual string reversal

