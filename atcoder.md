# AtCoder Problems

|COUNTER|ID|CONTEST TYPE|SCORE|NOTES|CODE|AC-URL|
|-------|--|------------|-----|-----|----|------|
|24|B|ABC|122|200|Go through all chars and keep count of the longest.|[Code](problems/atcoder/ABC_122B.py)|[AC-URL](https://atcoder.jp/contests/abc122/tasks/abc122_b)|
|23|C|ABC|138|300|Read the input, sort it and then always map the lowest values and divide. Return the last output.|[Code](problems/atcoder/ABC_138C.py)|[AC-URL](https://atcoder.jp/contests/abc138/tasks/abc138_c)|
|22|C|ABC|142|300|Read the input and save the read input at its position in a pre allocated array.|[Code](problems/atcoder/ABC_142C.py)|[AC-URL](https://atcoder.jp/contests/abc142/tasks/abc142_c)|
|21|C|ABC|132|300|First we have to sort the list, then we have to check the value left of the middle and right of the middle and substract them, that gives us the result.|[Code](problems/atcoder/ABC_132C.py)|[AC-URL](https://atcoder.jp/contests/abc132/tasks/abc132_c)|
|20|C|ABC|161|300|Essentially its n%k or k-(n%k), so we just have to calculate that.|[Code](problems/atcoder/ABC_161C.py)|[AC-URL](https://atcoder.jp/contests/abc161/tasks/abc161_c)|
|19|A|AGC|014|300|Simple calculations, mind the edgecase that when all abc are equal it will go on forever.|[Code](problems/atcoder/AGC_014A.py)|[AC-URL](https://atcoder.jp/contests/agc014/tasks/agc014_a)|
|18|C|ABC|160|300|Calculate the biggest gap between the houses, then return the value of the whole circle - biggest_gap as this is the best route.|[Code](problems/atcoder/ABC_160C.py)|[AC-URL](https://atcoder.jp/contests/abc160/tasks/abc160_C)|
|17|B|ABC|068|200|Keep track of the current highest number that is valid and compare with all n.|[Code](problems/atcoder/ABC_068B.py)|[AC-URL](https://atcoder.jp/contests/abc068/tasks/abc068_b)|
|16|B|ABC|065|200|Keep track of seen nodes for circles and keep track of amount of jumps, then just jump to the next index and check if the value is 2.|[Code](problems/atcoder/ABC_065B.py)|[AC-URL](https://atcoder.jp/contests/abc065/tasks/abc065_b)|
|15|E|eduDP|100|Create dp and save minimum weight to achieve the value at i, in the end check for maximum value until W.|[Code](problems/contests/atcoder/edu_dp/E.py)|[AC-URL](https://atcoder.jp/contests/dp/tasks/dp_e)|
|14|D|eduDP|100|Compute for every w the maximum value to achieve that.|[Code](problems/contests/atcoder/edu_dp/D.py)|[AC-URL](https://atcoder.jp/contests/dp/tasks/dp_d)|
|13|C|eduDP|100|Create DP of [0,0,0] and keep the max value for each task in that. Each step, check what would have been the max of choosing both other last options.|[Code](problems/contests/atcoder/edu_dp/C.py)|[AC-URL](https://atcoder.jp/contests/dp/tasks/dp_c)|
|12|B|eduDP|100|Similar to A, create a empty dp array, then loop until n and for each check all the k options.|[Code](problems/contests/atcoder/edu_dp/B.py)|[AC-URL](https://atcoder.jp/contests/dp/tasks/dp_b)|
|11|A|eduDP|100|Create dp[0] and dp[1], then iterate up to N and calculate the min of the last and the second to last.|[Code](problems/contests/atcoder/edu_dp/A.py)|[AC-URL](https://atcoder.jp/contests/dp/tasks/dp_a)|
|10|088B|ABC|200|Sort the input, add alternating to alice and bobs score, print result.|[Code](problems/atcoder/ABC_088B.cpp)|[AC-URL](https://atcoder.jp/contests/abc088/tasks/abc088_b)|
|9|074B|ABC|200|Calculate X axis difference for each robot for each eye. Add the minimum to the endresult.|[Code](problems/atcoder/ABC_074B.cpp)|[AC-URL](https://atcoder.jp/contests/abc074/tasks/abc074_b)|
|8|086B|ABC|200|Concatinate strings, check if int value of sqrt is same as actual value.|[Code](problems/atcoder/ABC_086B.cpp)|[AC-URL](https://atcoder.jp/contests/abc086/tasks/abc086_b)|
|7|157B|ABC|200|For each input check the whole board as its quite small.|[Code](problems/atcoder/ABC_157B.cpp)|[AC-URL](https://atcoder.jp/contests/abc157/tasks/abc157_b)|
|6|2020B|PPC|200|If height and width is not 1, the bishop can access half the board.|[Code](problems/atcoder/PPC_2020B.cpp)|[AC-URL](https://atcoder.jp/contests/panasonic2020/tasks/panasonic2020_b)|
|5|121B|ABC|200|Simple implementation, read in one A array at a time and update the result.|[Code](problems/atcoder/ABC_121B.cpp)|[AC-URL](https://atcoder.jp/contests/abc121/tasks/abc121_b)|
|4|sumit_2019B|SUMIT|200|Calculate the original number, then check the floor and the floor + 1 to reverse it, see if the original value is the result.|[Code](problems/atcoder/sumit_2019B.cpp)|[AC-URL](https://atcoder.jp/contests/sumitrust2019/tasks/sumitb2019_b)|
|3|codefestival_2016_qualB_b|CODEFESTIVAL|200|Simple implementation problem, if else and keep counters for passed and oversea passed.|[Code](problems/atcoder/codefestival_2016_qualB_b.cpp)|[AC-URL](https://atcoder.jp/contests/code-festival-2016-qualb/tasks/codefestival_2016_qualB_b)|
|2|156C|ABC|300|Calculate the mean of the array, then check the result for the ceiling and floor of that mean.|[Code](problems/atcoder/ABC_156C.cpp)|[AC-URL](https://atcoder.jp/contests/abc156/tasks/abc156_c)|
|1|139B|ARC|200|Simple math, add (a-1) until reaching the target.|[Code](problems/atcoder/ARC_139B.cpp)|[AC-URL](https://atcoder.jp/contests/abc139/tasks/abc139_b)|