# DSA MOCK TEST-1 C++

### Solution Submited by Vikas Rai

### My Approach

Q1. Move Zeroes (LeetCode)
 
Given Array = [0,1,0,3,12]

Time Complexity: O(n)
Space:O(1)

 1. Initialize two variables i =0 and j=0; // Two Pointer Approach

 2. First Traverse the array ,and check if the element at current index is  zero or not.

 3. So traverse the array and check if the current element is not Zero, then move that element to arr[j] and increment (j) pointer.

 4. After that when the array is traversed, the again create a new while loop with condition while( j < arr.size()), insert value at arr[j] =0;

Q2. First Unique Character in a string (LeetCode)

Time Complexity: O(n)
Space:O(1)

1. Create a new array count with size 26 and initialize all of them with 0's .

2. Now traverse the string, and for each chracter  we will increase the value in the count array at particluar poistion by 1, so 0th index is for Char (a), 1th index is for char (b), similary 25th index is for char (z);

3. now we will create a new for loop and check if (count [s[i] - 'a] == 1) // which means that this particluar character at the ith position is unique.

4. Return the index of this Ith position character.