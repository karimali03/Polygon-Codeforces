# **Introduction**

Welcome to this problem-setting guide! In this tutorial, we will walk through the complete process of creating a problem on Polygon, starting from the initial idea to uploading it on Codeforces.

## **How to Find a Good Problem Idea**

There are many ways to come up with a good problem idea. Here are some effective strategies:

1. **Solve a Lot of Problems**
    
    - While solving problems, take notes of interesting concepts and techniques.
    - Identify patterns or ideas that can be used in new problems.
2. **Combine Existing Problems**
    
    - Take two different problems you've seen before and merge their concepts into a new one.
    - Ensure the combination leads to a fresh challenge rather than just a mix of known ideas.
3. **Modify Constraints of an Existing Problem**
    
    - Increase or decrease constraints to change the difficulty.
    - Introduce new assumptions that force a unique approach or eliminate brute-force solutions.
4. **Take Inspiration from Mathematics & Puzzles**
    
    - Convert interesting mathematical observations into problems.
    - Adapt classic puzzles into a competitive programming format.
5. **Transform a Standard Problem**
    
    - Take a well-known problem (like shortest path or knapsack) and modify it in a way that makes it feel new.
    - Introduce additional constraints or special cases that require creative solutions.

## **Validating Your Idea**

Once you have an idea, you need to ensure it’s well-structured and solvable:

- **Check the main solution**: Make sure your intended solution is correct and efficient.
- **Implement a brute-force solution**: Try writing a simple brute-force solution that should get **TLE** (Time Limit Exceeded). This helps confirm that a more optimized approach is necessary.

## **Introduction to Polygon**

Now that we have discussed how to generate problem ideas, let's move on to **Polygon**—a platform designed for creating competitive programming problems. Polygon provides a structured way to define problem statements, generate test cases, and validate solutions efficiently.

To prepare a problem, we must **at least** provide the following:

- **The problem statement.**
- **Test cases.** To generate tests, we also need:
    - A correct solution.
    - A test generator.
- **A checker**, if the problem has non-unique answers.

For an overview of how to use Polygon, you can watch this video:  
📺 **[Polygon Tutorial](https://www.youtube.com/watch?v=ue2Qk494ylw&list=PLDzczzxlyEXbYSaTIS3dt1owGaupXUK7I&index=3&t=697s&ab_channel=ZyadHany)**

## **Writing the Problem Statement in Polygon**

A well-written problem statement is **clear, concise, and properly formatted**. It should be easy to understand and free from ambiguity.

You can refer to this Polygon **LaTeX manual** for detailed formatting guidelines: 🔗 **[Polygon Statements LaTeX Manual](https://polygon.codeforces.com/docs/statements-tex-manual)**

---

# **Test Case Generators in Testlib**

A generator is used to create multiple test cases based on predefined constraints. Since **Testlib generators are deterministic**, running the generator with the same parameters will always produce the same output. However, changing the parameters will result in different outputs.

### **Testlib Library**

Testlib is an official library used for problem setting on Codeforces. You can find the source code and documentation here:  
🔗 [Testlib GitHub Repository](https://github.com/MikeMirzayanov/testlib)

## **Setting Up the Generator**

To create a generator, follow these steps:

1. **Ensure `testlib.h` is in the problem folder**.
2. **Write the generator code** using `registerGen()`.
3. **Compile and run the generator** with parameters to generate different test cases.

## **Basic Generator Example**

Here’s a simple generator that outputs a single random number between `1` and `10^6`:

```cpp
#include "testlib.h"
using namespace std;

int main(int argc, char *argv[]) {
    registerGen(argc, argv, 1);
    println(rnd.next(1, 1000000));
}
```

## **Compiling and Running the Generator**

1. **Compile the generator:**
    
    ```sh
    g++ -o gen generator.cpp
    ```
    
2. **Run it with different parameters:**
    
    ```sh
    ./gen 1
    ./gen 3
    ./gen 5
    ```
    

### **Expected Output (Changes Based on Parameters)**

#### **Run: `./gen 1`**

```
504077
```

#### **Run: `./gen 3`**

```
808747
```

### **Using Generators in Polygon**

In **Polygon**, you can use a loop structure to generate multiple test cases automatically. For example:

```plaintext
<#list 1..4 as i>
    gen ${i} > $
</#list>
```

---

## **Validators in Testlib**

A **validator** ensures that the generated test cases are **correct** and **within the problem constraints**. Validators help catch invalid test cases before they are used in testing solutions.

### **Basic Validator Example**

```cpp
#include "testlib.h"
using namespace std;

int main(int argc, char *argv[]) {
    registerValidation(argc, argv);
    inf.readInt(1, 100, "n");
    inf.readEoln();
    inf.readEof();
}
```

---

## **Additional Resources**

📺 **Testing and Reviewing Problems:**  
🔗 [Video 1](https://www.youtube.com/watch?v=L6cb9IOv4cE)  
🔗 [Video 2](https://www.youtube.com/watch?v=KnMOEiySz0Y)

📺 **Creating Problems on Codeforces:**  
🔗 [Video](https://www.youtube.com/watch?v=xqkIZfWuTpY&t=8950s&ab_channel=KareemKhaled)
