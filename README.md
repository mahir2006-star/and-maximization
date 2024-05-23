# and-maximization
::: problem
AND MAXIMIZATIONstandard inputstandard output2 seconds256 megabytes

Your friend was given an array a of integers. He loves to perform
bitwise operations, particularly and operation. He chooses any two
integers b and c from the array and takes their bitwise and (&).He wants
to choose any two numbers so that the bitwise and is maximized. The
algorithm he writes is unoptimized. You need to write an efficient
algorithm for him to calculate the maximum bitwise and.

An integer t (1\<=t\<=1000) corresponding to the number of testcases
shall be given. For each testcase an integer n(1\<=n\<=2000) denoting
the number of numbers shall be provided.The numbers shall lie between 1
to 1000000000.

For each testcase output an integer between 1 to 1000000000 denoting the
maximum possible and(&) between any two numbers provided.

::: example
1
4
1
2
3
4
:::

In the first example a=\[1,2,3,4\]

Clearly,

1 & 2 = 0

1 & 3 = 1

1 & 4 = 0

2 & 3 = 2

2 & 4 = 0

3 & 4 = 0

Hence, the maximum and is between 2 and 3 and it is 2.
:::
