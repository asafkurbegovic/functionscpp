# functionscpp

•	void my_factorial(int n);

Task for first method was to calculate factorial of given number. Our program is expected to be able to calculate factorial up to 30.
Simple recursion for method to calculate this is not possible because it the result integer is too small to store numbers bigger than
factorial of 12. To solve that problem we approached this problem in a way so the result that is calculated is stored in array.  
In order to be able to make this work we made two methods. First method was in charge to receive number which factorial should be 
calculated, loop up to the given number calling second function and then display result by looping again trough array of result. 
Second method, which is accessed by looping in first method, creates array of integers which stores numbers that are calculated using
for loop and multiple factorial with member of array and add on carry. Every time there is carry the size of array will increase by one.

**it was not possible create this method with unsigned long long  int because for all numbers bigger than 12 it couldn’t be stored in
memory**

•	unsigned long long int my_power(int base, int exp)

Second method which needed to be written had task to calculated wanted power of given numbers. To solve this we used recursion which will
decrement exponential until exponent is 1 and then stop by returning the base.

•	unsigned long long int my_choose(int n, int k)

Third method had to calculate combination for given number. Firstly we did this method with simple recursion within a 4 lines of code,
but because the number of combinations quickly increases by slightly increasing numbers, this way of calculating was inefficient. In order
to increase efficiency we came up with solution to crate matrix which will store result of every additions that happened while calculating
combinations and if there occurs combinations of numbers which was calculated before the program will uses that stored result instead
calculating it again.
