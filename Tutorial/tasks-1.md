### **Tasks**

For each of the following tasks, you need to write the full problem on polygon:
---

### **Task 1: XOR of Two Integers**

#### **Problem Statement**

Given two integers `A` and `B`, print their XOR result.

#### **Input Format**

Two integers `A` and `B` (`0 ≤ A, B ≤ 10^9`).

#### **Output Format**

A single integer representing `A XOR B`.

#### **Example**

##### **Input**

```
5 3
```

##### **Output**

```
6
```

(Since `5 XOR 3 = 6`)

#### **Generator Requirements:**

- Randomly generate two integers `A` and `B` within the given range.

#### **Validator Requirements:**

- Check that `A` and `B` are within the given range.
- Ensure the input format is correct with exactly two integers.

---

### **Task 2: Problem 1904A (From Codeforces)**

#### **Problem Statement**

Recreate the full problem statement, generator, validator, and checker based on:  
🔗 [Codeforces Problem 1904A](https://codeforces.com/contest/1904/problem/A)

#### **Generator Requirements:**

- Generate test cases that follow the problem constraints.

#### **Validator Requirements:**

- Check that the input meets all constraints.

#### **Checker Requirements:**

- Validate that the output follows the problem’s requirements.

---

For each of the following tasks, you need to write:

1. **A generator** to create valid test cases.
2. **A validator** to ensure the generated test cases meet the constraints.

### **Task 3: Permutation of N**

#### **Problem Statement**

You are given an integer `N`. Generate a random permutation of numbers from `1` to `N`.

#### **Input Format**

A single integer `N` (`1 ≤ N ≤ 10^5`).

#### **Output Format**

A single line containing a permutation of integers from `1` to `N`.

#### **Example**

##### **Input**

```
5
```

##### **Output**

```
3 1 5 2 4
```

(Any valid permutation is accepted)

#### **Generator Requirements:**

- Randomly generate an integer `N` within the given range.
- Generate a valid permutation of numbers from `1` to `N`.

#### **Validator Requirements:**

- Check that the input consists of a single integer `N` within the allowed range.
- Ensure the output is a valid permutation of numbers from `1` to `N`.

---

### **Task 4: Random String of Lowercase Letters**

#### **Problem Statement**

You are given an integer `N`. Generate a random string of size `N` consisting of lowercase English letters.

#### **Input Format**

A single integer `N` (`1 ≤ N ≤ 10^6`).

#### **Output Format**

A single string of length `N` consisting of lowercase English letters (`a-z`).

#### **Example**

##### **Input**

```
8
```

##### **Output**

```
jksdfhwe
```

(Any valid random string of size `N` is accepted)

#### **Generator Requirements:**

- Randomly generate an integer `N` within the given range.
- Generate a string of length `N` containing random lowercase letters.

#### **Validator Requirements:**

- Check that the input consists of a single integer `N` within the allowed range.
- Ensure the output is a valid string of exactly `N` lowercase letters.

---

### **Task 5: Valid Parentheses Sequence**

#### **Problem Statement**

You are given an even integer `N`. Generate a valid parentheses sequence of length `N`.

#### **Input Format**

A single integer `N` (`2 ≤ N ≤ 10^6`, `N` is even).

#### **Output Format**

A single string of length `N` consisting only of `(` and `)`, forming a valid parentheses sequence.

#### **Example**

##### **Input**

```
6
```

##### **Output**

```
(()())
```

(Other valid sequences like `(())()` are also accepted)

#### **Generator Requirements:**

- Randomly generate an even integer `N` within the given range.
- Generate a valid parentheses sequence of length `N`.

#### **Validator Requirements:**

- Check that the input consists of a single even integer `N` within the allowed range.
- Ensure the output is a valid parentheses sequence where every opening bracket has a matching closing bracket.