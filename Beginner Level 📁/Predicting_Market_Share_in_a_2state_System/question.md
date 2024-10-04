In a retail market, a company operates in two regions: Region A and Region B. The company's market share evolves over time, and it aims to predict its future market share using a simple Markov Chain model.

Initially, the company's market share is 60% in Region A (denoted as State 1) and 40% in Region B (denoted as State 2).
In each time period, 50% of customers in Region A remain with the company, while 50% switch to a competitor.
In Region B, 75% of customers remain with the company, while 25% switch to a competitor.

Using this information, analyze the company's market share evolution over time.

Based on the Markov Chain model, determine the transition matrix and calculate the market share distribution after 2 time periods, assuming the system follows the initial market share conditions.

Sample Input

0.6 0.4 10


Sample Output

After iteration 1: E = 0.5000, M = 0.4500
After iteration 2: E = 0.4750, M = 0.4625
After iteration 3: E = 0.4688, M = 0.4656
After iteration 4: E = 0.4672, M = 0.4664
After iteration 5: E = 0.4668, M = 0.4666
After iteration 6: E = 0.4667, M = 0.4667
After iteration 7: E = 0.4667, M = 0.4667
After iteration 8: E = 0.4667, M = 0.4667
After iteration 9: E = 0.4667, M = 0.4667
After iteration 10: E = 0.4667, M = 0.4667
Final market shares after 10 iterations:
Region A = 0.4667, Region B = 0.4667