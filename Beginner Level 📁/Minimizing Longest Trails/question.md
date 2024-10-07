Problem Description.

A hiker is planning a multi-day trek through the mountains. There are n trails, each with a certain length, given as a list, of trails, that need to be hiked in the order in the list. The hiker wants to achieve a new world record by completing the trek in a record number of days. Each day, the hiker will cover at least one trail and must minimize the sum of the lengths of the longest trail hiked each day. Find this minimum sum.
Example
There are n = 6 trails with lengths trails = [10, 5, 9, 3, 8, 15], and record = 2.
One optimal solution is for the hiker to cover the first trail on the first day, and the remaining trails on the second day. On the first day, the longest trail is 10, and on the second day, it is max(5, 9, 3, 8, 15) =
15. The sum of the lengths of the longest trails is 10 + 15 = 25. Return 25.
Function Description
Complete the function-efficient Trek in the editor below.
efficientTrek has the following parameters:
int trails: an array of integers denoting the order and length of the trails. int record: the number of days to cover all the trails.
Returns
int: the minimum sum of the longest trails on each day
Constraints
﻿﻿1≤ n≤ 300
﻿﻿1 ≤ record ≤ n ≤ 300
﻿﻿1 ≤ trails[i] ≤ 105
﻿﻿
﻿﻿Sample Input For Custom Testing

STDIN
Function

5 → trails[] size n = 5
150 →trails = [150, 200, 400, 350, 250]
200
400
350
250
3 →record = 3

Sample Output
750