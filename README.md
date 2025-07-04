# Challenge: Multiples of 2, 3, 5

## Setup Instructions

```bash
# Clone the repository
git clone https://github.com/baync180705/AKBuild-Challenge.git
cd AKBuild-Challenge

# Compile and run the brute-force approach
g++ 2_3_5_Brute_Force.cpp -o brute_method
./brute_method

# Compile and run the set-based approach
g++ 2_3_5_Set_Approach.cpp -o set_method
./set_method
```
Input the value of N (eg: 1500, 10000000, 100000) when prompted in the terminal.
Make sure to have a C++ compiler (eg: g++) installed on your system.

## Problem

Generate the N-th number in a sequence of numbers whose only prime factors are 2, 3, and 5. For example:  
`1, 2, 3, 4, 5, 6, 8, 9, 10, 12, 15, ...`

---

## Approaches Implemented

### 1. Brute Force

- For each number starting from 1, repeatedly divide it by 2, 3, and 5.
- If the result is 1 after all divisions, it's a valid number.
- Continue until the N-th valid number is found.

**Time Complexity:**  
O(F(N) · log F(N)), where F(N) is the N-th number.

**Space Complexity:**  
O(1)

**Limitations:**  
Extremely slow for large values of N (e.g., 10⁵ or 10⁶) since many invalid numbers are checked and discarded. I Could only use this method for computing F(1500), 100,000 and 10,000,000 were take exremly long time, hence I started to think about a more optimized solution wherein not every number is checked and discarded.

---

### 2. Set-Based Expansion

- Start with 1, and repeatedly insert `current × 2`, `current × 3`, and `current × 5` into a set.
- Always extract the smallest number next.
- Repeat until reaching the N-th number.

**Time Complexity:**  
O(N · log N)

**Space Complexity:**  
O(N)

**Limitations:**  
Much faster than the brute force approach. Uses extra space to maintain the ordered set.

---

## Conclusion

Both approaches are correct and demonstrate different strategies:

- **Brute force**: simple but inefficient for large inputs.
- **Set-based**: more optimized but uses a set causing additional memory usage.

## Benchmarks (Execution Time on My Machine)

I have also added time logs in each code and printed the time taken for the process to execute. For small values of N, the brute force approach is actually giving faster results.

| N (Position) | Brute Force Time | Set-Based Time |
|--------------|------------------|----------------|
| 10           | 0 ms             | 43 ms          |
| 100          | 46 ms            | 164 ms         |
| 1,000        | 594,378 ms       | 1,935 ms       |
| 10,000       | Too long         | 17,247 ms      |

**Note:**  
- The brute-force approach becomes extremely slow as N increases, making it impractical for large inputs.
- The set-based method scales much better and is usable for reasonably large values of N.

