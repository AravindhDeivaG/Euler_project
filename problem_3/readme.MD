The prime factors of 13195 are 5,7,13 and 29.

What is the largest prime factor of the number 600851475143 ?


Method used:

1) If the given number is even, divide the number by 2 till it becomes odd.
2) To get a list of prime numbers start with 3 and increment by steps of 2 (series of odd numbers) and check if the number is prime.
3) Check for prime number is done by dividing the current odd number by all the previous prime numbers. iIf it is not divisible by any of the previous prime numbers then the current number is prime and is appended to the prime number list.
4) Check if the given number is divisible by the current largest prime number you have. Divide till it is not divisible by that number. 
5) Exit the code when the number becomes 1
6) The last prime number where you stopped is the largest prime factor


Reference:
1) Refer Long Long int in the following link
https://www.geeksforgeeks.org/difference-between-long-int-and-long-long-int-in-c-cpp/