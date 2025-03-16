# **How to Submit Your Task Solution**  

To submit your solution, follow these steps carefully:  

### **Step 1: Fork the Repository**  
1. Open the GitHub repository link provided.  
2. Click on the **Fork** button (top right corner).  
3. This creates a copy of the repository under your account.  

### **Step 2: Clone Your Forked Repository**  
1. Open a terminal and run:  

   ```sh
   git clone <your-forked-repo-url>
   ```
   Replace `<your-forked-repo-url>` with the actual URL of your forked repository.  

2. Navigate into the repository:  

   ```sh
   cd <repo-name>
   ```

---

### **Step 3: Create a New Branch**  
1. Run the following command to create a new branch:  

   ```sh
   git checkout -b yourname_tasknumber
   ```
   - Replace `yourname` with **your actual name**.  
   - Replace `tasknumber` with the **task number** (e.g., `task3`).  

   Example:  
   ```sh
   git checkout -b ahmed_task3
   ```

---

### **Step 4: Add Your Solution File**  
1. Create a new file inside the repository.  
2. Name the file:  
   ```
   yourname_tasknumber.cpp
   ```
   Example:  
   ```
   ahmed_task3.cpp
   ```
3. Write your **generator and validator** inside this file.  

---

### **Step 5: Commit and Push Your Changes**  
1. Stage your changes:  

   ```sh
   git add yourname_tasknumber.cpp
   ```

2. Commit your changes:  

   ```sh
   git commit -m "Added solution for tasknumber by yourname"
   ```
   Example:  
   ```sh
   git commit -m "Added solution for task3 by Ahmed"
   ```

3. Push your changes:  

   ```sh
   git push origin yourname_tasknumber
   ```

---

### **Step 6: Open a Pull Request (PR)**  
1. Go to your **forked repository** on GitHub.  
2. Click the **Compare & pull request** button.  
3. Write a brief description of your solution.  
4. Click **Create pull request**.  

---

### **Step 7: Wait for Review**  
Your submission will be reviewed. If changes are requested, update your code and push again using:  

```sh
git commit -am "Fixed issues in task3"
git push origin yourname_tasknumber
```

---

### **Video Guide**  
📺 **Watch this video for a step-by-step explanation:**  
🔗 [How to Submit on GitHub](https://www.youtube.com/watch?v=n43bagVuJPU&t=599s&ab_channel=ElzeroWebSchool)  

