<!-- ✅ 1️⃣ Reverse a Number -->
Reverse a number (Example: 123 → 321)
First, I take the last digit of the number using the modulus operator (% 10).
Then I add that digit to a reverse variable after multiplying the reverse by 10.
After that, I remove the last digit from the original number by dividing it by 10.
I repeat this process until the number becomes 0.

Bas. Ye perfect answer hai 💯

Pehle main % 10 se last digit nikalti hoon.
Phir reverse variable ko 10 se multiply karke usme digit add karti hoon.
Fir original number ko / 10 karke last digit remove kar deti hoon.
Ye process tab tak repeat hota hai jab tak number 0 nahi ho jata.


# ✅ 1️⃣ Reverse a Number

### 🎤 Interview Logic:

> First, I extract the last digit using the modulus operator (%10).
> Then I multiply the reverse variable by 10 and add the extracted digit.
> After that, I remove the last digit from the original number by dividing it by 10.
> I repeat this process until the number becomes 0.

---

# ✅ 2️⃣ Palindrome Number

### 🎤 Interview Logic:

> First, I store the original number in a temporary variable.
> Then I reverse the number using the same logic as reverse number.
> Finally, I compare the reversed number with the original number.
> If both are equal, it is a palindrome; otherwise, it is not.

---

# ✅ 3️⃣ Prime Number

### 🎤 Interview Logic:

> A prime number is divisible only by 1 and itself.
> So I check divisibility from 2 to n-1.
> If the number is divisible by any number in this range, it is not prime.
> Otherwise, it is prime.

(Extra strong answer 👇)

> We can optimize by checking till square root of n to reduce time complexity.

---

# ✅ 4️⃣ Fibonacci Series

### 🎤 Interview Logic:

> Fibonacci series starts with 0 and 1.
> Each next number is the sum of the previous two numbers.
> So I store first two numbers and then generate the next numbers using addition inside a loop.

---

# ✅ 5️⃣ Factorial

### 🎤 Interview Logic:

> Factorial means multiplying all numbers from 1 to n.
> So I initialize a variable with 1 and multiply it with numbers from 1 to n using a loop.

---

# ✅ 6️⃣ Swap Two Numbers (Without Third Variable)

### 🎤 Interview Logic:

> I add both numbers and store the result in first variable.
> Then I subtract second number from first to get the original first value.
> Finally, I subtract new second value from first to get original second value.

(Simple line version 👇)

> I use addition and subtraction to swap values without using extra memory.

---

# ✅ 7️⃣ Largest Element in Array

### 🎤 Interview Logic:

> First, I assume the first element is the largest.
> Then I compare it with every element in the array using a loop.
> If I find a larger element, I update the max variable.

---

# ✅ 8️⃣ Armstrong Number

(Example: 153 → 1³ + 5³ + 3³ = 153)

### 🎤 Interview Logic:

> First, I count the number of digits.
> Then I extract each digit using %10.
> I raise each digit to the power of total digits and add them.
> If the final sum equals the original number, it is an Armstrong number.

---


