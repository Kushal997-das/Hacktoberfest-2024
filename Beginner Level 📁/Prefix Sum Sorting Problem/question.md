<b>Problem Statement</b>
You are given two strings a and b of length n. Then, you are (forced against your will) to answer q queries. For each query, you are given a range bounded by l and r. In one operation, you can choose an integer i (l≤i≤r) and set ai=x where x is any character you desire. Output the minimum number of operations you must perform such that sorted(a[l..r])=sorted(b[l..r]). The operations you perform on one query does not affect other queries.

For an arbitrary string c, sorted(c[l..r]) denotes the substring consisting of characters cl,cl+1,...,cr sorted in lexicographical order.

<b>Input</b>
The first line contains t (1≤t≤1000) – the number of test cases. The first line of each test case contains two integers n and q (1≤n,q≤2⋅10^5) – the length of both strings and the number of queries.

The following line contains a of length n. It is guaranteed a only contains lowercase latin letters. 
The following line contains b of length n. It is guaranteed b only contains lowercase latin letters. 
The following q lines contain two integers l and r (1≤l≤r≤n) – the range of the query.

<b>Output</b>
For each query, output an integer, the minimum number of operations you need to perform in a new line.