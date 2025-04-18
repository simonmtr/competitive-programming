# CF Problems done

|COUNTER|DATE|ID|RATING|NOTES|LINK|
|-------|----|--|------|-----|----|
|28|19.04.2024|327A|1200|Keep counter of existing ones, keep continuing sum of 0s that could turn into ones, update answer based on continued sum, output is either n-1 if its all 1s from begin with or the ones + commulative answer.|[Code](cf_problems/1200/327A.cpp)|
|27|19.04.2025|514A|1200|All numbers >4 should be switched, except the leading 9.|[Code](cf_problems/1200/514A.cpp)
|26|18.04.2025|1352C|1200|Calculate the kth integer which we then have to increase for each multiplier of n up to that point|[Code](cf_problems/1200/1352C.cpp)|
|25|17.04.2025|466A|1200|Check edgecase if its cheaper to just always take the one stop ticket over the multistop ticket. If no, calculate the amounts of being able to use the multistop ticket and the min of using a multistop or multiple one stop tickets for the rest of the trip. Output that calculation.|[Code](cf_problems/1200/466A.cpp)|
|24|16.04.2025|189A|1300|Create DP with values on dp[a,b,c] = 1. Go through l and for each i check if i+a,b,c < l -> find max of last dp[a,b,c] and current dp+1. Output dp[l] in the end.|[Code](cf_problems/1300/189A.cpp)|
|23|15.04.2025|580C|1500|DFS with keeping track of the cats already seen on the route. Create a dict for connections between nodes. Keep counter of possible paths when leaf node is reached. Output that count in the end.|[Code](cf_problems/1500/580C.cpp)|
|22|14.04.2025|520B|1400|BFS with keeping track of the depth on in the visited list. If the value is equal to m, output the depth.|[Code](cf_problems/1400/520B.cpp)|
|21|13.04.2025|466C|1700|One list for keeping track of the total sum at point i. Cover edgecase where i%3!=0. Go through the sums list and increase a counter for everytime the value is a third and add this count to the result every time it is two thirds. Output the result in the end.|[Code](cf_problems/1700/466C.cpp)|
|21|12.04.2025|550A|1500|Three booleans, one for ABfound, one for BAfound, one if its overlapping. If statements to check AB and BA where found while not being overlapped. Output the result.|[Code](cf_problems/1500/550A.cpp)|
|20|12.04.2025|455A|1500|Create one list to store the amounts of each number. Create DP, for each step find the max of the last one or the second to last one + the amount of the current number*the current number. Output dp[n] at the end.|[Code](cf_problems/1500/455A.cpp)|
|19|07.04.2025|4C|1300|Use a map, if the name is in the map already add a counter to it, else add it to the map. Output the name in order.|[Code](cf_problems/1300/4C.cpp)|
|18|06.04.2025|158B|1100|Count the groups of 1,2,3,4 people. If statement to prioritize matching while reducing the group count, for example 3s match with 1s, 2s with 2s, .... Output the taxi count at the end.|[Code](cf_problems/1100/158B.cpp)|
|17|05.04.2025|479A|1000|Return the max() of all the possible calculations.|[Code](cf_problems/1000/479A.cpp)|
|16|05.04.2025|122A|1000|If statement with modulo on all possible numbers between 0 and 1000 that contain a 7 or 4.|[Code](cf_problems/1000/122A.cpp)|
|15|05.04.2025|58A|1000|Two pointers, one for the 'hello' string and one for the input string. Go through the input string and count the hits on 'hello'. Check in the end if lenght of 'hello' is same as counter, output YES and NO accordingly.|[Code](cf_problems/1000/58A.cpp)|
|14|05.04.2025|1A|1000|Calculate ((n+a-1)/a) * (m+a-1)/a)) to get the output.|[Code](cf_problems/1000/1A.cpp)|
|13|05.04.2025|25A|1300|Count even and odd numbers and have one variable to overwrite the latest even or odd number. In the end check the bigger count and output the corresponding number.|[Code](cf_problems/1300/25A.cpp)|
|12|05.04.2025|69A|1000|Go through all inputs, track count for each x y z. Check if all sums are 0 in the end and output the result.|[Code](cf_problems/1000/69A.cpp)|
|11|04.04.2025|118A|1000|Go through string, check for the vowel, if yes add a '.' to the place where the vowel would have been. Output the resulting string.|[Code](cf_problems/1000/118A.cpp)|
|10|04.04.2025|266A|800|Go through the string, if the last char is the same as the current, add one to the count and output the count in the end.|[Code](cf_problems/800/266A.cpp)|
|9|03.04.2025|2095A|X|Output the word 'puzzling'.|-|
|8|26.02.2025|1692A|800|Count the amount of numbers that are higher than a, output the count.|-|
|7|24.02.2025|1742A|800|If statement that checks if one is the sum of the others, output YES or NO depending on the result.|-|
|6|22.02.2025|734A|800|Keep counter for the case that Anton wins, in the end calculate if he won more than half, its even or lost more than half.|-|
|5|22.02.2025|791A|800|As long as a<=b increase a by 3 and b by 2, keep count and output the count in the end.|-|
|4|20.02.2025|236A|800|Add chars to list, if in the end %2 == 0 -> Female|-|
|3|20.02.2025|231A|800|Sum the votes, if its more than 2 add to the result counter and output the result.|-|
|2|18.02.2025|2069A|800|Check the array if the string '101' exists. If thats the case there is an error and output NO|-|
|1|18.02.2025|4A|800|If watermelons are divisible by 2 and more than 2 then output YES.|-|
---
