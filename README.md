# Assignment2
*Team Members*
|   Enrollment No.  |   Name   | GithubId |
|   --------------  |   ----   | -------- |
|    IIB2019004  |   Saloni Singla | Saloni50 |
|    IIB2019005  |   Sandeep kumar |sandy9808 |
|    IIB2019006  |   Amanjeet Kumar | Amanjeetk11 |




## Group No-"21"

Faculty Name-"Dr. Rahul Kala"

Mentor Name- "Md. Meraz"



## Problem Statement
The longest Zig-Zag subsequence problem is to find length of the longest
subsequence of given sequence such that all elements of this are
alternating.
If a sequence {x1, x2, .. xn} is alternating sequence then its element satisfy
one of the following relation :
 x1 < x2 > x3 < x4 > x5 < …. xn or
 x1 > x2 < x3 > x4 < x5 > …. xn
Solve using Dynamic programming.


## How to use code
Download project
git clone https://github.com/Amanjeetk11/daa2.git 
Project Initialize 
```
cd daa
mkdir daa2

#go to daa2
cd daa2

#Create file
touch readme.md
touch code1.cpp
touch code2.cpp
.
.
```
---

Run the code
```
g++ code_1.cpp -o code_1
g++ code_2.cpp -o code_2
./code_1
./code_2
```
Output
```
Length of the longest sub sequence of given sequence such that all elements of this are alternating.
```
---

**Test case**

```

Test Case-1
Input:
4
10, 22, 9, 33, 49, 50, 31, 60
Output:
6
#--------------------------#
Test Case-2
Input:
10
1 17 5 10 13 15 10 5 16 8
Output:
7
```

---

### Theory
Let’s first formally define what subsequence is.
A  subsequence  is  a  sequence  that  can  be  derived  from  an-other  sequence  by  zero  or  more  elements,  without  changingthe  order  of  the  remaining  elements  as  an  example  for  thearray[1,2,3,4]the  subsequences  are  (1),  (2),  (3),  (4),  (1,2),(1,3),(1,4),  (2,3),  (2,4),  (3,4),  (1,2,3),  (1,2,4),  (1,3,4),  (2,3,4),(1,2,3,4)
---

### Analysis

**Time Complexity**

<br />Approach 1:
In this recursive divide and conquer approach, the function kthis called a total of logm+logn times. Thus the time complexityof this approach would beO(logk). The best case complexitywill be when either of m and n is zero or k is invalid or k isequal to 1. Thus, the best case time complexity isΩ(1)
<br />Approach 2:
In  this  recursive  divide  and  conquer  approach,  the  function kth  is  called  log  k  times.  Thus  the  time  complexity  of  thisapproach would beO(logm+ logn).The  best  case  complexity  will  be  when  either  of  m  and  n  iszero or k is invalid or k is equal to 1. Thus, the best case timecomplexity isΩ(1)

**Space Complexity**

<br />Approach 1:
<br />This algorithm has a space complexity of O(log k)
<br />Approach 2:
<br />This algorithm has a space complexity of O(log m+log n)

---

### Conclusion

<br />Above two methods have different time complexity & space complexity and meet to fulfill the problem statement. The order in which they are good can be listed as:
<br />I. Approach 1
<br />II. Approach 2
<br />Based on the time complexity and space complexity.

### References

<br />https://www.geeksforgeeks.org/k-th-element-two-sorted-arrays/
<br />https://tutorialspoint.dev/algorithm/divide-and-conquer/k-th-element-two-sorted-arrays
