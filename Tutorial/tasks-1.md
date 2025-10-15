# Polygon Problem Creation Tasks

These tasks are designed to help you practice creating complete problems on **Polygon** — including the **statement**, **generator**, **validator**, and (if applicable) **checker**. Each task covers a different type of problem and concept.

---

## 🧩 **Task 1: XOR of Two Integers**

### **Problem Statement**

Given two integers `A` and `B`, print their bitwise XOR result.

### **Input Format**

Two integers `A` and `B` (`0 ≤ A, B ≤ 10^9`).

### **Output Format**

A single integer representing `A XOR B`.

### **Example**

**Input:**

```
5 3
```

**Output:**

```
6
```

(Since `5 XOR 3 = 6`)

### **Generator Requirements**

* Randomly generate two integers `A` and `B` within `[0, 10^9]`.

### **Validator Requirements**

* Ensure there are exactly two integers in the input.
* Check that `A` and `B` are within the specified range.

### **Concepts Covered**

* Simple I/O format.
* Basic integer constraints.
* Writing minimal validators.

---

## 🧮 **Task 2: Problem 1904A (from Codeforces)**

### **Objective**

Recreate the full problem, including the **statement**, **generator**, **validator**, and **checker**, based on the official Codeforces problem:
🔗 [Codeforces 1904A](https://codeforces.com/contest/1904/problem/A)

### **Requirements**

* Reproduce the complete statement using LaTeX syntax in Polygon.
* Implement a **generator** that produces random test cases following the same constraints.
* Write a **validator** that checks all input conditions.
* Implement a **checker** that verifies correctness (or reuse standard checkers if applicable).
---

## 🧮 **Task 3: Frequency Array of Strings**

### **Objective**

Given ( T ) test cases, each test case contains a string consisting of lowercase Latin letters. For each string, print its **frequency array** — an array of 26 integers, where the ( i^{th} ) number represents how many times the ( i^{th} ) letter of the English alphabet appears in the string.

### Input Format

* The first line contains a single integer ( T ) — the number of test cases.
* Each of the next ( T ) lines contains a single string ( s ) (consisting of lowercase Latin letters).

### Output Format

For each test case, output a line of 26 space-separated integers representing the frequency of each letter from 'a' to 'z'.

### Constraints

* ` 1 ≤ T ≤ 10^4 `
* ` 1 ≤ |s| ≤ 10^5 `
* `The total length of all strings does not exceed ( 10^6 ).`

**Input:**

```
2
abc
abbc
```
**Output:**

```
1 1 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
1 2 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
```



## 🔢 **Task 4: Permutation of N**

### **Problem Statement**

You are given an integer `N`. Print any valid permutation of numbers from `1` to `N`.

### **Input Format**

A single integer `N` (`1 ≤ N ≤ 10^5`).

### **Output Format**

A single line containing a permutation of integers from `1` to `N`.

### **Example**

**Input:**

```
5
```

**Output:**

```
3 1 5 2 4
```
(Any valid permutation is accepted)

### **Generator Requirements**

* Randomly generate `N` within `[1, 10^5]`.

### **Validator Requirements**

* Check that `N` is within the range.
* Ensure the output (if validated) is a valid permutation.

### **Concepts Covered**

* Permutation logic.
* Randomized generation.
* Range validation.

---

## ⚙️ **Task 5: Valid Parentheses Sequence**

### **Problem Statement**

You are given an even integer `N`. Print any valid parentheses sequence of length `N`.

### **Input Format**

A single integer `N` (`2 ≤ N ≤ 10^6`, and `N` is even).

### **Output Format**

A string of length `N` consisting only of `(` and `)`, forming a valid parentheses sequence.

### **Example**

**Input:**

```
6
```

**Output:**

```
(()())
```

(Other valid outputs like `(())()` are also accepted)

### **Generator Requirements**

* Randomly generate an even integer `N`.

### **Validator Requirements**

* Ensure `N` is even and within the valid range.
---
