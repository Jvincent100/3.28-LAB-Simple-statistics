3.28 LAB: Simple statistics
<p>Part 1</p>
Given 4 integers, output their product and their average, using integer arithmetic.
<img width="755" alt="Screenshot 2024-03-05 at 2 44 48 PM" src="https://github.com/Jvincent100/3.28-LAB-Simple-statistics/assets/155997904/c8e30c7a-dddc-4e2e-a016-977f165f845e">
<p></p>Note: Integer division discards the fraction. Hence the average of 8 10 5 4 is output as 6, not 6.75.</p>

Note: The test cases include four very large input values whose product results in overflow. You do not need to do anything special, but just observe that the output does not represent the correct product (in fact, four positive numbers yield a negative output; wow).

Submit the above for grading. Your program will fail the last test cases (which is expected), until you complete part 2 below.

Part 2
Also output the product and average, using floating-point arithmetic.

Output each floating-point value with three digits after the decimal point, which can be achieved by executing
cout << fixed << setprecision(3); once before all other cout statements.

<img width="507" alt="Screenshot 2024-03-05 at 2 50 21 PM" src="https://github.com/Jvincent100/3.28-LAB-Simple-statistics/assets/155997904/63e194ff-af95-43fd-8884-67d7536e2071">
<p></p>Note that fractions aren't discarded, and that overflow does not occur for the test case with large values.</p>
